#include <stdio.h>
#include <string.h>

int main(void) {
    int n1 = 4;
    int n2 = 4;
    int i;
    
    char string1[] = "String1";
    char string2[] = "String2";
    char subs1[n2];
    char subs2[n2];
    
    strncpy(subs1, string2 + n1, strlen(string2));
    strncpy(subs2, string1 + n1, strlen(string2));

    printf("%s == %s\n", subs1, subs2);
    
    if (subs1 == subs2) {
        printf("True");

    } else {
        printf("False");
    }
    
    return 0;

}