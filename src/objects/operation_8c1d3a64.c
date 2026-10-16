typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c156bd8 S_c8c156bd8;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_1fc S_g8c467180_2c_1fc;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x1fc];
    S_g8c467180_2c_1fc *f1fc;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
    short f82;
};
extern char g_8c3299bc[];
extern S_c8c156bd8 *call_8c156bd8(void *, int, void *);
extern int lookup_low_id(int);
extern void operation_8c156d30(S_c8c156bd8 *, int, int, int);
extern void call_8c156d48(S_c8c156bd8 *, void *, int, int, int);
extern void operation_8c1570b4(void *, float, float);
S_c8c156bd8 *operation_8c1d3a64(void)
{
    int v3;
    S_c8c156bd8 *t2;
    int v4;
    int v5;
    int v1;
    int t1;
    int v2;
    t2 = call_8c156bd8((void *)((void *)0x8c289388), 0xc, (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f1fc));
    v1 = (int)0x308;
    v2 = (int)0x7e4;
    v3 = (int)0;
    while (0xc > v3) {
        if ((int)v3 != *(int *)0x8c418248) {
            t1 = lookup_low_id(v3);
            if (t1 != 0) {
                v4 = (int)(*(short *)((char *)((char *)t1 + 0x0) + (v1)) == 6);
                if (v4 == 0) {
                    v5 = (int)(*(short *)((char *)((char *)t1 + 0x0) + (v1)) == 3);
                    if (v5 == 0 && (t1 + v2) != 0) {
                        operation_8c156d30(t2, (int)(t1 + v2), 7, v3);
                    }
                }
            }
        }
        v3 = (int)(v3 + 1);
    }
    if (!(t2->f82 > 0)) {
        call_8c156d48(t2, (void *)((g_8c3299bc + 0x13)), 0x17, 0, -0x979798);
    }
    t2->f80 = (t2->f80 & 0xffff) | 0x10;
    operation_8c1570b4((void *)t2, 223.0f, 128.0f);
    return t2;
}
