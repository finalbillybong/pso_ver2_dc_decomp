typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_44 Arg0_44;
typedef struct Arg0_48 Arg0_48;
typedef struct Arg0_4c Arg0_4c;
typedef struct Arg0_50 Arg0_50;
typedef struct Arg0_54 Arg0_54;
typedef struct Arg0_58 Arg0_58;
typedef struct Arg0_5c Arg0_5c;
typedef struct Arg0_6c Arg0_6c;
typedef struct Arg0_70 Arg0_70;
typedef struct Arg0_74 Arg0_74;
typedef struct S_vv1 S_vv1;
typedef struct S_vv106 S_vv106;
typedef struct S_vv110 S_vv110;
typedef struct S_vv215 S_vv215;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x14];
    Arg0_30 *f30;
    Arg0_34 *f34;
    char unknown38[0xc];
    Arg0_44 *f44;
    Arg0_48 *f48;
    Arg0_4c *f4c;
    Arg0_50 *f50;
    Arg0_54 *f54;
    Arg0_58 *f58;
    char unknown5c[0x10];
    Arg0_6c *f6c;
    Arg0_70 *f70;
    Arg0_74 *f74;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct S_vv106 {
    char unknown0[0x4];
    short f04;
};
struct S_vv110 {
    char unknown0[0x4];
    short f04;
};
struct S_vv215 {
    char unknown0[0x4];
    short f04;
};
extern void lookup_low_id(int);
extern void request_resource_release(void *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c0dcc10(Object *o, int a1)
{
    S_vv1 *v1;
    int v85;
    int v86;
    S_vv106 *v106;
    S_vv110 *v110;
    int v134;
    int v135;
    S_vv215 *v215;
    if (o == 0) {
    } else {
        o->dispatch = (void *)0x8c26772c;
        lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
        if (o->f74 != 0) {
            v1 = (S_vv1 *)o->f74;
            v1->f04 |= 1;
            o->f74 = (Arg0_74 *)0;
        }
        if (o->f6c != 0) {
            request_resource_release((void *)(o->f6c));
            o->f6c = (Arg0_6c *)0;
        }
        if (o->f48 != 0) {
            request_resource_release((void *)(o->f48));
            o->f48 = (Arg0_48 *)0;
        }
        if (o->f50 != 0) {
            request_resource_release((void *)(o->f50));
            o->f50 = (Arg0_50 *)0;
        }
        if (o->f4c != 0) {
            request_resource_release((void *)(o->f4c));
            o->f4c = (Arg0_4c *)0;
        }
        v85 = (int)3;
        while (v85 >= 0) {
            v86 = (int)(v85 << 2);
            if (*(int *)((char *)((char *)o + 0x5c) + (v86)) != 0) {
                request_resource_release((void *)(*(Arg0_5c **)((char *)((char *)o + 0x5c) + (v86))));
                *(int *)((char *)((char *)o + 0x5c) + (v86)) = 0;
            }
            v85 = (int)(v85 + -1);
        }
        if (o->f58 != 0) {
            v106 = (S_vv106 *)o->f58;
            v106->f04 |= 1;
            o->f58 = (Arg0_58 *)0;
        }
        if (o->f54 != 0) {
            v110 = (S_vv110 *)o->f54;
            v110->f04 |= 1;
            o->f54 = (Arg0_54 *)0;
        }
        if (o->f44 != 0) {
            request_resource_release((void *)(o->f44));
            o->f44 = (Arg0_44 *)0;
        }
        v134 = (int)2;
        while (v134 >= 0) {
            v135 = (int)(v134 << 2);
            if (*(int *)((char *)((char *)o + 0x38) + (v135)) != 0) {
                request_resource_release((void *)(*(Arg0_38 **)((char *)((char *)o + 0x38) + (v135))));
                *(int *)((char *)((char *)o + 0x38) + (v135)) = 0;
            }
            v134 = (int)(v134 + -1);
        }
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
        }
        if (o->f70 != 0) {
            request_resource_release((void *)(o->f70));
            o->f70 = (Arg0_70 *)0;
        }
        if (*(int *)0x8c4dbde0 != 0) {
            v215 = (S_vv215 *)*(S_g8c4dbde0 **)0x8c4dbde0;
            v215->f04 |= 1;
            *(int *)0x8c4dbde0 = 0;
        }
        if (*(int *)0x8c46fe20 == (int)o) {
            *(int *)0x8c46fe20 = 0;
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
