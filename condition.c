#include <stdio.h>

int main(){

    // int age = 25;
    // if (age > 20){
    //     printf("일반인 입니다.\n");
    // }
    // else{
    //     printf("학생 입니다.\n");
    // }

    int age;
    printf("나이를 입력하시오: ");
    scanf("%d", &age);
  
    if(age >= 8 && age <=13){
        printf("초등학생입니다.\n");
    }
    else if(age >= 14 && age <=16){
        printf("중학생입니다.\n");
    }
    else if(age >= 17 && age <=19){
        printf("고등학생입니다.\n");
    }
    else{
        printf("성인입니다.\n");
    }

    return 0;
}