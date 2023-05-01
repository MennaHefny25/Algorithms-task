#include <stdio.h>
int fib(int n);
int numberOfWays(int s);
int main()
{
	int s;
    	scanf("%d",&s);
	printf("Number of ways = %d", numberOfWays(s));
	return 0;
}
int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}
int numberOfWays(int s)
{
	return fib(s + 1);
}
