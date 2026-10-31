typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c326594 S_L8c326594;
typedef struct Object Object;
struct Object {
    char unknown0[0x3d0];
    int f3d0;
    char unknown3d4[0x4];
    float f3d8;
    float f3dc;
    int f3e0;
    int f3e4;
};
struct S_L8c326594 {
    char unknown0[0x4];
    int f04;
};
extern S_L8c326594 g_8c326594;
void operation_8c1b1318(Object *o)
{
    float v1;
    float v11;
    o->f3e0 = 0;
    o->f3d8 += o->f3dc;
    switch (o->f3e4) {
    case 0:
        v1 = (float)o->f3d8;
        if (30.0f > v1) {
            goto L_8c1b13b0;
        }
        o->f3d8 = v1 - 30.0f;
        o->f3e0 = 1;
        break;
    case 1:
        if (29.0f > o->f3d8) {
            goto L_8c1b13b0;
        }
        o->f3d8 = 29.0f;
        o->f3e0 = 1;
        break;
    case 2:
        if (!(29.0f > o->f3d8)) {
            o->f3d0 = (int)(*(int *)((o->f3d0 << 4) + (int)&g_8c326594.f04));
            o->f3e4 = (int)(*(int *)((o->f3d0 << 4) + (int)&g_8c326594));
            o->f3d8 = 0.0f;
            o->f3e0 = 1;
        }
    }
L_8c1b13b0:;
    v11 = (float)o->f3d8;
    if (!(0.0f > v11) && 30.0f > v11) {
        return;
    }
    o->f3d8 = 0.0f;
}
