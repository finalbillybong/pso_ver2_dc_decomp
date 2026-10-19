typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_58 Arg0_58;
typedef struct Arg0_70 Arg0_70;
typedef struct Arg0_74 Arg0_74;
typedef struct S_vv17 S_vv17;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    char unknown24[0x4c];
    Arg0_70 *f70;
    Arg0_74 *f74;
};
struct S_vv17 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c0a29a0(void);
extern int lookup_low_id(int);
extern void operation_8c0264ac(void);
extern void request_resource_release(void *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c18bc10(Object *o, int a1)
{
    S_vv17 *v17;
    int v22;
    int v21;
    int t1;
    if (o != 0) {
        o->dispatch = (void *)0x8c272630;
        if (((o->f20 & 2)) != 0) {
            call_8c0a29a0();
        }
        if (((o->f20 & 1)) != 0) {
            t1 = lookup_low_id((int)g_8c418248);
            if (t1 != 0) {
                operation_8c0264ac();
            }
        }
        if (o->f70 != 0) {
            request_resource_release((void *)(o->f70));
            o->f70 = (Arg0_70 *)0;
        }
        if (o->f74 != 0) {
            v17 = (S_vv17 *)o->f74;
            v17->f04 |= 1;
            o->f74 = (Arg0_74 *)0;
        }
        v21 = (int)5;
        while (v21 >= 0) {
            v22 = (int)(v21 << 2);
            if (*(int *)((char *)((char *)o + 0x58) + (v22)) != 0) {
                request_resource_release((void *)(*(Arg0_58 **)((char *)((char *)o + 0x58) + (v22))));
                *(int *)((char *)((char *)o + 0x58) + (v22)) = 0;
            }
            v21 = (int)(v21 + -1);
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
