#include <stdio.h>
#include <ctype.h>
#include <string.h>
char transform(char chr) {
    if ((chr >= 'A') && (chr <= 'Z')) {
        chr = tolower(chr);
    } else if ((chr >= 'a') && (chr <= 'z')) {
        chr = toupper(chr);
    }
    return chr;
}

int main() {
    char str[10];
    int n;
    scanf("%s", &str);
    scanf("%d", &n);
    printf("The letter that was selected is: %c\n", transform(str[n]));
    for (int i=0; i<n; i++) {
        printf("%c", str[i]);
    } printf("%c", transform(str[n]));
    for (int i=n+1; i<strlen(str); i++) {
        printf("%c", str[i]);
    }
}