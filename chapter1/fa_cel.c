#include <stdio.h>

// print Fahrenheit-Celsius Table
// for fahr = 0, 20, ... 300

int main(){
    int fahr;
    int celcius;
    int lower;
    int upper;
    int step;

    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;

    while (fahr <= upper){
        celcius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celcius);
        fahr = fahr + step;
    }
}