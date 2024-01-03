//Problem Three Elevators socs1
#include <stdio.h>

int main() {
    int x, y, k, t;
    scanf("%d %d %d", &x, &y, &k);
    while(x > 0 && y > 0 && k > 0 && x <= 100 && y <= 100 && k <= 100) {
        x += 1; //x = lift naik
        y -= 1; //y = lift turun
        k += 0; //k = lift yang sedang dimaintenance
        t += 1; //t = waktu setiap naik atau turun lantai (1 second)
        if(x == y && x == k && y == k) {
            printf("%d\n", t); //t karena kita akan mengoutput berapa detik kedua lift tersebut naik dan turun hingga semuanya berada di lantai yang sama dengan k
            break; //agar -1 tidak terprint
        }
    }
    //bila x, y, k tidak dapat sama maka print hasil -1 sesuai yang diminta pada soal
    if(!(x == y && x == k && y == k)) {
            printf("-1\n");
    }
    
    return 0;
}