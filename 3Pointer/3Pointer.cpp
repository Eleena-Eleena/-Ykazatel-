#include <stdio.h>
#define N 10000

int main()
{
	system("chcp 1251>nul");
	void Outmassiv(int* c, int lenth);
	int c[N];
	int* p = &c;
	int t = 0;
	printf("\nКакая размерность массива? ");
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		c[i] = i;
	}
	Outmassiv(p, t);
}
void Outmassiv(int* c, int lenth)
{
	for (int i = 0; i < lenth; i++)
	{
		printf(" value=%d \n", *c);
		c++;
	}
}

