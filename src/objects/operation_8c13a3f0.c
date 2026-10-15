typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char f00;
    char f01;
    char f02;
    char f03;
    char f04;
    char unknown5[0x3];
};
extern void call_8c191684(Frame *);
void operation_8c13a3f0(void)
{
    Frame frame;
    (&frame)->f00 = 1;
    (&frame)->f01 = 1;
    (&frame)->f02 = 5;
    (&frame)->f03 = 0xf;
    (&frame)->f04 = 0;
    call_8c191684((Frame *)((&frame)));
}
