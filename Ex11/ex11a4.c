/*A-4 関数の使い方*/
/*以下はnの値を関数squareを使って2乗してmに代入し、
さらにその値の逆数を関数reciproで求めてresに代入し、
最後に各値を表示するプログラムである。 
下線部を埋めてプログラムを完成させなさい。*/

/*2022.7.21*/

#include <stdio.h>

int square(int);
double recipro(int);

int main() {
  int m, n = 7;
  double res; 

  m = square(n);
  res = recipro(m);

  printf("n:%d  2乗値:%d  逆数:%f\n", n, m, res);
  return 0;
}

int square(int x) {
  return x*x;
}

double recipro(int x) {
  return 1/(double)x;
}

/*[実行例]

% ./a.out
n:7  2乗値:49  逆数:0.020408
%*/