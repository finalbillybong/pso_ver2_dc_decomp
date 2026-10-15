typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_44 Arg0_44;
typedef struct S_vv121 S_vv121;
typedef struct S_vv121_98 S_vv121_98;
struct Object {
    char unknown0[0x28];
    char f28;
    char unknown29[0xb];
    Arg0_34 *f34;
    char unknown38[0x4];
    Arg0_3c *f3c;
    char unknown40[0x4];
    Arg0_44 *f44;
};
struct S_vv121 {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0x16];
    S_vv121_98 *f98;
};
extern void request_resource_release(void *);
extern void call_8c05fbf8(int, int, int, int);
extern void clear_global_8c19b29c(void);
extern void call_8c156ec0(void *);
extern void operation_8c19a044(void *, int);
void operation_8c1ca7e8(Object *o)
{
    S_vv121 *v121;
    if (o->f3c != 0) {
        request_resource_release((void *)(o->f3c));
        o->f3c = (Arg0_3c *)0;
    }
    if (o->f44 != 0) {
        request_resource_release((void *)(o->f44));
        o->f44 = (Arg0_44 *)0;
    }
    call_8c05fbf8(0x50016, 0, 0, 0);
    clear_global_8c19b29c();
    if (o->f34 != 0) {
        call_8c156ec0((void *)(o->f34));
    }
    v121 = (S_vv121 *)o->f34;
    if (v121 != 0) {
        v121->f80 = (v121->f80 & 0xffff) & -3;
        if (v121->f98 != 0) {
            operation_8c19a044((void *)(v121->f98), 1);
        }
    }
    if (o->f34 != 0) {
        request_resource_release((void *)(o->f34));
        o->f34 = (Arg0_34 *)0;
    }
    o->f28 = 0;
}
