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
	printf("길이 : %.2lf, 넓이 : %.2lf", x, y);
}

int main() 
{
	int r;
	printf("반지름 : ");
	scanf("%d", &r);
	double Length = calcLength(r);
	double Area = calcArea(r);
	printResult(Length, Area);
}