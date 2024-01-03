//Problem Print The Code socs1
#include <stdio.h>

int main() {
    char str[101];
    scanf("%[^\n]%*c", str);
    printf("#include <stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
    printf("    printf(\"%%s\\n\",\"%s\");\n", str);
    printf("    return 0;\n");
    printf("}\n");
    
    return 0;
}