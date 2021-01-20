## 1.5 Character input and output
- a text stream is a seq of characters divided into lines
- the problem is distinguishing the end of the input from valid data
    - **getchar** returns a distinctive value when there is no more input.
    - EOF: end of file
    - EOF is an integer defined in <stdio.h>, but the specific numeric value doesn't matter as long as it is not the same as any char value
- &&: AND, ||: OR

## 1.6 Arrays
- write a program to count the number of occurrences of each digit, of white space characters(blank, tab, newline), and of all other characters

## 1.7 Functions
- function definitions can appear in any order and in one source file or several, although no function can be split between files
- If the source program appears in several files, you may have to say more to compile and load it than if it all apears in one.
- formal argument & actual argument
- `return zero` implies normal termination

## 1.8 Arguments-Call by Value
- In C, all function arguments are passed "by value"
  - the called function is given the values of its arguments in temporary variables rather than the originals
  - compared with "call by reference"
- In C, the called function cannot directly alter a variable in the calling function; it can only alter its private, temporary copy
- Call by value is an asset, not a liability
  - parameters can be treated as conveniently initialized local variables in the called routine.
- The caller must provide the address of the variable to be set, and the called function must declare the parameter to be a pointer and access the variable indirectly through it.
- the story is different for arrays
  - when the name of an array is used as an argument, the value passed to the function is the location or address of the beginning of the array

## 1.9 Character Arrays
- the most common type of array in C is the array of characters
- `'\0'` mark the end of the string of characters
- ``` "hello\n" -> h e l l o \n \0```

## 1.10 External Variables and Scope
- automatic variables
  - they do not retain their values from one call to the next
- external variables
  - it must be defined outside of any function
  - 

<br/> 

## Debugging history
- `char_array.c` 에서 `getline()` 이 `stdio.h` 에 예약되어있는 함수명인지 모르고 계속 썼음... 컴파일 error.