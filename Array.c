//Problem Array socs1

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    //declare arr yang bibi mau, posisi index array bibi, dan hasil array baru bibi
    int arr[n], index[n], arrNew[n];
    for(int q = 0; q < n; q++) scanf("%d", &index[q]);
    for(int q = 0; q < n; q++) scanf("%d", &arr[q]);

    for(int q = 0; q < n; q++) {
        arrNew[index[q]] = arr[q];
    }
    
    for(int q = 0; q < n; q++) {
        printf ("%d", arrNew[q]);
        //jika q lebih besar dari -1 (0 - n) maka akan memberi spasi pada output.
        if (q  > -1) printf (" ");
    }
    puts("");
    
    return 0;
}
