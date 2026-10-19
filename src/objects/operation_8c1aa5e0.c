typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c01e790 S_c8c01e790;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x10];
    Arg0_2c *f2c;
    char unknown30[0x4];
    unsigned short f34;
    char unknown36[0x2];
    Arg0_38 *f38;
    int f3c;
};
struct S_c8c01e790 {
    char unknown0[0x308];
    short f308;
    char unknown30a[0x46];
    int f350;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int call_8c10baf0(void *);
extern S_c8c01e790 *call_8c01e790(int, int, int);
extern void call_8c1ef644(S_c8c01e790 *);
extern void call_8c02a438(short, void *, void *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1aa5e0(Object *o, int a1)
{
    int t1;
    S_c8c01e790 *t2;
    if (o != 0) {
        o->dispatch = (void *)0x8c2746d0;
        t1 = call_8c10baf0((void *)(o->f38));
        t2 = call_8c01e790((int)(o->f34), 6, t1);
        if (t2 != 0) {
            t2->f308 = 6;
            if (o->f3c == 1) {
                call_8c1ef644(t2);
                t2->f350 |= 0x40000;
            }
            call_8c02a438(o->f34, (void *)(((char *)o + 0x20)), (void *)(o->f2c));
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
