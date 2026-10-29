typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x4];
    Arg0_28 *f28;
    char unknown2c[0x4];
    int f30;
    int f34;
    char unknown38[0x14];
    float f4c;
};
struct Arg0_20 {
    char unknown0[0x18];
    int f18;
};
extern float g_8c31bf88;
extern int call_8c0353ec(int);
extern int operation_8c04b8dc(void *);
extern void operation_8c04b230(int, int, float, float);
void operation_8c09806c(Object *o)
{
    char *v1;
    int v38;
    int v39;
    float v37;
    int t1;
    int t2;
    v1 = (char *)o->f20;
    if (o->f30 != 0) {
        if (o->f30 != 1) {
            goto L_8c0980ae;
        }
        if (*(int *)((char *)((char *)o->f28 + 0x0) + (o->f34 << 2)) == 7) {
            goto L_8c0980ae;
        }
    }
    t1 = call_8c0353ec((int)(v1));
    if (t1 != 0) {
        if (!((o->f4c += 0.166666672f) > 1.0f)) {
            goto L_8c0980c6;
        }
        o->f4c = 1.0f;
    } else {
L_8c0980ae:;
        if (0.0f > (o->f4c += -0.0833333358f)) {
            o->f4c = 0.0f;
            return;
        }
    }
L_8c0980c6:;
    if (o->f4c > 0.0f) {
        t2 = operation_8c04b8dc((void *)v1);
        v37 = (float)(float)(unsigned int)(0x260 - t2);
        v38 = (int)o->f20->f18;
        v39 = (int)v38;
        if (((v38 & -0x1000000)) == 0) {
            v39 = (int)-0x51cb;
        }
        v39 &= 0xffffff;
        v39 = (int)((unsigned int)(o->f4c * 255.0f) << 0x18 | v39);
        operation_8c04b230((int)(v1), v39, v37, g_8c31bf88 * 396.0f);
    }
}
