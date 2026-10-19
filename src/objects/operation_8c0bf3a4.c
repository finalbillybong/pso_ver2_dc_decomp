typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    Arg0_dc *fdc;
    char unknowne0[0xc];
    int fec;
    char unknownf0[0x21c];
    short f30c;
    char unknown30e[0xa];
    float f318;
    char unknown31c[0x4];
    float f320;
    char unknown324[0xc];
    short f330;
    char unknown332[0x28];
    short f35a;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern void call_8c01c5f0(Object *);
extern int angle_halfway(int, int);
extern void operation_8c04a43c(void *, void *, float);
extern void call_8c0521a0(Object *);
extern void call_8c05228c(Object *);
extern void call_8c102cd0(void *, int, int, int);
extern void call_8c027090(Object *);
void operation_8c0bf3a4(Object *o)
{
    int v1;
    short v2;
    void *v3;
    float v4;
    void *v5;
    float v6;
    int t1;
    call_8c01c5f0(o);
    v1 = (int)0x3b8;
    t1 = angle_halfway((int)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1))), 0);
    *(int *)((char *)((char *)o + 0x0) + (v1)) = (int)(t1);
    v2 = (short)o->f30c;
    switch (v2) {
    case 0:
        o->f30c = 1;
        v3 = (void *)0;
        v4 = (float)0.0f;
        operation_8c04a43c((void *)o, (void *)v3, v4);
        break;
    case 1:
        o->f320 = 0.0f;
        o->f318 = 0.0f;
        operation_8c04a43c((void *)o, (void *)0, 0.0f);
        if (o->fec == 8) {
            goto L_8c0bf44a;
        }
        o->f30c = 2;
        break;
    case 2:
        if (((o->f34 & 0x800000)) == 0) {
            v5 = (void *)0;
            v6 = (float)0.0f;
            operation_8c04a43c((void *)o, (void *)v5, v6);
        }
        o->f34 &= -0x601;
        o->fdc->f18 &= -0x8000001;
        o->f35a = o->f330;
    }
L_8c0bf44a:;
    call_8c0521a0(o);
    call_8c05228c(o);
    call_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    call_8c027090(o);
    o->f34 &= -0x200001;
}
