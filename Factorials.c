#include <stdio.h>

long long int factorial(int x) {
    if(x == 0) {
        return 1;
    }
    if(x == 1) {
        return 1;
    } else {
        return x * factorial(x - 1);
    }
}

int main() {
    //x = input factorial (x!) ex = (5!);
    long long int x;
    scanf("%lld", &x);
    printf("%lld\n", factorial(x));

    return 0;
}
