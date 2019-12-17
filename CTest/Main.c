#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int myMax(int x, int y);
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = myMax(a, b);
	printf("max = %d\n", c);
	system("pause");
	return 0;
}

int myMax(int x, int y)
{
	int z;
	if (x >= y) 
	{
		z = x; 
	}
	else 
	{
		z = y;
	}
	return z;
}