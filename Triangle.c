//Problem Triangle socs1

#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    for(int q = 1; q <= t; q++) {
        scanf("%d", &n);
        printf("Case #%d:\n", q);
        for(int i = 1; i <= n; i++) {
            for(int j = n; j >= 1; j--) {
                int row = i + j;
                if(j <= i) {
                    //jika n genap maka baris pertama = #.
                    if(n % 2 == 0) {
                        if(row % 2 == 0) printf("#");
                        else printf("*");
                    }
                    else {
                        if(row % 2 == 0) printf("*");
                        else printf("#");
                    }
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
