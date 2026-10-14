typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_13c Arg0_28_13c;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    Arg0_24 *f24;
    Arg0_28 *f28;
};
struct Arg0_28 {
    char unknown0[0xe4];
    short fe4;
    char unknowne6[0x56];
    Arg0_28_13c *f13c;
    char unknown140[0xbc];
    int f1fc;
};
struct Frame {
    char unknown0[0xc];
};
extern int hierarchy_is_active(void *);
extern void call_8c075894(Arg0_28 *, void *, void *, Frame *);
extern void call_8c0a7608(void *, Frame *);
void operation_8c1c5710(Object *o)
{
    Frame frame;
    int t1;
    t1 = hierarchy_is_active((void *)(o->f28));
    if (t1 == 0 || o->f28->fe4 != 2 || ((o->f28->f1fc & 0x10)) == 0 || o->f24 == 0) {
        o->f04 |= 1;
        return;
    }
    call_8c075894((Arg0_28 *)(o->f28), (void *)(o->f28->f13c), (void *)(o->f20), (Frame *)((&frame)));
    call_8c0a7608((void *)(o->f24), (Frame *)((&frame)));
}
