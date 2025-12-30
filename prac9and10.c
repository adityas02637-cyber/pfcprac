#include <stdio.h>
int main() {
    // Aditya Singh ERP:-10116
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}





// INPUT / OUTPUT:-
                //Enter an integer: 121
                //121 is a Palindrome.

                //Enter an integer: 123
                //123 is Not a Palindrome.


                


    