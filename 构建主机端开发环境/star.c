#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,j,k;
    int N;

    printf("Please input you want high:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(k=i;k<=N-1;k++)
            printf(" ");
        for(j=1;j<+2*i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}



