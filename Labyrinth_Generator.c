//Problem Labyrinth Generator socs1
#include <stdio.h>

int main() {
    //tc = luas Labyrinth
    //v, h = koordinat pemain pada labyrinth
    int tc, v, h;
    scanf("%d", &tc);
    scanf("%d %d", &v, &h);
    for(int i = 0; i < tc; i++) {
        for(int j = 0; j < tc; j++) {
            if(i == v && j == h) {
                printf("c");
            } else {
                printf("#");
            }
        }
        puts("");
        // printf("\n");
    }
    
    
    return 0;
}