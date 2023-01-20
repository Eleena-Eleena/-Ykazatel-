#include <stdio.h>
#include <malloc.h>
#define N 1000000

int main()
{
    system("chcp 1251>nul");
    int* c;
    c = (int*)malloc(N * sizeof(int)); 
    int n = 0;

    for (int i = 0; i < N; i++)
    {
        c[i] = i;
        printf("%d ", c[i]);
    }

    free(c); 
}