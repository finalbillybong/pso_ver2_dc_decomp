typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Frame {
    unsigned short f00;
    char unknown2[0x2];
    int f04;
    int f08;
    int f0c;
    short f10;
    short f12;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
};
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xbc];
    int fe8;
    char unknownec[0x50];
    Arg0_13c *f13c;
    char unknown140[0x94];
    int f1d4;
};
struct Arg0_13c {
    char unknown0[0x20];
    short f20;
    char unknown22[0x732];
    short f754;
};
extern int call_8c1aaabc(void *);
extern int call_8c1aaafc(void *);
extern int operation_8c137998(void *);
extern int allocate_block(void *, unsigned int);
extern void operation_8c1ab01c(void *, int, int, int);
void operation_8c240044(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    int t4;
    (&frame)->f00 = 0xffff;
    (&frame)->f0c = -1;
    (&frame)->f04 = 0;
    (&frame)->f10 = -1;
    (&frame)->f12 = -1;
    (&frame)->f14 = 1.0f;
    (&frame)->f24 = 0.0f;
    (&frame)->f20 = 0.0f;
    (&frame)->f1c = 0.0f;
    (&frame)->f18 = 0.0f;
    (&frame)->f00 = o->f13c->f20;
    (&frame)->f0c = (int)(o->fe8);
    (&frame)->f04 = (int)(o->f28);
    (&frame)->f08 = (int)(o->f1d4);
    t1 = call_8c1aaabc((void *)(&o->f13c->f754));
    (&frame)->f10 = t1;
    t2 = call_8c1aaafc((void *)(&o->f13c->f754));
    (&frame)->f12 = t2;
    (&frame)->f14 = *(float *)((char *)0x8c2e73b4 + (o->f13c->f754 << 2));
    (&frame)->f18 = 1.0f;
    (&frame)->f1c = 0.0f;
    (&frame)->f20 = 1.0f;
    (&frame)->f24 = 0.7f;
    t3 = operation_8c137998((void *)(&frame));
    if (t3 != 0) {
        t4 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
        if (t4 != 0) {
            operation_8c1ab01c((void *)t4, t3, (int)((void *)0x8c240154), 3);
        }
    }
}
