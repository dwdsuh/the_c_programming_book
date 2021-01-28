#include <stdio.h>
#include <string.h>


#define SAMPLE '\xff'

int main(){
    char sample;
    sample = SAMPLE;
    
    //char a[20];
    char a[20] = "Just counting the string length";
    
    //printf("%c", sample);
    printf("%lu", strlen(a));

    return 0;
}

