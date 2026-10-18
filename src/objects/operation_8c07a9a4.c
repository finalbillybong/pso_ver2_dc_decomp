typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0x24];
    short f330;
    char unknown332[0x24];
    short f356;
    short f358;
    short f35a;
    char unknown35c[0x34];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
};
extern void call_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, float, void *);
extern void refresh_follow_effect_8c052180(void *);
extern void call_8c102cd0(void *, int, int, int);
void operation_8c07a9a4(Object *o)
{
    short v3;
    switch (o->f398) {
    case -1:
        break;
    case 0:
        o->f3a4 |= 1;
        o->f34 &= -0x101;
        o->f358 = o->f356;
        o->ff0 = 0;
        o->f34 &= -0x600001;
        o->f398 = 1;
    case 1:
        call_8c01c5f0(o);
        if (((o->f34 & 0x800000)) == 0) {
            operation_8c04a43c((void *)o, 0.0f, (void *)0);
        }
        refresh_follow_effect_8c052180((void *)o);
        v3 = o->f358;
        o->f358 = v3 + -1;
        if (!(v3 >= 0)) {
            o->f35a = o->f330;
            {
                int *pf1 = (int *)((char *)o + 0x3a4);
                *pf1 = (unsigned int)*pf1 >> 1 << 1;
            }
            if (((o->f34 & 0x800)) == 0) {
                if (((o->f3a4 & 1)) == 0) {
                    if (o->f30a != 1) {
                        o->f39c = o->f30a;
                        o->f390 = 1;
                    }
                }
                o->f3a4 |= 0x20000;
            }
        }
    }
    call_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
}
