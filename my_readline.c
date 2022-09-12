#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define READLINE_READ_SIZE 6

int main(int ac, char** av) {
    FILE *f;
    if(ac > 1 ){
    int f=open
     f = fopen(av[1], "r");

    }
    else{
        printf("Please enter the file name");
        return 0;
    }

 char p;
 int a=0;
 while(p != EOF){
     if(a==READLINE_READ_SIZE || p =='\n'){
         break;
     }
     close(f);
     p=fgetc(f);
     putchar(p);
     a++;
     }
 }
