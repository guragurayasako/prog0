/*B-3 アスキーアート*/
/*1〜9 までの値の整数 n を入力として受け取り、以下の実行例のように、
その n を高さとした二等辺三角形を出力するプログラムを作成しなさい。
なお、0以下か10以上が入力されたら実行例のようなエラーメッセージを表示するようにしなさい。

ただし、数字は変数をうまく使って繰り返し表示を行うこと。
printf( "333\n" ); などのように直接 " " の中に数字の並びを書いて表示させるのは不可とする。

ヒント：
行ごとに数字が変わっていく繰り返しがある一方、
一つの行の中にも同じ数字を表示する繰り返しがあることに注意して for ループを組み合わせるとよい。*/

/*2022.6.30*/

#include<stdio.h>

int main()
{
    int n; //山のてっぺん
    int i,j; //for文のカウンタ

    printf("1から9までの整数を入力してください：");
    scanf("%d",&n);
    if( n<=0 || 10<=n ) printf("入力する数は1から9までです\n");

    for( i=1 ; i<=n ; i++) //のぼり
    {
        if( n<=0 || 10<=n ) break;

        for( j=1 ; j<=i ; j ++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    for( i=n-1 ; i>=0 ; i--)//くだり
    {
        if( n<=0 || 10<=n ) break;

        for( j=1 ; j<=i ; j ++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    
    return 0;
}

/*% ./a.out
1から9までの整数を入力してください：3
1 
22
333
22
1
% ./a.out
1から9までの整数を入力してください：1
1
% ./a.out
1から9までの整数を入力してください：6
1
22
333
4444
55555
666666
55555
4444
333
22
1
% ./a.out
1から9までの整数を入力してください：11
入力する数は1から9までです
%*/