typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    Vector3 f00;
};
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xba];
    short ff2;
    char unknownf4[0x214];
    short f308;
    short f30a;
    char unknown30c[0xc];
    Vector3 f318;
};
extern void call_8c1e8e60(Object *, short, int);
extern void call_8c022c44(Object *);
extern int operation_02c350(void *);
extern void operation_021f88(void *, int, short);
void operation_8c1ede38(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    (&frame)->f00 = o->f318;
    call_8c1e8e60(o, o->f30a, 6);
    o->f318 = (&frame)->f00;
    o->f34 &= -0x10001;
    call_8c022c44(o);
    v1 = (int)(o->f308 == 2);
    if (v1 != 0) {
        o->ff2 = 0;
    }
    t1 = operation_02c350((void *)o);
    operation_021f88((void *)o, 0xa, *(short *)((char *)0x8c2e73d8 + ((short)t1 << 1)));
}
