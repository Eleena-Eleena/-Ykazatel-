#include <stdio.h>
#include <malloc.h>
#define size 1000

int main()
{
    system("chcp 1251>nul");
    int** p;
    int t;
    printf("\nКакая размерность массива? ");
    scanf("%d", &t);
    p = (int**)malloc(t * sizeof(int*)); 
    int n=0;

    for (int i = 0; i < t; i++)
    {
        p[i] = (int*)malloc((i + 1) * sizeof(int)); 
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = i; j>=0; j--)
        {
            p[i][j] = n;
            n++;
        }
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    for (int i = t-1; i > 0; i--)  
    {
        free(p[i]);
    }
    free(p); 
}

