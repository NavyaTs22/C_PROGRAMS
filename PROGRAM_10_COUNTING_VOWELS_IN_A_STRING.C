#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char a[50],c;
  int count=0;
  printf("Enter a string:");
  scanf("%s",a);
  for(int i=0;i<strlen(a);i++)
  {
      c=tolower(a[i]);
      if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
      {
          count++;
      }
  }
  printf("No. of vowels:%d",count);
    return 0;
}

  OUTPUT:
Enter a string:hell
No. of vowels:1

=== Code Execution Successful ===
