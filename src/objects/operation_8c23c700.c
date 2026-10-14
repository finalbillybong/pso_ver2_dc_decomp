typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_234 Arg0_234;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb4];
    int fec;
    char unknownf0[0x4c];
    Arg0_13c *f13c;
    char unknown140[0xf4];
    Arg0_234 *f234;
};
struct Arg0_13c {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x224];
    int f310;
};
struct Frame {
    char unknown0[0x18];
};
extern void call_8c075730(Object *, Arg0_13c *, int);
extern void call_8c076fc8(Object *, int);
extern void call_8c075894(Object *, Arg0_13c *, int, void *);
extern void call_8c077524(void *, void *, Frame *);
extern void call_8c0773e4(void *);
void operation_8c23c700(Object *o)
{
    Vector3 v[2];
    int v1;
    call_8c075730(o, (Arg0_13c *)(o->f13c), 0x31);
    call_8c076fc8(o, 1);
    call_8c076fc8(o, 0);
    if (o->f234 != 0) {
        v1 = (int)(((o->f13c->f310 & 0xe0)) != 0);
        if (v1 != 0 && ((o->f13c->fe8 & 4)) == 0) {
            call_8c075894(o, (Arg0_13c *)(o->f13c), 6, (void *)(&v[1]));
            call_8c075894(o, (Arg0_13c *)(o->f13c), 5, (void *)(v));
            call_8c077524((void *)(o->f234), (void *)(&v[1]), (Frame *)(v));
        }
        if (((o->f34 & 0x8000000)) == 0 && ((o->fec & 0x40)) == 0) {
            call_8c0773e4((void *)(o->f234));
        }
    }
}
