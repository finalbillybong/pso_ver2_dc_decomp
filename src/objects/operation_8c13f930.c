typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    char unknown24[0x14];
    Arg0_38 *f38;
    int f3c;
    char unknown40[0x1c];
    int f5c;
    char unknown60[0x4];
    Arg0_64 *f64;
    char unknown68[0x8];
    int f70;
};
struct Arg0_38 {
    int f00;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int call_8c34da3c(void *);
extern void call_8c34d79a(void *);
extern void call_8c34d4e8(void *);
extern void operation_8c13fa28(void *);
extern void call_8c011ec0(void *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c13f930(Object *o, int a1)
{
    int v15;
    int v14;
    int t1;
    if (o != 0) {
        o->dispatch = (void *)0x8c26dc08;
        if (o->f20 == 0 && o->f3c != 0) {
            t1 = call_8c34da3c((void *)(o->f64));
            if (t1 == 2) {
                call_8c34d79a((void *)(o->f64));
            }
            call_8c34d4e8((void *)(o->f64));
            o->f64 = (Arg0_64 *)0;
        }
        operation_8c13fa28((void *)o);
        v14 = (int)0;
        while (o->f5c > v14) {
            v15 = (int)(v14 << 2);
            if (*(int *)((char *)&o->f3c + (v15)) != 0) {
                call_8c011ec0((void *)(*(Arg0_3c **)((char *)&o->f3c + (v15))));
                *(int *)((char *)&o->f3c + (v15)) = 0;
            }
            v14 = (int)(v14 + 1);
        }
        if (o->f20 == 1) {
            if (o->f70 != 0) {
                o->f38->f00 &= ~o->f70;
            } else {
                if (o->f38 != 0) {
                    o->f38->f00 = 1;
                }
            }
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
