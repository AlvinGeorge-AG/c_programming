#include <stdio.h>
#include<string.h>
enum designFlags {
    ITALICS = 1,
    BOLD = 2,
    UNDERLINE = 4
};

int main() {
    char str1[] = "Hi   ";
    char str2[] = "There";
    strcat(str1, str2);
    printf("%s", str1);
    
    return 0;
}
