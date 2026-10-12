typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_4c4 S_g8c467180_2c_4c4;
typedef struct Object Object;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Object {
    char unknown0[0x94];
    int f94;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x4c4];
    S_g8c467180_2c_4c4 *f4c4;
};
extern S_g8c467180 *g_8c467180;
extern S_L8c41cba0 g_8c41cba0;
extern void set_global_8c22ffe4(void);
extern void call_8c22e8e4(Object *, void *, int);
void operation_8c22dd38(Object *o)
{
    if ((((&g_8c41cba0)->f28 & 4)) != 0) {
        set_global_8c22ffe4();
        o->f94 = 5;
        return;
    }
    if ((((&g_8c41cba0)->f28 & 2)) != 0) {
        set_global_8c22ffe4();
        call_8c22e8e4(o, g_8c467180->f2c->f4c4, 1);
        o->f94 = 0x14;
    }
}
