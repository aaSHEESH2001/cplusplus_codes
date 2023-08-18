#include<stdio.h>
#include<stdlib.h>

int main(){

    int* p = (int*)malloc(sizeof(int)); //integer allocation using malloc

    int* p1 = (int*)calloc(1,sizeof(int)); //interger allocation using calloc

    //If we dont pass anything to calloc it will automatically set the value to 0

    int* p2 = realloc(NULL, sizeof(int));

    *p = 50;
    *p1 = 100;
    *p2 = 150;

    printf("%d\n",*p);
    printf("%d\n",*p1);
    printf("%d\n",*p2);


    free(p);
    free(p1);
    free(p2);


}