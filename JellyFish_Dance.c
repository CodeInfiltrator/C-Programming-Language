#include <stdio.h>

int main() {
    //t = testcase
    //arr[t] = day 1 until day t amout of views
    //q = bibi friends
    //a && b = bibi friends wants to know how many views the video gainer day? - day?
    int t;
    scanf("%d", &t);
    int arr[t], q, a, b;
    for(int z = 0; z < t; z++) {
        scanf("%d", &arr[z]);
    }
    scanf("%d", &q);
    for(int y = 1; y <= q; y++) {
        scanf("%d %d", &a, &b);
        int sum = 0;
        printf("Case #%d: ", y);
        for(int z = a - 1; z < b; z++) {
            //a - 1 because array start from zero
            sum += arr[z];
        }
        printf("%d\n", sum);
    }
    return 0;
}
