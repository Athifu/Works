#include <stdio.h>

int main(){

    int choice;

    printf(" 1 for chai\n 2 for porotta\n 3 for mandhi\n 4 for water\n Enter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
            printf("you have selected chai!!");
            break;
    case 2:
            printf("you have selected porotta!!");
            break;        
    case 3:
            printf("you have selected mandhi!!");
            break;
    case 4:
            printf("you have selected water!!");
            break;    
    default:
        printf("Enter Valid choice");
        break;
    }


}