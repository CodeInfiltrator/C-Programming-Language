//Problem FiboCount socs1
#include <stdio.h>

int fibo(int n, int *count) {
    (*count)++;
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    return fibo(n - 1, count) + fibo(n - 2, count);
}

int main() {
    int t;
    scanf("%d", &t);
    for(int q = 1; q <= t; q++) {
        int n;
        scanf("%d", &n);
        int count = 0;
        int result = fibo(n, &count);
        printf("Case #%d: %d\n", q, count);
    }
    
    return 0;
}