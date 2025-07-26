//---------------------------------------POINTERS--------------------------------------------------
//-------------------------------------------------------------------------------------------------
/*
Size of pointer is:
                ---> 4 byte for 32-bit system
                ---> 8 byte for 64-bit system
*/

/*
Complete the function void update(int *a,int *b). 
It receives two integer pointers, int* a and int* b. Set the value of a to their sum, and b to their absolute difference. 
There is no return value, and no return statement is needed.
*/
#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b);

int main() {
    int a, b;
            /*
            demo-->
            a (memory location: 0x1000) -> current value: Garbage
            b (memory loaction: 0x1004) -> current value: Garbage
            */
    int *pa = &a, *pb = &b; // the pointers are pointing to an existing variable they do not care whether the variables hold a garbage or valid number
            /*
            demo-->
            pa (memory location: 0x1008) -> current value: 0x1000(address of a)
            pb (memory location: 0x1016) -> current value: 0x1004(address of b)
            */
    
    scanf("%d %d", &a, &b); // value of a and b are the input numbers and not some garbage value
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

void update(int *a,int *b) 
/*
demo-->
*a (update functions local pointer) current value: 0x1000 (address of main's a)
*b (update functions local pointer) current value: 0x1004 (address of main's b)
*/
{
    int val_a = *a; // contains the input value of a
    int val_b = *b; // contains the input value of b

    *a = val_a + val_b;
    /*
    demo--> 
    val_a = 4 and val_b = 5 
    
    before calculation --->
    *a (memory location: 0x1000) current value: 4
    *b (memory loaction: 0x1004) current value: 5
    
    4 + 5 = 9
    after calculation --->
    *a (memory location: 0x1000) current value: 9
    *b (memory loaction: 0x1004) current value: 5
    */
       
    *b = abs(val_a - val_b);
    /*
    demo-->
    before calculation --->
    *a (memory location: 0x1000) current value: 4
    *b (memory loaction: 0x1004) current value: 5

    4 - 5 = -1
    after calculation --->
    *a (memory location: 0x1000) current value: 9
    *b (memory loaction: 0x1004) current value: 1

    Once function is completed
    val_a, val_b, *a, *b get removed from the memory
    control goes back to main function
    */
}