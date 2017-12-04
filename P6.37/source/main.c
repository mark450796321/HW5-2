#include <stdio.h> 
#include <stdlib.h>

int main() 
{

	int number[10] ;
	
	int i = 0, j = 0;
	printf("請輸入10個數字:\n");
	for (j = 0; j < 10; j++)
	{
		scanf_s("%d", &number[j]);
	}
	
	int temp = 0;

	for (i = 0; i < 10; i++) {
		for (j = i; j < 10; j++) {
			if (number[j] < number[i]) {
				temp = number[j];
				number[j] = number[i];
				number[i] = temp;
			}
		}
	}

	
	printf("最大值為:%d\n ", number[9]);
	
	system("pause");
	return 0;
}

	
	
