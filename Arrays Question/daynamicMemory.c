#include<stdio.h>
#include<malloc.h>
int main()
{
    int *p = (int *) malloc(5*sizeof(int));
    p[0] = 1;       
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    //int i;
   
    //for(i=0;i<5;i++)  
    int *q = (int*)malloc(10*sizeof(int));
    q[6] = 5;
    q[7] = 6;
    q[8] = 7;
    q[9] = 8;
    q[5] = 9;


    for(int i=0; i <5; i++)
    {
        q[i] = p[i];
    }

   
    
    // q wala


    for ( int i = 0; i <10; i++)
    {
        printf("%d\n", q[i]);
    }

     free (p);


    for ( int i = 0; i <= 4; i++)
    {
        printf("%d\n", p[i]);
    }



    return 0;
}