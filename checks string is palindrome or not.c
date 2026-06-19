#include <stdio.h>
#include <string.h>

int main(){
    char  str[50];
    int i;
    int len;
    int flag=0;
    printf("enter your string");
    scanf("%s",&str);

    len=strlen(str);

    for(i=0; i<len; i++){
        if(str[i]!=str[len-i-1]){
            flag=1;
            break;
        }
    }

    if(flag==0)
        printf("yes");
    else
        printf("no");
    return 0;
}
