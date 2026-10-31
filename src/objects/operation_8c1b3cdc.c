typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c326b6c S_L8c326b6c;
typedef struct Object Object;
struct Object {
    char unknown0[0x3e4];
    int f3e4;
    float f3e8;
    float f3ec;
    int f3f0;
    int f3f4;
};
struct S_L8c326b6c {
    char unknown0[0x4];
    int f04;
};
extern S_L8c326b6c g_8c326b6c;
void operation_8c1b3cdc(Object *o)
{
    float v1;
    float v11;
    o->f3f4 = 0;
    o->f3e8 += o->f3ec;
    switch (o->f3f0) {
        case 0:
        v1 = o->f3e8;
        if (30.0f > v1) {
            goto L_8c1b3d78;
        }
        o->f3e8 = v1 - 30.0f;
        o->f3f4 = 1;
        break;
        case 1:
        if (29.0f > o->f3e8) {
            goto L_8c1b3d78;
        }
        o->f3e8 = 29.0f;
        o->f3f4 = 1;
        break;
        case 2:
        if (!(29.0f > o->f3e8)) {
            o->f3e4 = *(int *)((o->f3e4 << 5) + (int)&g_8c326b6c.f04);
            o->f3f0 = *(int *)((o->f3e4 << 5) + (int)&g_8c326b6c);
            o->f3e8 = 0.0f;
            o->f3f4 = 1;
        }
    }
L_8c1b3d78:
    ;
    v11 = o->f3e8;
    if (!(0.0f > v11)) {
        if (30.0f > v11) {
            return;
        }
    }
    o->f3e8 = 0.0f;
}
