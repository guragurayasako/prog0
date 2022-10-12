/*A-1 一次関数*/
/*以下は一次関数の式 y = ax + b において、xの値を1から4まで1ずつ変化させたときのyの値を出力するプログラムである。
係数aとbの値は入力によって実数で与えられ、yの値は「function」という名前の関数を使って計算、出力するものとする。
下線部と空白部分を補い、実行例のような動作をするように完成させなさい。*/

/*2022.7.25*/

#include <stdio.h>
void function( double, double );
    
int main()
{
  double a, b;
    
  printf("係数aとbの値を入力してください： ");
  scanf("%lf %lf", &a, &b);
  printf("関数の値は以下のとおりです。\n");
  function( a, b );

  return 0;
}

void function( double m, double n )
{
    int x;
    double y;

    for( x=1 ; x<=4 ; x++ )
    {
        y = m*x + n;
        printf("x = %d のとき y = %3.1f\n",x, y);
    }
}

/*[実行例]

% ./a.out 
係数aとbの値を入力してください：0.5 2.0
関数の値は以下のとおりです。
x = 1 のとき y = 2.5
x = 2 のとき y = 3.0
x = 3 のとき y = 3.5
x = 4 のとき y = 4.0
%*/