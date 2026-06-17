#include <stdio.h>


void prime(int n);

int main(){
int n;
printf("enter your number");
scanf("%d",&n);

prime(n);

return 0;
}

void prime(int n){
    if (n%2!=0){
        printf("prime");
    }
    else{
        printf("not");
    }
}