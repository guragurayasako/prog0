/*B-3 曜日の計算*/
/*閏年でないある年の1月1日は土曜日であった。 その年の月日を入力したら、その日付が元旦から何日目であるかと 何曜日であるかを計算して表示するプログラムを作成しなさい。 ただし、while文とswitch-case文を利用した以下の仕様に従うものとする。

仕様

1月1日から入力された月日までの日数(積算日数)を、while文を用いて、各月の日数(28/30/31日)に基づき、計算する。
計算した積算日数から曜日を求める。この時のみswitch-case文を用いる。
誤った日付やあり得ない日付が入力された場合のエラー処理は考慮しなくてもよい。*/

/*2022.6.27*/

#include<stdio.h>

int main()
{
    int month, day; //入力された月日
    int total_day = 0; //積算日数
    int count = 1; //while内で用いる月の値

    printf("月と日を空白で区切って入力してください：");
    scanf("%d %d",&month, &day);

    while(count < month) //積算日数を求める 
    {
        if(count == 1 ||
           count == 3 || 
           count == 5 || 
           count == 7 ||
           count == 8 || 
           count == 10|| 
           count == 12) 
           total_day += 31;

        if(count == 4 || 
           count == 6 || 
           count == 9 || 
           count == 11) 
           total_day += 30;

        if(count == 2)
           total_day += 28;

        count++;
    }

    total_day += day;

    switch(total_day % 7)
    {
        case 1: 
            printf("2022年%d月%d日は%d日目で土曜日です\n",month, day, total_day);
            break;
        case 2: 
            printf("2022年%d月%d日は%d日目で日曜日です\n",month, day, total_day);
            break;
        case 3:
            printf("2022年%d月%d日は%d日目で月曜日です\n",month, day, total_day);
            break;
        case 4: 
            printf("2022年%d月%d日は%d日目で火曜日です\n",month, day, total_day);
            break;
        case 5: 
            printf("2022年%d月%d日は%d日目で水曜日です\n",month, day, total_day);
            break;
        case 6: 
            printf("2022年%d月%d日は%d日目で木曜日です\n",month, day, total_day);
            break;
        case 0: 
            printf("2022年%d月%d日は%d日目で金曜日です\n",month, day, total_day);
            break;
    }


    return 0;
}

/*[実行例]

% ./a.out
月と日を空白で区切って入力してください　：1 1
2022年1月1日は1日目で土曜日です
% ./a.out
月と日を空白で区切って入力してください　：4 10
2022年4月10日は100日目で日曜日です
% ./a.out
月と日を空白で区切って入力してください　：6 23
2022年6月23日は174日目で木曜日です*/