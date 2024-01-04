//Problem Sum socs1

#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {
    char wiz[101][101];
    float ap = 10000;
    float cd = 1;
    float ct = 60;
    float aoe = 20;
    scanf("%[^-]-%[^-]-%[^-]-%[^-]-%[^\n]", wiz[0], wiz[1], wiz[2], wiz[3], wiz[4]); getchar();
    
    for(int i = 0; i < 5; i++) {
        if(strcmp(wiz[i],"AP") == 0) {
            ap *= 1.2;
            cd *= 1.3;
            ct *= 1.15;
            aoe *= 1.05;
        }
        else if(strcmp(wiz[i],"CD") == 0) {
            ap *= 0.7;
            cd *= 0.8;
            ct *= 1.15;
            aoe *= 0.5;
        }
        else if(strcmp(wiz[i],"CT") == 0) {
            ap *= 0.5;
            ct *= 0.7;
            aoe *= 0.1;
        }
        else if(strcmp(wiz[i],"AOE") == 0) {
            ap *= 1.05;
            cd *= 1.2;
            ct *= 1.1;
            aoe *= 1.6;
        }
        
    }
        ap = floor(ap * 10) / 10;
        cd = floor(cd * 10) / 10;
        ct = floor(ct * 10) / 10;
        aoe = floor(aoe * 10) / 10;
        
        printf("Attack Power = %.1f\n", ap);
        printf("Cooldown = %.1f Days\n", cd);
        printf("Cast Time = %.1f seconds\n", ct);
        printf("AoE = %.1f meters\n", aoe);
    return 0;
}
