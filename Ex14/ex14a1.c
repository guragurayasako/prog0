/*A-1 ヒストグラム*/
/*入力された整数データを、
横向きのヒストグラムのように表示するプログラムを作成しなさい。プログラムの仕様は以下とする。

入力可能な整数値の個数は最大で20とし、その値はマクロで定義する。
負の値が入力されたら入力終了とし、ヒストグラムの表示を行う。
ヒストグラムの表示を行うための関数 histgram を作成して使用する。
histgram関数は int型の引数を一つ取り、その値（数字）と、その値の数だけ「#」を出力する（実行例参照）。
histgram関数の引数に70より大きい値が入った場合は、
"illegal value!" というメッセージを標準エラー出力に出力して強制終了する
（終了時にシェル変数へは「4」を渡す。ハンドアウト Lec12-23 参照）。*/

/*2022.8.1*/

#include<stdio.h>
#include<stdlib.h>

#define MAX 20          //入力できる値の数の最大値
void histgram( int );   //ヒストグラムを表示する関数

int main()
{
    int data[MAX];      //入力される値
    int i=0,j;          //カウンタ

    while(1)            //読み取り
    {
        scanf("%d", &data[i]);
        if( data[i] < 0 ) break;
        i++;
    }

    for( j=0 ; j < i ; j++ )  //ヒストグラム表示
        histgram( data[j] );

    return 0;
}

void histgram( int x )
{
    if( x > 70)     //70より大きい値はエラー
    {
        printf("illegal value!\n");
        exit(4);
    }

    int i;
    printf("[%2d]:", x);  //ヒストグラムの表示

    for( i=0 ; x!=0 && i<=x ; i++ )
        printf("#");
    printf("\n");
}

/*% ./a.out
1 4 3 10 0 2 -1
[ 1]:#
[ 4]:####
[ 3]:###
[10]:##########
[ 0]:
[ 2]:##
% ./a.out
3 9 81
27 -1
[ 3]:###
[ 9]:#########
illegal value!
% echo $?
4
%*/