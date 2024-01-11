#include <stdio.h>

int main() {
    int num;
    printf("Input number: "); //ex = 12345
    scanf("%d", &num);
    int total = 0;
    while(num != 0) {
        total += num % 10;
        num /= 10;
    }
    printf("Total sum num: %d\n", total); //15 = 1 + 2 + 3 + 4 + 5(12345)
    return 0;
}
