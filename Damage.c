//Problem Damage socs1
#include <stdio.h>

int main() {
    //ph == physical damage
    //m == magical damage
    //pu == pure damage
    int ph, m, pu;
    scanf("%d %d %d", &ph, &m, &pu);
    //Jojo received 20% physical damage, 30% magical damage, 50% pure damage from his enemy
    //why (ph * 0.2) not (ph * 20 / 100) because its recommend if we use float or double and have mathematics condition and there is percentage better convert the percentage first to decimal
    float result = ((float) ph * 0.2 + m * 0.3 + pu * 0.5);
    printf("%.2f\n", result);
    return 0;
}