#include <stdio.h>
#include <malloc.h>

void Example(void)
{
	printf("Я функция");
}

int main(void)
{
	system("chcp 1251>nul");

	void (*message) (void);
	message = Example;
	message();
}
