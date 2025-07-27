/*
Given a five digit integer, print the sum of its digits.
*/

/*
=================================== EXTRACTING DIGITS FROM NUMBER ====================================
% modulo operator------> to extract the last digit
                                        ----> as % gives remainder so modulo by 10 gives last digit
                                              e.g. 855 % 10 -> 5 <--remainder as (10 * 85 = 850) 
------------------------------------------------------------------------------------------------------
/ division operator---------> to remove the last digit
                                        ----> e.g. 855 / 10 -> 85 <--quotient as (10 * 85 = 850)
------------------------------------------------------------------------------------------------------ 
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int digit;
    int sum = 0;
    
    while (n>0) 
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}