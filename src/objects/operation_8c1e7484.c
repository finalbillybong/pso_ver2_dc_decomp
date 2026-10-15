typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x10];
    int f38;
};
extern void select_mode11_8c1cc5a0(void);
extern void select_mode13_8c1cc5d0(void);
void operation_8c1e7484(Object *o)
{
    int v1;
    float v4;
    v1 = (int)o->f24;
    o->f24 = v1 + 1;
    v4 = (float)(float)(unsigned int)v1;
    if (v4 > 4.5f) {
        if (o->f38 != 0) {
            if (o->f38 == 1) {
                goto L_8c1e74c8;
            }
            if (o->f38 == 2) {
                goto L_8c1e74c8;
            }
            return;
        }
        *(int *)0x8c5108c0 = 0;
        select_mode11_8c1cc5a0();
        return;
L_8c1e74c8:;
        *(int *)0x8c32c108 = 1;
        select_mode13_8c1cc5d0();
    }
}
