typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_98 S_vv6_98;
struct Object {
    char unknown0[0x20];
    char f20;
    char unknown21[0x3];
    Arg0_24 *f24;
    Arg0_28 *f28;
};
struct Arg0_24 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv6 {
    char unknown0[0x98];
    S_vv6_98 *f98;
};
struct Arg0_28 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c4dbde0 *g_8c4dbde0;
extern void request_resource_release(void *);
extern void operation_8c19a044(void *, int);
extern void call_8c18c808(void *);
extern int operation_8c1571f4(void *);
extern int call_8c1a9580(Object *, int);
extern void operation_8c1a98e4(void *);
extern void operation_8c1a9838(void *);
void operation_8c1a9384(Object *o)
{
    S_vv6 *v6;
    int v11;
    int t1;
    int t2;
    switch (o->f20) {
    case 0:
    case 1:
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (Arg0_28 *)0;
        }
        v6 = (S_vv6 *)o->f24;
        o->f24->f80 = (o->f24->f80 & 0xffff) & -3;
        if (v6->f98 != 0) {
            operation_8c19a044((void *)(v6->f98), 1);
        }
        o->f20 = 2;
    case 2:
        if (((o->f24->f80 & 0xffff & 4)) != 0) {
            call_8c18c808(g_8c4dbde0);
            o->f20 = 5;
            return;
        }
        if (((o->f24->f80 & 0xffff & 2)) == 0) {
            return;
        }
        o->f20 = 3;
        return;
    case 3:
        t1 = operation_8c1571f4((void *)(o->f24));
        t2 = call_8c1a9580(o, t1);
        o->f28 = (Arg0_28 *)t2;
        v11 = (int)4;
        o->f20 = v11;
    case 4:
        operation_8c1a98e4((void *)o);
        if (((o->f28->f80 & 0xffff & 4)) != 0) {
            operation_8c1a9838((void *)o);
            o->f20 = 1;
        }
        return;
    }
}
