typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
struct S_c8c021ef8 {
    char unknown0[0x308];
    short f308;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    unsigned short f04;
    short f06;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c0368a8(void *);
void operation_8c1ecfe0(int a0, int a1)
{
    Frame frame;
    int v1;
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((int)((unsigned short)a0));
    if (t1 != 0) {
        v1 = (int)(t1->f308 == 2);
        if (v1 != 0) {
            return;
        }
    }
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f04 = 0xffff;
    (&frame)->f06 = 0;
    (&frame)->f00 = 0x33;
    (&frame)->f01 = 2;
    (&frame)->f02 = a0;
    (&frame)->f04 = a1;
    operation_8c0368a8((void *)(&frame));
}
