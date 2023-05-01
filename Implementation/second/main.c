#include <stdio.h>

int numberOfWays(int n) {
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {
        return numberOfWays(n-1) + numberOfWays(n-2);
    }
}

int main() {
    int n;
    scanf("%d",&n);	
    printf("Number of ways to climb %d stairs: %d\n", n, numberOfWays(n));
    return 0;
}
