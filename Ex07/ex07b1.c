/*B-1 偶数・奇数の仕分け*/
/*以下の仕様に従い、実行例のように動作するプログラムを作成しなさい。

要素数100のint型配列input, odd, evenを宣言する
キーボードから最大100個の正の整数値を入力し、配列inputに格納する
入力値のうち奇数は配列oddにも格納する
入力値のうち偶数は配列evenにも格納する
配列input, odd, evenに格納された数値の個数は別途変数に格納しておくこと
0が入力されたら入力を打ち切る
入力終了後、配列input, odd, evenの要素を順に表示する*/

/*2022.7.4*/

#include<stdio.h>

int main()
{
    int input[100], odd[100], even[100];
    int i;
    int j = 0,k = 0;
    int n = 0;
    
    for( i=0 ; i<100 ; i++)
    {
        scanf("%d",&input[i]);
        if( input[i] == 0 ) break;
        n++;
        if( input[i]%2 == 0 )
        {
            even[j] = input[i];
            j++;
        }
        else
        {
            odd[k] = input[i];
            k++;
        }
    }

    printf("Input:");
    for( i=0 ; i<n ; i++ )
    {
        printf(" %d",input[i]);
    }

    printf("\nOdd:  ");
    for( i=0 ; i<k ; i++)
    {
        printf(" %d",odd[i]);
    }

    printf("\nEven: ");
    for( i=0 ; i<j ; i++)
    {
        printf(" %d",even[i]);
    }

    printf("\n");
    

    return 0;
}

/*[実行例]


% ./a.out
1 2 3 4 5 6 7 0
Input: 1 2 3 4 5 6 7 
Odd:   1 3 5 7 
Even:  2 4 6 
%*/