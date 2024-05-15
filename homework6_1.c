#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int min(int a, int b, int c)
{
	int x = (a <= b) ? a : b;
	int y = (x <= c) ? x : c;
	return y;
}

int main()
{
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int x = min(a, b, c);
	printf("ÃÖ¼Ú°ª : %d", x);
}