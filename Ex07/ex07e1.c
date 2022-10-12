/*E-1 フィボナッチ数列*/
/*
先行2項の和が次の項となるフィボナッチ数列

{0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...}

は、次の漸化式で与えられる。

Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2]
ただし、Fibonacci[0] = 0, Fibonacci[1] = 1

この隣り合う項の比が黄金比 (1+√5)/2 = 1.6180339887... に次第に近づくことを確認しよう。
フィボナッチ数列を要素数２１の一次元配列 Fibonacci[i] に格納かつ一覧表示し、
更に Fibonacci[i+1] / Fibonacci[i] で表される隣接項比と、黄金比、の差分、がどう移り変わるか、
実行例にならって出力するプログラムを作りなさい。
なお、差分を計算する際の黄金比(変数名:goldenratio)は今は簡単のため 1.6180339887 と近似することとする。
出力の際のフォーマットも実行例通りになるように注意すること。*/

/*2022.7.4*/

#include<stdio.h>


int main()
{
    int Fibonacci[21];
    int i;

    double goldenratio = 1.6180339887;

    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    for( i=2 ; i<21 ; i++ )
    {
        Fibonacci[i] =  Fibonacci[i-1] + Fibonacci[i-2];
    }
    
    for( i=0 ; i<21 ; i++)
    {
        printf("Fibonacci[%d] = %d\n",i ,Fibonacci[i]);
    }
    for( i=1 ; i<20 ; i++)
    {
        printf("Fibonacci[%d]/Fibonacci[%d]  - goldenratio = %5.3e\n",i+1 , i, (double)Fibonacci[i+1]/Fibonacci[i] - goldenratio);
    }
    return 0;
}

/*実行例

% ./a.out
Fibonacci[0] = 0
Fibonacci[1] = 1
Fibonacci[2] = 1
Fibonacci[3] = 2
Fibonacci[4] = 3
...
Fibonacci[20] = 6765
Fibonacci[2]/Fibonacci[1]  - goldenratio = -6.180e-01
Fibonacci[3]/Fibonacci[2]  - goldenratio =  3.820e-01
...
Fibonacci[17]/Fibonacci[16]  - goldenratio =  4.591e-07
Fibonacci[18]/Fibonacci[17]  - goldenratio = -1.753e-07
Fibonacci[19]/Fibonacci[18]  - goldenratio =  6.703e-08
Fibonacci[20]/Fibonacci[19]  - goldenratio = -2.553e-08
%*/