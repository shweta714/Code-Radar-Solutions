#include <stdio.h>
int main(){
    int integer1,integer2;
    scanf("%d %d",&integer1,&integer2);
    integer1 = integer1&~(1<<integer2);
    printf("%d",integer1);
    return 0;
}