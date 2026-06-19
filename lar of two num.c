#include <stdio.h>


void lar(int n, int m);

int main(){
int n;
int m;
printf("enter your number");
scanf("%d",&n);

printf("enter your number");
scanf("%d",&m);

lar(n,m);;


return 0;
}

void lar(int n, int m){
    if(n>m){
        printf("lar num%d",n);
    }
    else{
        printf("lar num%d", m);
    }
}