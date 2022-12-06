#include <stdio.h>
#include <math.h>

#define N 10

float arr[N][N];

void floidwarshel()
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arr[i][j] == 0 && i != j)
                arr[i][j] = INFINITY;
        }
    }
   for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
        for (int k = 0; k < N; k++){
            if (arr[j][k] > arr[j][i] + arr[i][k] )
            {
                arr[j][k] = arr[j][i] + arr[i][k];
            }
        }
    }
   }
    
}
    
void A ()
{
    for (int row = 0 ; row < N ; row++){
        for (int cols = 0; cols < N; cols++)
        {
            scanf("%f",&arr[row][cols]);
        }
        

        
    }
    floidwarshel(arr);   
}

int B(int i, int j)
{

    return arr[i][j] > 0 && arr[i][j] != INFINITY;
}

int C(int i, int j)
{

    if (B(i,j) == 1)
    {
    return arr[i][j];
    }
    else return -1;

}