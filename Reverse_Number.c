#include <stdio.h>

int main() {
    int num;
    printf("Input number: "); //ex = 12345
    scanf("%d", &num);
    int revNum = 0;
    while(num != 0) {
        revNum = revNum * 10 + num % 10;
        num /= 10;
    }
    printf("Reverse num is: %d\n", revNum); //(12345) => (54321)
    return 0;
}
