/*B-1 温度変換*/
/*温度を摂氏から華氏に変換する関数c2fを定義し、
それを使って0度から100度まで5度刻みの摂氏温度と、
それに対する華氏温度を表示するプログラムを作成しなさい。

関数c2fは、摂氏温度(実数値)を引数とし、
華氏温度(実数値)を返り値とする関数とする。
また、結果の表示は関数c2fではなく、実行例を参考にmain関数で行うこと。

摂氏 (c) から華氏 (f) への温度の変換式は以下の通り：

f = 9*c/5 + 32 */

/*2022.7.21*/

#include<stdio.h>

double c2f(int, int);

int main()
{
    int c;
    double f;
    
    printf("摂氏（℃）　華氏（℉）\n");
    for( c=0 ; c<=100 ; c+=5 )
    {
        f = c2f(c, f);
        printf("%5d%10.2f\n",c, f);
    }
    return 0;
}

double c2f(int x, int y)
{
    y = 9*x/5 + 32;
    return y;
}
/*[実行例]

% ./a.out
  摂氏(°C)	 華氏（°F)
       0	 32.00
       5	 41.00
      10	 50.00
      15	 59.00
      .....
      90	194.00
      95	203.00
     100	212.00
%*/