#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int a, b, c, d, e, f;

void rollDice() 
{
	for (int i = 0; i < 100; i++)
	{
		int num = rand() % 6;
		if (num == 0) a++;
		if (num == 1) b++;
		if (num == 2) c++;
		if (num == 3) d++;
		if (num == 4) e++;
		if (num == 5) f++;
	}
	printf("1 : %d\n", a);
	printf("2 : %d\n", b);
	printf("3 : %d\n", c);
	printf("4 : %d\n", d);
	printf("5 : %d\n", e);
	printf("6 : %d\n", f);
}

int main()
{
	srand(time(NULL));
	rollDice();
}