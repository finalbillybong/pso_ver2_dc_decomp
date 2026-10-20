typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fab8 S_g8c46fab8;
typedef struct Object Object;
typedef struct Arg0_36c Arg0_36c;
struct Object {
    char unknown0[0x54];
    Vector3 f54;
    char unknown60[0x90];
    short ff0;
    char unknownf2[0x66];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x19a];
    short f30a;
    char unknown30c[0x18];
    Vector3 f324;
    char unknown330[0x3c];
    Arg0_36c *f36c;
    char unknown370[0x14];
    int f384;
    char unknown388[0x8];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x6];
    short f3ae;
};
struct S_g8c46fab8 {
    char unknown0[0x8];
    float f08;
};
struct Arg0_36c {
    char unknown0[0x8];
    int f08;
};
extern int operation_8c05bbf8(void);
extern void call_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, float, void *);
extern void call_8c0521a0(Object *);
extern void call_8c05228c(Object *);
extern void call_8c044320(Object *, Vector3, Vector3, float);
extern void operation_43fb4(void *, int, void *);
extern void apply_object_velocity(void *);
extern float distance_xz(void *, void *);
void operation_8c0cfd18(Object *o)
{
    int v2;
    float v7;
    short v8;
    int t1;
    float t2;
    if (o->f398 == -1) {
        return;
    }
    switch (o->f398) {
    case 0:
        t1 = operation_8c05bbf8();
        if (t1 == 0) {
            if (o->f3ae != 0) {
                v2 = (int)7;
            } else {
                v2 = (int)*(int *)((char *)0x8c306a64 + (o->f384 << 2));
            }
            o->ff0 = v2;
        } else {
            o->ff0 = 0;
        }
        *(Vector3 *)&o->f164 = *(Vector3 *)&o->f54;
        o->f398 = 1;
        return;
    case 1:
        call_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        call_8c0521a0(o);
        call_8c05228c(o);
        if (o->f3ae != 0) {
            v7 = (float)(*(S_g8c46fab8 **)((char *)0x8c46fab8 + (o->f384 << 2)))->f08;
        } else {
            v7 = (float)*(float *)((char *)0x8c306a5c + (o->f384 << 2));
        }
        *(Vector3 *)&o->f158 = *(Vector3 *)&o->f324;
        call_8c044320(o, o->f158, o->f164, v7);
        operation_43fb4((void *)o, (int)(o->f36c->f08), (void *)(((char *)o + 0x318)));
        apply_object_velocity((void *)o);
        t2 = distance_xz((void *)(((char *)o + 0x3c)), (void *)(&o->f54));
        if (100.0f > t2) {
            o->ff0 = 5;
            call_8c01c5f0(o);
            *(int *)((char *)o + 0x3a4) &= -0x1800001;
            if (((o->f3a4 & 1)) == 0) {
                v8 = (short)o->f30a;
                if (v8 != 0) {
                    o->f39c = (int)(v8);
                    o->f390 = 0;
                }
            }
        }
    }
}
