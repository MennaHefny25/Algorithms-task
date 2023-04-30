#include <stdio.h>
#include <stdlib.h>
int numberOfWays(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",numberOfWays(n));
    return 0;
}
int numberOfWays(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return numberOfWays(n-1) + numberOfWays(n-2);
}
