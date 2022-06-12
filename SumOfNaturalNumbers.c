#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:- ");
    scanf("%d",&n);
        int res=(n*(n+1))/2;
        printf("Sum of first n natural numbers :- %d",res);
    return 0;
}