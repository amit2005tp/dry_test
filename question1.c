#include<stdio.h>
int main(){
    printf("To know whether you are eligible for casting vote or not\n");
    printf("Amit Kumar\n");
    printf("Date-19/01/2023\n");
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age==18 || age>=18){
        printf("You are eligible for casting your vote\n");
    }
    else{
        printf("You are not eligible for casting your vote\n");
    }
    return 0;
}
	
