typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    Arg0_dc *fdc;
    char unknowne0[0x22c];
    short f30c;
    char unknown30e[0x26];
    int f334;
    char unknown338[0x58];
    int f390;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern void operation_8c04a43c(void *, void *, float);
extern float squared_distance_xz(void *, void *);
void operation_8c0bda08(Object *o)
{
    short v1;
    void *v2;
    float v3;
    float t1;
    o->f34 &= -0x200001;
    o->f34 |= 0x6040000;
    o->fdc->f18 = (unsigned int)o->fdc->f18 >> 1 << 1;
    v1 = (short)o->f30c;
    if (v1 != 0) {
        if (v1 == 1) {
            goto L_8c0bda52;
        }
        if (v1 == 2) {
            goto L_8c0bda74;
        }
        return;
    }
    o->f30c = 1;
    v2 = (void *)0;
    v3 = (float)0.0f;
    operation_8c04a43c((void *)o, (void *)v2, v3);
    return;
L_8c0bda52:;
    t1 = squared_distance_xz((void *)((int)o->f334 + 0x324), (void *)(((char *)o + 0x324)));
    if (40000.0f > t1) {
        o->f30c = 2;
        return;
L_8c0bda74:;
        {
            int *pf1 = (int *)((char *)o + 0x390);
            *pf1 = (unsigned int)*pf1 >> 0x10 << 0x10;
        }
        o->f390 |= 2;
    }
}
