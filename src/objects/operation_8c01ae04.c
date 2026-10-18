typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char f00;
    unsigned char f01;
    char unknown2[0x2];
    int f04;
    char unknown8[0x1fc];
};
extern void call_8c12b77c(void *, void *, int);
extern void operation_8c036914(void *, int);
void operation_8c01ae04(int a0)
{
    Frame frame;
    (&frame)->f00 = 0x6f;
    (&frame)->f01 = 0x81;
    call_8c12b77c((void *)(&(&frame)->f04), (void *)((void *)0x8c4db6e0), 0x200);
    operation_8c036914((void *)(&frame), a0);
}
