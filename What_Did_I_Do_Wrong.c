#include <stdio.h>

int main() {
    //t = testcase
    //n = jumlah array
    int t, n;
    scanf("%d", &t);
    for(int q = 0; q < t; q++) {
        scanf("%d", &n);
        //arrNew = hasil ouput dari perkurangan arr dan arr2
        int arr[n], arr2[n], arrNew[n];
        //looping mengisi arr dan arr2 harus dipisah agar perkurangan tidak terjadi error
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr2[i]);
        }
        //arrNew harus diassign 0 supaya arrNew tidak diberikan angka random
        for(int i = 0; i < n; i++) {
            arrNew[i] = 0;
        }
        printf("Case #%d:", q + 1);
        for(int i = 0; i < n; i++) {
            arrNew[i] = arr[i] - arr2[i];
            printf(" %d", arrNew[i]);
        }
        printf("\n");
    }
    return 0;
}
