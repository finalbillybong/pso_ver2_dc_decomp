typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_5c Arg0_5c;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x21];
    char f21;
    short f22;
    char unknown24[0x4];
    Arg0_28 *f28;
    Arg0_2c *f2c;
    char unknown30[0x4];
    Arg0_34 *f34;
    char unknown38[0x24];
    Arg0_5c *f5c;
};
struct S_vv1 {
    char unknown0[0x72];
    short f72;
    short f74;
};
extern void call_8c21f49c(void *, int, int, int, void *, void *);
void operation_8c1d21e0(Object *o)
{
    S_vv1 *v1;
    short v2;
    v1 = (S_vv1 *)o->f5c;
    v2 = (short)v1->f72;
    call_8c21f49c((void *)(o->f34), (int)(o->f22), (int)(o->f21), (int)((short)v2 + (v1->f74 << 1)), (void *)(o->f28), (void *)(o->f2c));
}
