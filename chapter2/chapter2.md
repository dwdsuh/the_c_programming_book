# chapter 2: Types, Operators, and Expressions

- signed and unsugned forms of all int types
- Objects may be declared `const` which prevents them from being changed


## 2.1 Variable Names
- lower case fro variable names, and all upper case for SYMBOLIC_CONSTANT
- function names and external variables should be less than **31 characters**

## 2.2 Data Types and Sizes
- Basic Data Types: `char, int, float, double`
- qualifiers that can be applied to these basic types
    - `short` and `long` apply to integers
        ```C
        short int sh;
        long int counter;
        //int can be omitted in such declaration
        ```
        - `short` : 16 bits 
        - `long`: 32 bits
        - `int`: 16 or 32 bits
    - `signed` or `unsigned` to `char` or `int`
        - `unsigned` numbers are always positive or zero 
        -  `signed chars` have values between `-128` and `127`
        -  whether plain `chars` are signed or unsigned is machine-dependent, but printable characters are always postive
    - `long double` extended-precision floating point
    - The standard headers `<limits.h>` and `<float.h>` contains symbolic constants for all of these sizes

## 2.3 Constants
- `long` constant is written with a terminal l or L as in `123456789L`
- Unsigned constants are written with a terminal u or U, and the suffix ul or UL indicates `unsigned long`
- a leading `0` on an integer constant means octal
- a leading `0x` or `0X` menas hexadecimal
- `31`-> `037` (octal) -> `0x1f` (hexadecimal)
- Octal or Hexadecimal constants may be followed by `L` or `U` to make them `long` or `unsigned`
- `OXFUL` : unsigned long constant with value 15 decimal
- *constant expression* is an expression that involves only constants
- string constant, string literal
    - string constants can be concatenated at compile time
    - technically, a string constant is an array of characters
    - the internal representation of a string has a null character `'\0'` at the end
        - the physical storage required is one more than the number of characters written between the quotes
        - the program must scan a string completely to determine its length
    - a character constant vs. a string that contains a single character
        - 'x' is not same as "x"
        - 'x' is an integer, produce the numeric value of the letter x in the machine's character set
        - "x" is an array of characters that contains one character (the letter x) and a `'\0\'`
- *enumeration constant*
    - enumeration: a list of constant integer values
    ```C
    enum bolean {NO, YES}
    //the first name in enum has value 0, and the next 1
    ```
    - 
