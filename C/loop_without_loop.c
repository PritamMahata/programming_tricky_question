// pritnt 1 - 10 without loop
#include <stdio.h>
#include <stdlib.h>
int display(int num, int last){
    printf("Hello world %d\n",num);
    if(num==last){
        exit(0);
    }
    return display(num+1,last);
}
int main() {
    display(1 , 10);
}