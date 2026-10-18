typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char f00;
    char f01;
    short f02;
};
extern void operation_8c036914(void *, int);
void operation_8c01b2f8(int a0)
{
    Frame frame;
    (&frame)->f00 = 0x71;
    (&frame)->f01 = 1;
    (&frame)->f02 = 0;
    operation_8c036914((void *)(&frame), a0);
}
