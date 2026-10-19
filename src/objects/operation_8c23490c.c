typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2e1db8 S_L8c2e1db8;
typedef struct S_g8c2e1dbc S_g8c2e1dbc;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    char f3c;
    char f3d;
};
struct S_L8c2e1db8 {
    char unknown0[0x4];
    S_g8c2e1dbc *f04;
};
struct S_vv2 {
    int f00;
};
extern int g_8c3390c0;
extern S_g8c44be88 *g_8c44be88;
extern S_L8c2e1db8 g_8c2e1db8;
extern void initialize_position_controller(void *, void *);
Object *operation_8c23490c(Object *o)
{
    int v1;
    int v3;
    S_vv2 *v2;
    initialize_position_controller((void *)o, g_8c44be88);
    o->dispatch = (void *)0x8c279008;
    o->tag = (int)(g_8c3390c0);
    o->size = 0x5c;
    o->f3c = 0;
    o->f3d = 0xf;
    v1 = (int)0;
    while (0xf > v1) {
        v2 = (S_vv2 *)*(S_g8c2e1dbc **)((char *)&g_8c2e1db8.f04 + (v1 << 3));
        v3 = (int)0;
        while (0x64 > v3) {
            if (v2->f00 == 0) {
                goto L_8c23496c;
            }
            v2 = (S_vv2 *)((char *)v2 + 4);
            v3 = (int)(v3 + 1);
        }
L_8c23496c:;
        *(char *)((char *)((char *)o + 0x4d) + (v1)) = v3;
        *(char *)((char *)((char *)o + 0x3e) + (v1)) = 0;
        v1 = (int)(v1 + 1);
    }
    return o;
}
