#include <stdio.h>

int main(){
    int c;
    c = getchar();
    while (c!=EOF){
        putchar(c);
        c = getchar();
    }
}

/*
we can't use char since c must be big enough to hold EOF in addition to any possible char.
*/