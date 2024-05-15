#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int check_front(int a1, int b1, int c1, int d1, int e1, int f1) 
{
	int checking_front = 2 * a1 + 3 * b1 + 4 * c1 + 5 * d1 + 6 * e1 + 7 * f1;
	return checking_front;
}

int check_back(int g1, int h1, int i1, int j1, int k1, int l1) 
{
	int checking_back = 8 * g1 + 9 * h1 + 2 * i1 + 3 * j1 + 4 * k1 + 5 * l1;
	return checking_back;
}

int check_rrn(int x, int y, int m1) 
{
	if (m1 == 0) m1 = 10;
	if ((x + y + m1) % 11 == 0) return 1;
	else return 0;
}

int main() 
{
	int a, b, c, d, e, f, g, h, i, j, k, l, m;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	scanf("%d %d %d %d %d %d %d", &g, &h, &i, &j, &k, &l, &m);
	int front = check_front(a, b, c, d, e, f);
	int back = check_back(g, h, i, j, k, l);
	if (check_rrn(front, back, m) == 1) 
	{
		printf("올바른 주민등록번호입니다.\n");
	}
	else 
	{
		printf("올바르지 않은 주민등록번호입니다.\n");
	}
}