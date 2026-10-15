typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_22b8 Arg0_22b8;
typedef struct Arg0_22c0 Arg0_22c0;
typedef struct Arg0_22c4 Arg0_22c4;
typedef struct S_vv85 S_vv85;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x2288];
    int f22b0;
    int f22b4;
    Arg0_22b8 *f22b8;
    char unknown22bc[0x4];
    Arg0_22c0 *f22c0;
    Arg0_22c4 *f22c4;
};
struct S_vv85 {
    char unknown0[0x80];
    unsigned short f80;
};
extern int operation_8c1cdc80(void *);
extern void operation_8c119764(int, int, int);
extern void request_resource_release(void *);
void operation_8c222920(Object *o)
{
    S_vv85 *v85;
    int t1;
    v85 = (S_vv85 *)o->f22b8;
    if (v85 != 0 && ((v85->f80 & 0xffff & 4)) != 0) {
        o->f24 = 0x10;
        return;
    }
    if (v85 != 0 && ((v85->f80 & 0xffff & 2)) != 0) {
        o->f22b4 = 0xa;
        o->f24 = 8;
        return;
    }
    if (v85 != 0 && o->f22c0 != 0) {
        t1 = operation_8c1cdc80((void *)v85);
        if (o->f22b0 != t1) {
            operation_8c119764((int)(o->f22c0), (int)((int)o + t1 * 0xb8 + 0x59), 0x80);
            o->f22b0 = (int)(t1);
            if (o->f22c4 != 0) {
                request_resource_release((void *)(o->f22c4));
                o->f22c4 = (Arg0_22c4 *)0;
            }
        }
    }
}
