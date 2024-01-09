//Problem Recursion socs1
#include <stdio.h>

int recursion(int n, int *count) {
    if(n % 3 == 0 && n != 0) {
        (*count)++;
    }
    if(n == 0) {
        return 1;
    }
    if(n == 1) {
        return 2;
    }
    if(n % 5 == 0) {
        return n * 2;
    }
    return recursion(n - 1, count) + n + recursion(n - 2, count) + n - 2;
}

int main() {
    int t, n, i;
    scanf("%d", &t);
    for(i = 1; i <= t; i++) {
        scanf("%d", &n);
    int count = 0;
    int result = recursion(n, &count);
    printf("Case #%d: %d %d\n", i, result, count);
    }
    
    
    return 0;
}
