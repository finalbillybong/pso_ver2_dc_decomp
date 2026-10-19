typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3a4 Arg0_3a4;
typedef struct Arg0_3a8 Arg0_3a8;
typedef struct Arg0_40c Arg0_40c;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x382];
    Arg0_3a4 *f3a4;
    Arg0_3a8 *f3a8;
    int f3ac;
    char unknown3b0[0x14];
    float f3c4;
    float f3c8;
    float f3cc;
    char unknown3d0[0x38];
    int f408;
    Arg0_40c *f40c;
};
struct S_vv1 {
    char unknown0[0x20];
    unsigned short f20;
};
struct Arg0_3a8 {
    char unknown0[0x18];
    int f18;
};
extern int hierarchy_is_active(void *);
extern void refresh_follow_effect_8c0129f4(void *);
extern void call_8c05fbf8(int, void *, int, int);
extern void create_effect_777c(void *, int);
extern void call_8c0ffdf0(void *, int);
void operation_8c0fa798(Object *o)
{
    char *v18;
    int v2;
    S_vv1 *v1;
    int t1;
    v18 = (char *)o->f40c;
    if (v18 != 0) {
        t1 = hierarchy_is_active((void *)v18);
        if (t1 != 0) {
            v1 = (S_vv1 *)o->f40c;
            v2 = (int)(o->f20 - v1->f20 + -1);
            if (v2 >= 0 && !(v2 >= 4)) {
                if (*(int *)((char *)((char *)v1 + 0x3d4) + (v2 << 3)) == 1) {
                    *(int *)((char *)((char *)v1 + 0x3d8) + (v2 << 3)) = 0;
                    *(int *)((char *)((char *)v1 + 0x3d4) + (v2 << 3)) = 2;
                }
                v2 = (int)(v2 << 3);
            }
        }
    }
    o->f3cc = 1.0f;
    o->f3c8 = 1.0f;
    o->f3c4 = 1.0f;
    o->f3ac = 5;
    refresh_follow_effect_8c0129f4((void *)o);
    call_8c05fbf8(0x3001b, (void *)(((char *)o + 0x3c)), 0, 0);
    create_effect_777c((void *)(((char *)o + 0x324)), 0xfe);
    call_8c0ffdf0((void *)(o->f3a4), 5);
    o->f3a8->f18 &= -0x14001ad1;
    o->f3a8->f18 |= 0x14000a50;
    o->f408 = 0;
}
