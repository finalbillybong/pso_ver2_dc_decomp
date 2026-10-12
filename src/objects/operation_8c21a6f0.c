typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c156c6c S_c8c156c6c;
struct S_c8c156c6c {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_c8c156c6c *call_8c156c6c(void *);
extern void call_8c0dc610(int, float);
S_c8c156c6c *operation_8c21a6f0(void)
{
    S_c8c156c6c *t1;
    t1 = call_8c156c6c((void *)0x8c2e1818);
    call_8c0dc610((int)t1, 30.0f);
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    return t1;
}
