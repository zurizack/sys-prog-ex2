#include <stdio.h>
#include "my_mat.h"


int main(){

    char program;
    int i,j;


    while (program != 'D')
    {
        scanf("%c",&program);
        if (program == 'A')
        {
            A();
        }
        if (program == 'B')
        {
            scanf("%d %d", &i , &j);
            if(B(i,j) == 0){
                printf("False\n");
            }
            else printf("True\n");
        }
        if(program == 'C')
        {
            scanf("%d %d", &i , &j);
            printf("%d\n",C(i,j));
        }
        
          
    }

    return 1;
}