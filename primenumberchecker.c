#include <stdio.h>

int main(){
    int number;
    int count=0;
    
    printf("Please enter a number: ");
    scanf("%d",&number);

    for(int i=1;i<=number;i++){
        if(number % i == 0){
            count++;
        }
    }
    if(count<=2){
        printf("Your number is prime\n");
    }
    else{
        printf("Your number isn't prime\n");
    }
    system("pause");    
    return 0;
}