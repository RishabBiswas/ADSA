#include <stdio.h>
#include <string.h>

#define MAX 100

// Function to find maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to compute LCS
void LCS(char X[], char Y[]) {
    int m = strlen(X);
    int n = strlen(Y);

    int dp[MAX][MAX];

    // Build LCS table
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    // Length of LCS
    int length = dp[m][n];
    char lcs[MAX];
    lcs[length] = '\0';

    // Backtrack to find LCS string
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (X[i - 1] == Y[j - 1]) {
            lcs[length - 1] = X[i - 1];
            i--;
            j--;
            length--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
            i--;
        else
            j--;
    }

    printf("Longest Common Subsequence: %s\n", lcs);
    printf("Length of LCS: %d\n", dp[m][n]);
}

// Main function
int main() {
    char X[MAX], Y[MAX];

    printf("Enter first string: ");
    scanf("%s", X);

    printf("Enter second string: ");
    scanf("%s", Y);

    LCS(X, Y);

    return 0;
}
