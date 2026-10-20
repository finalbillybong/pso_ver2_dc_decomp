typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c2e72d8 S_g8c2e72d8;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x94];
    float f180;
    char unknown184[0x188];
    short f30c;
    char unknown30e[0x2ba];
    int f5c8;
};
extern int operation_02c350(void *);
extern void call_8c01c9e8(Object *, short);
extern void call_8c1e9240(Object *, void *, void *);
void operation_8c1ef870(Object *o)
{
    short v1;
    int v2;
    int t1;
    v1 = (short)o->f30c;
    switch (v1) {
    case 0:
        if (!(0.0f > (o->f180 -= 1.0f))) {
            return;
        }
        o->f30c = 1;
        v2 = (int)0;
        if (((o->f34 & 0x100000)) != 0) {
            v2 = (int)1;
        }
        t1 = operation_02c350((void *)o);
        v1 = *(short *)((char *)((char *)*(S_g8c2e72d8 **)((char *)0x8c2e72d8 + (v2 << 2)) + 0x0) + ((short)t1 << 1));
        o->fe8 &= -5;
        o->fe8 |= 1;
        call_8c01c9e8(o, v1);
        o->fe8 = (unsigned int)o->fe8 >> 1 << 1;
        o->fe8 |= 0x40;
        o->f180 = 24.0f;
        return;
    case 1:
        if (0.0f > (o->f180 -= 1.0f)) {
            o->fe8 &= -0x41;
            o->f5c8 = 0x3c;
            call_8c1e9240(o, (void *)(((char *)o + 0x3c)), (void *)(o->f64));
        }
    }
}
