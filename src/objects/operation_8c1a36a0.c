typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c156bd8 S_c8c156bd8;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_218 S_g8c467180_2c_218;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x218];
    S_g8c467180_2c_218 *f218;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c467180 *g_8c467180;
extern S_c8c156bd8 *operation_8c156bd8(int, int, int);
extern void operation_8c1a3864(int, int);
extern void operation_8c1a38c4(int, int, int);
extern void update_state_8c1a3944(int, int, int);
extern void call_8c15700c(S_c8c156bd8 *, float);
extern void operation_8c157138(void *);
S_c8c156bd8 *operation_8c1a36a0(int a0, int a1)
{
    S_c8c156bd8 *t1;
    t1 = operation_8c156bd8((int)((void *)0x8c31db1c), 3, (int)(g_8c467180->f2c->f218));
    if (a1 == -0x100) {
        operation_8c1a3864(a0, (int)t1);
    } else {
        int m = -0x10;
        if ((m & a1) == m) {
            operation_8c1a38c4(a0, (int)t1, a1);
        } else {
            update_state_8c1a3944(a0, (int)t1, a1);
        }
    }
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    call_8c15700c(t1, 224.0f);
    operation_8c157138((void *)t1);
    return t1;
}
