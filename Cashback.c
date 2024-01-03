//Problem CASHBACK socs1
#include <stdio.h>

int main() {
    int tc, a, b;
    //a == Go-Jo && b == Bi-Pay
    scanf("%d", &tc);
    for(int q = 1; q <= tc; q++) {
        scanf("%d %d", &a, &b);
        if(a > b) {
            printf("Case #%d: Go-Jo\n", q);
        } else {
            printf("Case #%d: Bi-Pay\n", q);
        }
    }
    
    return 0;
}
