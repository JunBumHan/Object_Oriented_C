struct Rect {
    void (*move)(struct Rect * rect, unsigned int x, unsigned int y); // move 이름인 함수 포인터
    void (*draw)(struct Rect * rect);   // draw 이름이 함수 포인터

    unsigned int x;
    unsigned int y;
    unsigned int width;
    unsigned int height;
};

struct Rect * rect_init(void);  // struct Rect 포인터 값을 반환하는 함수
void rect_move(struct Rect * rect, unsigned int x, unsigned int y);
void rect_draw(struct Rect * rect);

