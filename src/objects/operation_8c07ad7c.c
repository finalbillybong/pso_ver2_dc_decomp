typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469a8c S_g8c469a8c;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0x84];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x10];
    short f3b8;
};
struct S_g8c469a8c {
    char unknown0[0x1c];
    int f1c;
};
extern void call_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, float, void *);
extern void refresh_follow_effect_8c052180(void *);
extern void call_8c102cd0(void *, int, int, int);
extern void call_8c027090(Object *);
void operation_8c07ad7c(Object *o)
{
    if (o->f398 != -1) {
        if (o->f398 != 0) {
            if (o->f398 == 1) {
                goto L_8c07adcc;
            }
            goto L_8c07ae3a;
        }
        o->f34 &= -0x240301;
        *(int *)((char *)o + 0x3a4) |= 0x800000;
        o->f3a4 &= -0x480001;
        o->ff0 = 8;
        o->f3b8 = (*(S_g8c469a8c **)0x8c469a8c)->f1c;
        o->f398 = 1;
L_8c07adcc:;
        call_8c01c5f0(o);
        if (((o->f34 & 0x800000)) == 0) {
            operation_8c04a43c((void *)o, 0.0f, (void *)0);
        }
        refresh_follow_effect_8c052180((void *)o);
        if ((short)--o->f3b8 > 0) {
            goto L_8c07ae3a;
        }
        if (((o->f34 & 0x800)) != 0) {
            goto L_8c07ae3a;
        }
        if (((o->f3a4 & 1)) == 0 && o->f30a != 1) {
            o->f39c = o->f30a;
            o->f390 = 1;
        }
        o->f3a4 |= 0x20000;
    } else {
        o->f3a4 &= -0x800001;
    }
L_8c07ae3a:;
    call_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    call_8c027090(o);
}
