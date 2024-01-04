//Problem Sum socs1

#include <stdio.h>

int main() {
   long int tc, x, q, i, j, arrNew[101];
   scanf("%ld", &tc); getchar();
   for(q = 1; q <= tc; q++) {
        scanf("%ld", &x); getchar();
        long int arr[101][101];
        for(j = 0; j < x; j++) {
            arrNew[j] = 0;
        }
        for(i = 0; i < x; i++) {
            for(j = 0; j < x; j++) {
                scanf("%ld", &arr[i][j]); getchar();
                arrNew[j] += arr[i][j];
            }
        }
    
        printf("Case #%ld:", q);
        for(int j = 0; j < x; j++) {
            printf(" %ld", arrNew[j]);
        }
        puts("");
   }
    
    return 0;
}
