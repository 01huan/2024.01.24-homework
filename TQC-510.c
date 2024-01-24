#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    char pattern[n][m];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%d", &matrix[i][j]);
            pattern[i][j] = ' ';
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if ((i==0) || (j==0) || (i==n-1) || (j==m-1)) {
                if (matrix[i][j] == 1) {
                    pattern[i][j] = '*';
                }
            }
        }
    }
    for (int i=1; i<n-1; i++) {
        for (int j=1; j<m-1; j++) {
            if (matrix[i][j] == 1) {
                if ((matrix[i+1][j] == 0) || 
                    (matrix[i-1][j] == 0) || 
                    (matrix[i][j+1] == 0) || 
                    (matrix[i][j-1] == 0)) {
                        pattern[i][j] = '*';
                    }
                }
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            printf("%c", pattern[i][j]);
        } printf("\n");
    }
}