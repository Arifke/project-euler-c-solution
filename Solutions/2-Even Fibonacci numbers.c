/*Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed four million,
find the sum of the even-valued terms.*/

#include<stdio.h>
int main()
{
	 int a = 1, b = 1, c;
	 int i;
     int sum = 0;
	for (i = 0; ; i++)
	{
		c = a + b;
		b = a;
		a = c;
		if (c > 4000000)
		{
			break;
		}
		if (c % 2 == 0)
		{
			sum = sum + c;
		}
	}
	printf("%d", sum);
	
}