typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_3f8 Arg0_3f8;
typedef struct Arg0_3fc Arg0_3fc;
typedef struct Arg0_400 Arg0_400;
typedef struct Arg0_404 Arg0_404;
typedef struct S_x81120_0 S_x81120_0;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x388];
    int f3a4;
    char unknown3a8[0x50];
    Arg0_3f8 *f3f8;
    Arg0_3fc *f3fc;
    Arg0_400 *f400;
    Arg0_404 *f404;
};
struct Arg0_3f8 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_3fc {
    char unknown0[0x4];
    short f04;
};
struct Arg0_400 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_404 {
    char unknown0[0x4];
    short f04;
};
struct S_c8c053d84 {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c052124(void *);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void destroy_context_8c11dc84(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c124d74(Object *o, int a1)
{
    int v8;
    int v6;
    int v5;
    int v7;
    S_c8c053d84 *t1;
    if (o != 0) {
        o->dispatch = (void *)0x8c26c004;
        operation_8c052124((void *)o);
        if (o->f3f8 != 0) {
            o->f3f8->f04 |= 1;
        }
        if (o->f3fc != 0) {
            o->f3fc->f04 |= 1;
        }
        if (o->f400 != 0) {
            o->f400->f04 |= 1;
        }
        if (o->f404 != 0) {
            o->f404->f04 |= 1;
        }
        v5 = (int)(((o->f3a4 & 0x1000000)) != 0);
        if (v5 != 0) {
            v6 = (int)0x3e0;
            v8 = (int)0;
            v7 = (int)0x3f4;
            while (*(short *)((char *)((char *)o + 0x0) + (v7)) > v8) {
                t1 = lookup_object_by_id((unsigned short)(*(S_x81120_0 **)((char *)((char *)((int)o + v6) + 0x0) + (v8 << 2))));
                if (t1 != 0) {
                    t1->f04 |= 1;
                }
                v8 = (int)(v8 + 1);
            }
        }
        destroy_context_8c11dc84((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
