#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int len = strlen(str);
    int mid = len / 2;
    for(int i = 0; i < mid; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[101];
    printf("Given String: ");
    scanf("%[^\n]%*c", str);
    
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }
    
    reverse(str);
    printf("Final String: %s\n", str);
    
    return 0;
}
