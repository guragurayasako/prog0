/*E-1 曜日の判別*/
/*西暦 y 年 m 月 d 日の曜日は

{y + (y/4) - (y/100) + (y/400) + (13m + 8)/5 + d} mod 7

の値が、0 なら日曜日、1 なら月曜日、2 なら火曜日 ... 6 なら土曜日になる。
ただし、1月と2月の場合は、それぞれ前年の13月、14月と置き換える必要がある。
これはツェラーの公式と呼ばれるものの一種である。
この式を使って、年月日を入力すると曜日を出力するプログラムを作成しなさい。
なお、上記の式中の x mod n は、x を n で割った剰余を意味している。*/

#include<stdio.h>

int main()
{
    int y, m, d;
    printf("年月日を入力して下さい ");
    scanf("%d%d%d",&y,&m,&d);
    if(m < 3)
    {
        y -= 1;
        m += 12;
    }
    switch((y + (y/4) - (y/100) + (y/400) + (13*m + 8)/5 + d) % 7)
    {
        case 0:
            printf("日曜日\n");
            break;
        case 1:
            printf("月曜日\n");
            break;
        case 2:
            printf("火曜日\n");
            break;
        case 3:
            printf("水曜日\n");
            break;
        case 4:
            printf("木曜日\n");
            break;
        case 5:
            printf("金曜日\n");
            break;
        case 6:
            printf("土曜日\n");
            break;
    }
    return 0;
}

/*実行例
% ./a.out
年月日を入力して下さい 2022 1 1
土曜日
% ./a.out
年月日を入力して下さい 2022 6 20
月曜日
% ./a.out
年月日を入力して下さい 2022 6 21
火曜日
%*/