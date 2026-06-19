#include <stdio.h>
#include <string.h>

int main(){
    int n;
    int result=0;
    int rem;
    printf("enter a number");
    scanf("%d",&n);

    int q=n;

    while(q!=0){
        rem=q%10;
        result=result*10+rem;
        q/=10;
    }
    if(result==n){
        printf("yes the number is palindrome :%d",n);
    }
    else{
        printf("no the number is not palindrome :%d",n);
    }
    return 0;
}
