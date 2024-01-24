#include <stdio.h>
#include <string.h>
int main() {
    char str[50], abc[50], ABC[50];
    int counter=0, COUNTER=0;
    scanf("%s", &str);
    for (int i=0; i<strlen(str); i++) {
        if ((str[i] >= 'A') && (str[i] <= 'Z')) {
            ABC[COUNTER] = str[i];
            COUNTER++;
        }else if ((str[i] >= 'a') && (str[i] <= 'z')) {
            abc[counter] = str[i];
            counter++;
        }
    }
    for (int i=0; i<COUNTER; i++) {
        printf("%c", ABC[i]);
    } printf("\n");
    for (int i=0; i<counter; i++) {
        printf("%c", abc[i]);
    } printf("\n%d", COUNTER);
}