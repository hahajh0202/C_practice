#include <stdio.h>

int main(){

    /* 별 */
    for(int i=1; i < 6; i++){
        for(int j=0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }

    /* 거꾸로 별 */
    for(int i=1; i < 6; i++){
        for(int j=0; j < 5-i; j++){
            printf(" ");
        }
        for(int j=0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }

    /* 프로젝트: 피라미드 모양 만들기 */
/*
   *
  ***
 *****
*******
*/

    int floor;
    printf("쌓으려는 층수 입력: ");
    scanf("%d", &floor);

    for(int i=0; i < floor; i++){
        for(int j=0; j < (floor-i-1);j++){
            printf(" ");
        }
        for(int j=0; j < (2*i + 1); j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}