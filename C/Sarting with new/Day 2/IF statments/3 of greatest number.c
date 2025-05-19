// #include <stdio.h>

// int main(){
//     int num1 , num2 , num3 ;

//     printf("Enter 3 Number : ");
//     scanf("%d%d%d", &num1 , &num2 , &num3) ;

//     if(num1 > num2){
//       if(num1 > num3){
//         printf("Gratest number is : %d" , num1);
//       }  
//     }
//     if(num2 > num1){
//         if(num2 > num3){
//          printf("Gratest number is : %d" , num2);
//         }
//     }
//     if(num3 > num1){
//         if(num3 > num2){
//          printf("Gratest number is : %d" , num3);
//         }
//     }

// }
#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter 3 Numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("Greatest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("Greatest number is: %d\n", num2);
    } else {
        printf("Greatest number is: %d\n", num3);
    }

    return 0;
}
