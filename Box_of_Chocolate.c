//Problem Box of Chocolate socs1
#include <stdio.h>

int main() {
    //t = testcase
    //n dan m = jumlah array multidimensi
    int t, n, m;
    scanf("%d", &t);
    for(int q = 1; q <= t; q++) {
        scanf("%d %d", &n, &m);
        int arr[101][101];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                scanf("%d", &arr[i][j]);
            }
        }
        //declare maxArrTotal untuk menjumlahkan nilai max arr tiap masing" baris dan set ke 0
        int maxArrTotal = 0;
        for(int i = 0; i < n; i++) {
            //kita set dulu maxArr nya dengan arr baris tertentu kita tp biasanya arr pertama" atau awal
            int maxArr = arr[i][0];
            for(int j = 0; j < m; j++) {
                //bandingkan kembali bila arr yang sudah kita set tadi masih lebih kecil dibanding arr setelahnya maka set kembali maxArr dengan arr baru
                if(maxArr < arr[i][j]) {
                    maxArr = arr[i][j];
                }
            }
            //jumlahkan nilai maxArr tiap baris
            maxArrTotal += maxArr;
        }
        printf("Case #%d: %d\n", q, maxArrTotal);
    }
    return 0;
}
