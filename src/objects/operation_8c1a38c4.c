typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_4e8 S_g8c467180_2c_4e8;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x4e8];
    S_g8c467180_2c_4e8 *f4e8;
};
extern int current_mode_active(void);
extern int current_mode_in_range(void);
extern void call_8c156d48(int, void *, int, int, int);
extern void operation_8c156d30(int, void *, int, int);
void operation_8c1a38c4(int a0, int a1, int a2)
{
    int v1;
    int t1;
    int t2;
    if ((a2 & 0xf) == 4) {
        v1 = (int)5;
    } else {
        v1 = (int)4;
    }
    t1 = current_mode_active();
    if (t1 != 0) {
        t2 = current_mode_in_range();
        if (t2 == 0) {
            goto L_8c1a390a;
        }
    }
    call_8c156d48(a1, (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f4e8), 0x36, v1, -0x979798);
    return;
L_8c1a390a:;
    operation_8c156d30(a1, (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f4e8), 0x26, v1);
}
