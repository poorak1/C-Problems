#include <stdio.h>

int climbStairs(int n) {
    if (n == 1)
        return 1;

    // Initialize an array to store the number of distinct ways for each step
    int dp[n + 1];

    // Base cases
    dp[1] = 1;  // There is only one way to climb 1 step
    dp[2] = 2;  // There are two ways to climb 2 steps (1 step + 1 step or 2 steps)

    // Calculate the number of distinct ways for each step
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int n;
    printf("Enter the number of steps: ");
    scanf("%d", &n);

    int distinctWays = climbStairs(n);
    printf("The number of distinct ways to climb to the top is: %d\n", distinctWays);

    return 0;
}
