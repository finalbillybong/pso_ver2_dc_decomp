typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_40c Arg0_40c;
typedef struct Arg0_41c Arg0_41c;
typedef struct Arg0_420 Arg0_420;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x400];
    Arg0_41c *f41c;
    Arg0_420 *f420;
};
struct Arg0_40c {
    char unknown0[0x4];
    short f04;
};
struct Arg0_41c {
    char unknown0[0x4];
    short f04;
};
struct Arg0_420 {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c052124(void *);
extern void destroy_field_8c0fbfa4(void *, short);
extern void destroy_actor_mode_state(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c079058(Object *o, int a1)
{
    int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c263e38;
        operation_8c052124((void *)o);
        v1 = (int)0;
        while (4 > v1) {
            if (*(int *)((char *)((char *)o + 0x40c) + (v1 << 2)) != 0) {
                (*(Arg0_40c **)((char *)((char *)o + 0x40c) + (v1 << 2)))->f04 |= 1;
            }
            v1 = (int)(v1 + 1);
        }
        if (o->f41c != 0) {
            o->f41c->f04 |= 1;
        }
        if (o->f420 != 0) {
            o->f420->f04 |= 1;
        }
        destroy_field_8c0fbfa4((void *)(((char *)o + 0x424)), (short)-1);
        destroy_actor_mode_state((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
