typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_310 S_g8c467180_2c_310;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x310];
    S_g8c467180_2c_310 *f310;
};
extern int current_effect_mode(void);
extern void call_8c156d48(int, void *, int, int, int);
extern void call_8c156d30(int, void *, int, int);
void operation_8c1a3864(int a0, int a1)
{
    int t1;
    t1 = current_effect_mode();
    if (t1 == 0xf) {
        call_8c156d48(a1, (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f310), 0x16, 6, -0x979798);
        return;
    }
    call_8c156d30(a1, (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f310), 6, 6);
}
