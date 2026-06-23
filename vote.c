#include<stdio.h>
int main(){
    int age ;
    printf("mention your age for verefication \n");
    scanf("%d",&age);
    if (age==18){
        printf("u are aligable for vote");
    }
    else{
        printf("u are not aligable for vote");
    }
    return 0;
}