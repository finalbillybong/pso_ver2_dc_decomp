typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb4];
    int fec;
    short ff0;
    char unknownf2[0x21a];
    short f30c;
    char unknown30e[0xa];
    float f318;
    char unknown31c[0x4];
    float f320;
    char unknown324[0xc];
    short f330;
    char unknown332[0x28];
    short f35a;
    char unknown35c[0x34];
    int f390;
    char unknown394[0x10];
    short f3a4;
};
extern void call_8c01c5f0(Object *);
extern int angle_halfway(int, int);
extern void operation_8c04a43c(void *, float, void *);
extern void apply_object_velocity(void *);
extern void call_8c0521a0(Object *);
extern void call_8c05228c(Object *);
extern void call_8c102cd0(void *, int, int, int);
extern void call_8c027090(Object *);
void operation_8c0bf250(Object *o)
{
    int v1;
    short v2;
    int t1;
    call_8c01c5f0(o);
    v1 = (int)0x3b8;
    t1 = angle_halfway((int)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1))), 0);
    *(int *)((char *)((char *)o + 0x0) + (v1)) = (int)(t1);
    v2 = (short)o->f30c;
    if (v2 != 0) {
        if (v2 == 1) {
            goto L_8c0bf29a;
        }
        if (v2 == 2) {
            goto L_8c0bf2d2;
        }
    } else {
        o->f30c = 1;
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        goto L_8c0bf318;
L_8c0bf29a:;
        apply_object_velocity((void *)o);
        o->f318 *= 0.5f;
        o->f320 *= 0.5f;
        if (o->fec != 8) {
            o->ff0 = 7;
            o->f30c = 2;
            goto L_8c0bf318;
L_8c0bf2d2:;
            if (((o->f34 & 0x800000)) == 0) {
                operation_8c04a43c((void *)o, 0.0f, (void *)0);
            }
            if (o->fec != 0x20) {
                if (!(o->f3a4 > 0)) {
                    o->f390 |= 8;
                }
                o->f34 &= -0x601;
                o->f35a = o->f330;
            }
        }
    }
L_8c0bf318:;
    call_8c0521a0(o);
    call_8c05228c(o);
    call_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    call_8c027090(o);
    o->f34 &= -0x200001;
}
