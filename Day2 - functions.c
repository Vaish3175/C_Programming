
/*
Write a function int max_of_four(int a, int b, int c, int d) 
which reads four arguments and returns the greatest of them.
*/
#include <stdio.h>
/*
return_type function_name(arg_type_1 arg_1, arg_type_2 arg_2, ...) 
    {
    	...
        ...
        ...
        [if return_type is non void]
        	return something of type `return_type`;
    }
*/
int max_of_four(int a, int b, int c, int d) // gets place in stack segment of code
    // all local variables are stored in the stack frame of max_of_four in stack segment
{
    int ans;
    if(a>b && a>c && a>d)
    {
        ans = a;
    }
    else if (b>a && b>c && b>d)
    {
        ans = b;
    }
    else if (c>a && c>b && c>d) 
    {
        ans = c;
    }
    else 
    {
        ans = d;
    }
    return ans;
}

int main() {  // gets place in code/text segment of memory map
              // stack frame is created in the stack segment
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
/*
--------------- THE FLOW OF CODE ---------------
-> Program begins
 --> entire code gets place in code/text segment
  ---> stack frame for main gets placed in stack segment
   ----> all local variables get place in the stack frame of that main
    -----> the max_of_four function gets called
     ------> the stack frame for max_of_four gets formed in the stack frame
      -------> all local variables get place in stack frame of max_of_four
       --------> once calculation of max_of_four is done the stack frame of max_of_four gets deallocated from stack segment
        ---------> the compiler retures to main function stack frame
         ----------> once that is done the concents of main stack frames is also deallocated
          -----------> Program ends
*/