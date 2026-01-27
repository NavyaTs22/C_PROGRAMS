#include <stdio.h>
#include <string.h>

int main() {
char str1[20] = "Hello";
char str2[20] = "World";
char str3[40];
int length;
 length = strlen(str1);
printf("Length of str1: %d\n", length);
strcat(str3, "");
strcat(str3, str2);
printf("str3 after strcat: %s\n", str3);

if (strcmp(str1, str2) ==0) {
    printf("Strings are equal\n");
}
else {
printf("Strings are different\n");
}

printf("Original: %s | Reversed: ", str1);

for(int i = strlen(str1) - 1; i >=0; i--) {

printf("%c", str1[i]);

}

printf("\n");



    return 0;
}

OUTPUT :
Length of str1: 5
str3 after strcat: World
Strings are different
Original: Hello | Reversed: olleH
