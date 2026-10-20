typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
struct Object {
    char unknown0[0x68];
    int f68;
    char unknown6c[0x8];
    int f74;
    int f78;
    Arg0_7c *f7c;
};
struct Frame {
    unsigned short f00;
    char unknown2[0x2];
};
struct Arg0_7c {
    char unknown0[0x6c];
    char f6c;
};
extern int call_8c1e04b0(Object *);
extern int call_8c1e0abc(Object *, int, Frame *);
extern int operation_8c1e09e8(void *, unsigned short);
extern int call_8c1e0a34(Object *, unsigned short);
extern void operation_8c1e25fc(void *, unsigned short);
void operation_8c1e03ec(Object *o, int a1)
{
    Frame frame;
    unsigned short v1;
    unsigned short c;
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = call_8c1e04b0(o);
    if (t1 != 0) {
        o->f74 = 7;
        return;
    }
    t4 = call_8c1e0abc(o, a1, (Frame *)((&frame)));
    v1 = (&frame)->f00;
    if ((unsigned short)v1 == 0x1f) {
        o->f74 = 7;
        return;
    }
    if ((unsigned int)3 > (unsigned int)o->f78) {
        t2 = operation_8c1e09e8((void *)o, v1);
        if (t2 != 0) {
            return;
        }
        t3 = call_8c1e0a34(o, (&frame)->f00);
        (&frame)->f00 = (unsigned char)t3;
    }
    if (((o->f68 & 0x400)) != 0) {
        c = (&frame)->f00;
        if ((int)(unsigned short)c >= 0x61 && 0x7a >= (int)(unsigned short)c) {
            (&frame)->f00 -= 0x20;
        }
    }
    o->f7c->f6c = t4;
    operation_8c1e25fc((void *)(o->f7c), (&frame)->f00);
}
