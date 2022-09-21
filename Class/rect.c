#include <stdio.h>
#include <stdlib.h>
#include "rect.h"

struct Rect * rect_init(void)   // Rect Initialization
{
    struct Rect * rect = (struct Rect *)malloc(sizeof(struct Rect));    // 동적할당 

    rect->move = rect_move; // 함수형 포인터에 대입
    rect->draw = rect_draw; // 함수형 포인터에 대입

    rect->x = 0;
    rect->y = 0;
    rect->width = 30;
    rect->height = 40;

    return rect; // 초기화 설정을 다한 rect 값을 반환
}

void rect_move(struct Rect * rect, unsigned int x, unsigned int y) {
    // 사각형 이동
    rect->x = x;
    rect->y = y;
    printf("사각형을 움직임!\n");
    return; 
}

void rect_draw(struct Rect * rect) {
    // 사각형을 그리는 작업
    printf("사각형을 그림!\n");
    printf("x=%u y=%u w=%u h=%u\n", rect->x, rect->y, rect->width, rect->height);
    return;
}

int main(void) {
    struct Rect * rect = rect_init();   // 객체 생성 및 인스턴스화 

    rect->move(rect, 1, 2);
    rect->x = 1;
    rect->draw(rect);

    free(rect);
    return 0;    
}