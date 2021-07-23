#include <stdio.h>
#include <string.h>

int main()
{ 
int i, count=0; char str[50];
  printf("Please enter a string:");
  gets(str);
  for (i = 0; i < strlen(str); i++)
  {
        if (str[i] == 'a') {
            count++;
        }
  }
   printf("The number of times %c appears is %d.\n", 'a', count);
   return 0;
}
