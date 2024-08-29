//jolibi socs1 problem
#include <stdio.h>

int main() {
    //tc = others participants not include (Jolibi)
    int tc;
    int scoreJojo, scoreLili, scoreBibi, otherScore;
    scanf("%d", &tc);
    scanf("%d %d %d", &scoreJojo, &scoreLili, &scoreBibi);
    for(int q = 1; q <= tc; q++) {
        scanf("%d", &otherScore);
    }
        float average = ((float)(scoreBibi + scoreLili + scoreJojo + otherScore) / (tc + 3));
        if(scoreJojo < average) {
            printf("Jojo tidak lolos\n");
        } else {
            printf("Jojo lolos\n");
        }
        if(scoreLili < average) {
            printf("Lili tidak lolos\n");
        } else {
            printf("Lili lolos\n");
        }
        if(scoreBibi < average) {
            printf("Bibi tidak lolos\n");
        } else {
            printf("Bibi lolos\n");
        }
    return 0;
}