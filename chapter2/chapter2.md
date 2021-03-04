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
    - such expressions may be evaluated during compilation rather than run-time
    ```C
    #define MAXLINE 1000
    char line[MAXLINE+1];
    ```
- string constant, string literal
    - def: a sequence of zero or more characters surrounded by double quotes
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
    enum boolean {NO, YES}
    //the first name in enum has value 0, and the next 1
    ```
    - the first name in an `enum` has value 0, the next 1, and so on
    - If not all values are specified, unspecified values continue the progression from the last specified value
    ```C
    enum months {JAN=1, FEB, MAR, APR }
    /* FEB is 2, MAR is 3 etc */
    ```
    - Enumerations -> convenient when associating constant values with names
    - debugger may be able to print values of enumeration variables in their symbolic form

## 2.4 Declarations
- all variables must be declared before use
```C
int lower, upper, step;
char c, line[1000];
```
- the qualifier `const`
    - it can be applied to the declaration of any variable to specify that its value will not be changed

## 2.5 Arithmetic Operators
`+, -, *, /, %`

## 2.6 Relational and logical operator
`> >= < <=`

## 2.7 Type Conversions
- converting wider one to narrower one (float-> int) may draw a warning but it is not illegal
- char transformation
```C
/* atoi: convert s to integer */
int atoi(char s[]){
    int i, n;
    n = 0;

    for (i=0; s[i] >= '0' && s[i] <= '9'; ++i){
        n = 10 * n + (s[i]-'0');
    return n;
    }
}
```
- `c >= '0' && c<= '9'` can be replaced by `isdigit(c)`
- the definition of C guarantees that any character in the machine's standard printing character set will never be negative
- specify `signed` or `unsigned` if non-character data is to be stored in `char` variable
- conversions take place across assignments; the value of the right side is converted to the type of the left, which is the type of the result
- type conversion also take place when arguments are passed to funcitons
    - `char` and `short` become `int`
    - `float` become `double`
- explicit type conversions can be forced in any expression, with a unary operator called a `cast`
```C
(type-nam) expression
//usage
sqrt((double) n)
```

 ## 2.8 Increment and Decrement Operators
 - `++n`: increments n before its value is used
 - `n++`: increments n after its value has been used

 ## 2.9 Bitwise Operators
 - operators
    - `&`: bitwise AND
    - `|`: bitwise inclusive OR
    - `^`: bitwise exclusive OR
    - `<<`: left shift
    - `>>`: right shift
    - `~`: one's complement

## 2.10 Assignment Operators and Expressions
- the operator `+=` is called an assignment operator

## 2.11 Conditional Expressions
- ternary operator `?`
- `expr1 ? expr2 : expr3`

## 2.12 Precedence and Order of Evaluation
- pass
