/*A-2 関数の呼び出し*/
/*以下はプロトタイプ宣言されている4つの関数を使って、
4つの文（メッセージ）を出力するプログラムである。
下線部を補い、実行例の通りに動作するよう完成させなさい。*/

/*2022.7.21*/

#include <stdio.h>
void print_function1(void);
void print_function2(int);
void print_function3(void);
void print_function4(void);
    
int main()
{
  print_function1();
  print_function2(1000);
  print_function3();

  return 0;
}

void print_function1(void)
{
  printf("Hey guys!\n");
}
void print_function2(int num)
{
  printf("I just hit %d followers on instagram!\n", num);
}

void print_function3(void)
{
  printf("Thank you so much!\n");
  print_function4();
}

void print_function4(void)
{
  printf("See you!\n");
}

/*[実行例]

% ./a.out 
Hey guys!
I just hit 1000 followers on instagram!
Thank you so much!
See you!
%*/