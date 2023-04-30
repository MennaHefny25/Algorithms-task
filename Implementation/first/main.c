#include <stdio.h>
#include <stdlib.h>
int climbStairs(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",climbStairs(n));

    return 0;
}

int climbStairs(int n) {
    if(n == 0 || n == 1)
        return 1;

    int numberOfWays[n + 1];
    numberOfWays[0] = 1;
    numberOfWays[1] = 1;

    for(int i = 2; i <= n ;i++) {
        numberOfWays[i] = numberOfWays[i - 1] + numberOfWays[i - 2];
    }
    return numberOfWays[n];
}


