/*A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.*/


#include<stdio.h>
int palin(int a);
int main()
{
	int i, j, n,max=0;
	for (i = 100; i <= 999; i++)
	{
		for (j = 100; j <= 999; j++)
		{
			n = i * j;   // 3113
			if (palin(n) && n > max)
			{
				max = n;
			}
		}
	}
	printf("%d", max);
	return 0;
}
int palin(int a)
{
	int sum = 0, step,b=a;
	while (b!=0)
	{
		step = b % 10;
		sum = sum * 10 + step;
		b = b / 10;
	}
	return sum==a;
	
}

