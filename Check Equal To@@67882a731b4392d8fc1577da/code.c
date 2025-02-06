#include <stdio.h>
int main() {
    int firstnum,secondnum;
    scanf("%d %d",&firstnum,&secondnum);
    if(firstnum == secondnum){
        printf("True\n");
    }else{
        printf("False\n");
    }
    return 0;
}