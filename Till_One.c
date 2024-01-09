//Problem TillOne socs1
#include <stdio.h>

int recursion(int n) {
    if(n == 1) {
        return 1;
    }
    if(n % 2 == 0) {
        return recursion(n / 2);
    }
    return recursion(n - 1) + recursion(n + 1);
}

int main() {
    int t, n;
    scanf("%d", &t);
    for(int q = 1; q <= t; q++) {
        scanf("%d", &n);
        int result = recursion(n);
        printf("Case #%d: %d\n", q, result);
    }
    
    return 0;
}