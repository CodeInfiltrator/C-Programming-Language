//Problem Maximum Capacity socs1

#include <stdio.h>

int main() {
    //n = users that entered the website
    //count = count + 1, if users that entered the website > 100000
    int n = 1, count = 0;
    while(n != 0) {
    scanf("%d", &n);
    if(n > 100000) {
        count++;
     }
    }
    printf("%d\n", count);

    return 0;
}
