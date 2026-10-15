typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char f00;
    unsigned char f01;
    char f02;
    char f03;
    char f04;
    char unknown5[0x3];
};
extern void call_8c191684(Frame *);
void operation_8c191654(int a0, int a1, int a2)
{
    Frame frame;
    (&frame)->f00 = 1;
    (&frame)->f01 = 0x80;
    (&frame)->f02 = a0;
    (&frame)->f03 = a1;
    (&frame)->f04 = a2;
    call_8c191684((Frame *)((&frame)));
}
