#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void  functionName(const char b[], size_t tarSubscript, size_t size);


int main(void)
{	
	
	char  p[MAX] ;
	puts("�п�J�@�q�r��\n");
	gets(p);
	
	puts("Answer is:");
	functionName(p, 0, MAX);
	puts("");
	system("pause");
}

void functionName(const char b[], size_t starSubscript, size_t size)
{
	if (starSubscript < size)
	{
		functionName(b, starSubscript + 1, size);
		printf("%c  ", b[starSubscript]);
	}
}