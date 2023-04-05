#include <stdio.h>
#include <string.h>
int main() {

  char str[100];
  char temp;

  // Enter the string
  printf("Type the string to be revesed:\n");
  scanf("%[^\n]s", &str);

  for (int i = 0; i < strlen(str)/2; i++) {
    temp = str[i];
    str[i] = str[strlen(str)-i-1];
    str[strlen(str)-i-1] = temp;
  }

  // Print the string
  printf("Result:\n");
  printf("%s\n",str);

  return 0;
}
