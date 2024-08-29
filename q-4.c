#include <stdio.h>

int stringLength(const char *str) {
    const char *ptr = str;
    int length = 0;
    
    while (*ptr != '\0') {
        length++;
        ptr++;  
    }

    return length;
}

int main() {
    char str[100];
 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[stringLength(str) - 1] == '\n') {
        str[stringLength(str) - 1] = '\0';
    }

    int length = stringLength(str);

    printf("Length of the string: %d\n", length);

    return 0;
}
