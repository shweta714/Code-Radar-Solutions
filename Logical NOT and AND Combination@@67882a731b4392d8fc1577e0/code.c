#include <stdio.h>
int main() {
    int firstnum,secondnum;
    scanf("%d %d",&firstnum,&secondnum);
    if(!(firstnum>=0)&& (secondnum>=0)){
        printf("True\n");
    }else{
        printf("False");
    }
    return 0;
}