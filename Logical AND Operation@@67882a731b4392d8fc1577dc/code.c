#include <stdio.h>
int main() {
    int firstnum,secomdnum;
    scanf("%d %d",&firstnum,&secondnum);
    if (firstnum && secondnum > 0){
        printf("True\n");
    }else{
        printf("False\n");
    }
    return 0;
}