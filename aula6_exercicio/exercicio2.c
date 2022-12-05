#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[] = "String1";
    char str2[] = "String2";
    char subs[8];
    int i = 4;

    strncpy(subs, str2 + i, strlen(str2));
    strcat(str1, subs);

    printf("%s", str1);
  
}