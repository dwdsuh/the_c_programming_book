/*
It's bad practice to bury magic numbers like 300 and 20 in a program

#define name replacement text
the name has the same form as a variable name. a sequence of letters and digits that begins with a letter
the replacement text can be any sequence of chars, it is not limited to numbers
*/

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
    int diff;
    diff = UPPER - LOWER;
    printf("%d", diff);
}