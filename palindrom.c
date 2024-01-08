#include<stdio.h>
int main(){
    int num,x,rem,rev=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    num=x;
    while(x != 0){
        rem=x%10;
        rev=rev*10+rem;
        x/=10;
    }
    printf("%d", rev);
    printf("%d", num);
    if(rev==num && num>0){
        printf(" is a palindrome");
    }else{
        printf(" is not a palindrome");
    }
    return 0;
}