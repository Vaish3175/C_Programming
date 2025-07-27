/*
If 1<=n<=9 , print the lowercase English word corresponding to the number (e.g., one for 1 , two for 2 , etc.).
If n>9 , print Greater than 9.
*/
/*
======================================== CONDITIONAL STATEMENTS ================================================
Used to take decisions in the code
 
Types---->
1. if statement --> used when we need to perform one optional action
                --> simple, no alternative path taken
                ---> example:
                            if(condition)
                            {
                                code to execute if condition is true;
                            }
----------------------------------------------------------------------------------------------------------------
2. if-else statement --> used for two possible outcomes (True/False)
                     --> guaratees one of the two paths is taken
                     ---> example:
                                 if(condition)
                                 {
                                    code to perform if the if condition is TRUE;
                                 }
                                 else
                                 {
                                    code to perform if the if condition is FALSE;
                                 }
-----------------------------------------------------------------------------------------------------------------
3. if-else if-else statement / if-else if ladder --> used for multiple ordered or range conditions
                                                 --> checks sequentially, efficient for ranges 
                                                 ---> example:
                                                              if(condition)
                                                              {
                                                                code if 1st condition is true;
                                                              }
                                                              else if(condition)
                                                              {
                                                                code if 1st condition is true;
                                                              }
                                                              else
                                                              {
                                                                code if no condition is true;
                                                              }
--------------------------------------------------------------------------------------------------------------------
4. switch statement --> used for exact matching of single values/variables(int, char, enum)
                    --> sequentially finds the perfect match for DISCRETE VALUES ONLY
                    ---> example:
                                 switch(variable)
                                 {
                                    case value1:
                                               code if variable == value1
                                               break;  -------------------> very important to exit switch
                                    case value2:
                                               code if variable == value2
                                               break;
                                    default:
                                            code if variable does not match nay case
                                 }
---------------------------------------------------------------------------------------------------------------------
*/

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

int main()
{
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    // Write Your Code Here
    if (n == 1) 
    {
        printf("one");
    }
    else if(n == 2)
    {
        printf("two");
    }
    else if(n == 3)
    {
        printf("three");
    }
    else if(n == 4)
    {
        printf("four");
    }
    else if(n == 5)
    {
        printf("five");
    }
    else if(n == 6)
    {
        printf("six");
    }
    else if(n == 7)
    {
        printf("seven");
    }
    else if(n == 8)
    {
        printf("eight");
    }
    else if(n == 9)
    {
        printf("nine");
    }
    else 
    {
        printf("Greater than 9");
    }
    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}


