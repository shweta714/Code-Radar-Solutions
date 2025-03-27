#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    if(m>=90){
        printf("A");
    }
        if(90>m>=80){
        printf("B");
    }
        if(80>m>=70){
        printf("C");
    }
        if(70>m>=60){
        printf("D");
    }
        if(m<60){
        printf("F");
    }

}