#include <stdio.h>
#include <malloc.h>
#define N 100
int main()
{
	system("chcp 1251>nul");
	void Outmassiv(int* c, int lenth);
	int red;
	int otv;
	int a[N];
	int* p = &a;
	int i = 0;
	for (int* p = a; p < &a[N]; p++)
	{
		*p = i;
		i++;
		printf("value=%d \n",*p);
	}
	printf("\nКакой элемент редактировать? ");
	scanf("%d", &otv);

	printf("\nКакой элемент редактировать? ");
	scanf("%d", &red);
	*(p + otv - 1) = red;
	for (int* p = a; p < &a[N]; p++)
	{
		printf(" value=%d \n",*p);
	}

}
