#include <stdio.h>
#include <string.h>

int main()
{
    char text[50];
    int begin, middle, end, length = 0;
    printf("Please enter a word or sentence: ");
    scanf("%s", text);
    while (text[length] != '\0')
        length++;
    end = length - 1;
    middle = length/2;
    
    for (begin = 0; begin < middle; begin++)
    {
        if (text[begin] != text[end])
        {
            printf("Not a Palindrome\n");
            break;
        }
        end--;
    }
    if (begin == middle)
        printf("This is a Palindrome");
return 0;
}


