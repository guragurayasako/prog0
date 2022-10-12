/*A-1 行列とマクロ*/
/*以下はキーボードから入力する2つの2 x 3 行列の和を計算して表示するプログラムである。
下線部および指示された箇所を補い、プログラムを完成させなさい。
なお、行列の要素を格納する配列の行数と列数はそれぞれROW、COLUMNというマクロで定義するものとし、
配列の宣言やfor文の条件式に2や3などの定数値は書かないこととする。*/

/*2022.7.11*/

#include <stdio.h>
#define ROW 2
#define COLUMN 3

int main()
{
  int i, j;
  int mat1[ROW][COLUMN],mat2[ROW][COLUMN],mat3[ROW][COLUMN];
  
  printf("Input %d x %d matrix as mat1:\n", ROW, COLUMN);
  for( i=0 ; i<ROW ; i++ )
    for( j=0 ; j<COLUMN ; j++ )
      scanf("%d", &mat1[i][j]);
      
  printf("Input %d x %d matrix as mat2:\n", ROW, COLUMN);
  for( i=0 ; i<ROW ; i++ )
    for( j=0 ; j<COLUMN ; j++ )
      scanf("%d", &mat2[i][j]);
      
  for( i=0 ; i<ROW ; i++ )
    for( j=0 ; j<COLUMN ; j++ )
        mat3[i][j] = mat1[i][j]+mat2[i][j];
  
  printf("Sum of mat1 and mat2:\n");
  for( i=0 ; i<ROW ; i++ )
  {
    for( j=0 ; j<COLUMN ; j++ )
    {
      printf("%d ", mat3[i][j]);
    }
    printf("\n");
  }

  return 0;
}

/*[実行例]

%./a.out
Input 2 x 3 matrix as mat1:
2 2 1
1 2 2
Input 2 x 3 matrix as mat2:
1 2 3
1 2 3
Sum of mat1 and mat2:
3 4 4 
2 4 5 
%
*/