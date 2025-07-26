//------INDEX------//
// 1 --> Hello, World!
// 2 --> Playing with Characters

/*Task
This challenge requires you to print  on a single line, 
and then print the already provided input string to stdout. 
If you are not familiar with C, you may want to read about the printf() command.
*/

/*
### On top come the header files
2 types - built in header files (included as < >)
          user defined header files (included as " ")
during the preprocessing these header files are just attached with our code file to form a executable file

it is like ----> source code(.c) + header(.h) = executable file

Although as we are only using printf we can define printf function in our source code
but the definition is very complicated like you need to define everything for the datatypes(int, float etc) format specifiers(%d,%f etc)
so we better use the inbuilt header files
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
### int main()
int is the return type for the main function as this function returns 0
although if we write void insted of int you do not need to write return and code works perfectly 
BUT writing void instead of int is not a standard practice in C as 

in the main function the return tells us about the success or failure of the program
like main returns 0 for success
          returns 1 for failure
writing void is not a standard practice in C

main is a reserved keyword decided by the creators itself
*/
int main() 
{
	char s[100]; //store the input string that we are going to take as input
                 //string is a array of characters
    scanf("%[^\n]%*c",s);
  	
    printf("Hello, World!");
    printf("%s",s);
    return 0;
}
/*
the other input ways are:
--> scanf("%s", charARRAY)--> Reads till a whitespace is encountered(space,tab,newline(enter_key))
                          --> automatically adds a \0 at the end of the line
                          --> PRONE TO BUFFER OVERFLOW if input is more than one word
----------------------------------------------------------------------------------------------------------------
--> scanf("%[^\n]%*c", charARRAY)--> reads entire line along with white spaces till you press enter_key
                                 --> *c clears the leftover newline
                                 --> PRONE TO BUFFER OVERFLOW if input exceed the array limit(size)
-----------------------------------------------------------------------------------------------------------------
--> fgets(charARRAY, size, stdin)--> reads entire line with the white spaces and newline
                                            --> newline need to be removed using the strcspn
                                 --> safest method as PREVENTS BUFFER OVERFLOW by taking size as argument
-----------------------------------------------------------------------------------------------------------------
--> gets(charARRAY)--> reads a line until newline
                   --> Do not use EXTREMELY DANGEROUS as it does not check for buffer size
                   --> GUARANTEED BUFFER OVERFLOW
                   --> removed from the standard C because of insecurities
-----------------------------------------------------------------------------------------------------------------
--> getchar() / getc()--> reads one single character at a time
                      --> good for CHARACTER BY CHARACTER PROCESSING
                      --> taking string input required loop makes it too complex
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
You have to print the character, ch in the first line.
Then print s in next line. 
In the last line print the sentence, sen.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    /*
    Errors are thrown as the input does not fit in format as it also considers the white spaces
    WE NEED TO ADD SPACES BEFORE INPUT so that compiler skips white spaces while taking input
    */
    scanf(" %c",&ch);
    scanf(" %s",s);
    scanf(" %[^\n]%*c",sen);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}