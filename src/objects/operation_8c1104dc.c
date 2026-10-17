typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg3 Arg3;
struct Frame {
    char f00;
    char f01;
    char unknown2[0x2];
    short f04;
    unsigned short f06;
    short f08;
    short f0a;
};
struct Arg3 {
    float f00;
    float f04;
    float f08;
};
extern int lookup_low_id(int);
extern void call_8c02ab70(int);
extern void call_8c03bb4c(unsigned short, int, float, float, float);
extern void operation_8c0368a8(void *);
void operation_8c1104dc(int a0, int a1, int a2, Arg3 *a3, int a4)
{
    Frame frame;
    int v1;
    int t1;
    (&frame)->f00 = 0x69;
    (&frame)->f01 = 3;
    v1 = (int)0;
    (&frame)->f04 = a0;
    (&frame)->f06 = 0xffff;
    (&frame)->f08 = 3;
    (&frame)->f0a = a2;
    while (4 > v1) {
        t1 = lookup_low_id(v1);
        if (t1 != 0) {
            call_8c02ab70(t1);
            goto L_8c110526;
        }
        v1 = (int)(v1 + 1);
    }
L_8c110526:;
    (&frame)->f06 = a1;
    call_8c03bb4c((&frame)->f06, a4, a3->f00, a3->f04, a3->f08);
    operation_8c0368a8((void *)(&frame));
}
