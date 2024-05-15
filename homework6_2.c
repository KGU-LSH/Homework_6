#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void gcd(int a, int b) 
{
	while (1)
	{
		if (b == 0) break;
		else
		{
			int x = a;
			a = b;
			b = x % b;
		}
	}
	printf("%d", a);
}

int main() 
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	gcd(a, b);
}