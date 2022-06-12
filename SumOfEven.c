# include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the a value:- ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    printf("Sum of Even numbers:- %d",sum);
return 0;
}