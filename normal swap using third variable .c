#include <stdio.h>
#include <string.h>

int main(){

int a=2;
int b=3;       
int t=0;

t=a;         
a=b;
b=t;        

printf("%d,%d",a,b);

    return 0;
}
