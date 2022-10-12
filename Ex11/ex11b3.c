/*B-3 最大公約数*/
/*下記の仕様を満たすプログラムを作成しなさい。
仕様：

ユークリッドの互除法を使って最大公約数を求める関数gcdを定義する。
関数gcdは2つの整数を引数で受け取り、それらの最大公約数を戻り値とする。
無限ループを使って、繰り返しキーボードから2つの整数を入力し、以下の処理を繰り返すこと。
入力された整数がどちらも正の整数であれば、関数gcdを使って最大公約数を求め、その値を表示する。
入力された整数に負の整数が含まれている場合は、再入力を求める。
入力された整数に0が含まれている場合は、何も表示せずにプログラムを終了する。

ユークリッドの互除法：

2つの整数xとyについて、xがyで割り切れるまで以下の処理を繰り返す。
xをyで割り算し、その余りzが0なら終了。
zが0でなければyをxに代入してzをyに代入する。
繰り返しが終わった時のyが2つの整数の最大公約数である。*/

/*2022.7.21*/

#include<stdio.h>

int gcd(int, int);

int main()
{
    int a, b;
    int GCD;
    printf("Input two numbers\n");
    scanf("%d%d",&a,&b);
    if(a>=b)
    {
        GCD = gcd( a, b );
    }
    else
    {
        GCD = gcd( b, a );
    }
    printf("GCD of %d and %d is %d\n",a, b, GCD);
    return 0;
}

int gcd(int x, int y)
{
    int z;

    while(1)
    {
        if(z == 0)
        {
            return y;
        }
        else
        {
            z = x/y;
            x = y;
            y = z;
        }
    }

}
/*[実行例]

% ./a.out
Input two numbers
12 28
GCD of 12 and 28 is 4.
Input two numbers
12 -4
Input positive numbers again!
Input two numbers
-4 12
Input positive numbers again!
Input two numbers
12 0
%*/