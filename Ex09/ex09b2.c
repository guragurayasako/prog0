/*B-2 全体の要素値の合計と最大値*/
/*実行例のように3 x 5の行列を入力すると、
その行列全体の要素値の合計および最大値を表示するプログラムを作成しなさい。
なお、行列の行数と列数はマクロで定義することとし、
最大値は要素の中で１つだけと仮定する。*/

/*2022.7.11*/

#include<stdio.h>

#define GYOU 3
#define RETU 5

int main()
{
    int data[GYOU][RETU];
    int i,j;
    int sum=0,max=0;
    int gyou,retu;

    printf("Input %d × %d data\n",GYOU, RETU);
    for( i=0 ; i<GYOU ; i++ )
        for( j=0 ; j<RETU ; j++ )
            scanf("%d",&data[i][j]);

    for( i=0 ; i<GYOU ; i++ )
        for( j=0 ; j<RETU ; j++ )
            sum += data[i][j];

    for( i=0 ; i<GYOU ; i++ )
    {
        for( j=0 ; j<RETU ; j++ )
        {
            if( data[i][j] > max ) 
                max = data[i][j];
                gyou = i;
                retu = j;
            }
        }
    }

    printf("sum=%d\n", sum);
    printf("max:array[%d][%d]=%d\n", gyou, retu, max);
    
    return 0;
}

/*[実行例]

% ./a.out
Input 3 x 5 data
 1  3  5  7  9
18 24 33  4  6
14  0 -3 11 23
sum=155
max:array[1][2]=33
% ./a.out
Input 3 x 5 data
44 33 21 43 72
11 12 14 17 22
23 32 31 56 37
sum=468
max:array[0][4]=72
%*/