#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double calcLength(int a) 
{
	return a * 2 * 3.14;
}

double calcArea(int b) 
{
	return b * b * 3.14;
}

void printResult(double x, double y) 
{
	printf("���� : %.2lf, ���� : %.2lf", x, y);
}

int main() 
{
	int r;
	printf("������ : ");
	scanf("%d", &r);
	double Length = calcLength(r);
	double Area = calcArea(r);
	printResult(Length, Area);
}