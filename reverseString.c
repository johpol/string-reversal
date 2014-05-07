/*  Reverse a string in C using pointers
    John
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "String Reversal";
    char string2[512];
    int size = strlen(string);
    
    //declare pointers
    char *a;
    char *b;
    a = string;
    b = string2;
    
    
    int i;
    for(i=size-1; i>=0; i--)
        *(b++) = *(a+i); //advance the pointer and assign the value
    
    *b = '\0'; //terminate string with null
    
    printf("String: %s\nReversed: %s\n", a, string2);
    
    //Output:
    //String: String Reversal
    //Reversed: lasreveR gnirtS
    
    return 0;
}
