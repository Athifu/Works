#include <stdio.h>

int main(){

        int limit , array[100] , i , searchKey , flag = 0;

        printf("Enter array limit : ");
        scanf("%d", &limit);

        printf("Enter %d values : ", limit);
        for( i = 0 ; i < limit ; i++){
            scanf("%d", &array[i]);
        }

        printf("enter a number to find : ") ;//search key
        scanf("%d", &searchKey);

        for( i = 0 ; i < limit ; i++){
            if( searchKey == array[i]){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            printf("%d found at position %d", searchKey , i+1);
        }else{
                printf("Value is not founded check Entered value");
            }
    }