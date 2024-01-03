//Problem Even Numbers socs1
#include <stdio.h>

int main() {
    int a, b, total = 0;
    scanf("%d %d", &a, &b);
    //a + 1 karena jika hanya a misal input kita 4 - 10, 4 akan terhitung padahal di soal kita harus menjumlahkan angka genap diantaranya maka a harus ditambah 1 agar 4 tidak terhitung.
    for(int q = a + 1; q < b; q++) {
        if(q % 2 == 0) {
        total += q;
        }
    }
    printf("%d\n", total);
    
    return 0;
}