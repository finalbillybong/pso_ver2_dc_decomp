typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e228c S_g8c4e228c;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_64 S_vv1_64;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
struct S_vv1 {
    char unknown0[0x64];
    S_vv1_64 *f64;
};
struct Object {
    char unknown0[0x1b6];
    short f1b6;
    char unknown1b8[0x14e];
    short f306;
    char unknown308[0x94];
    int f39c;
};
struct S_vv4 {
    char unknown0[0x1b6];
    unsigned short f1b6;
    char unknown1b8[0x14e];
    unsigned short f306;
};
struct S_vv5 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4e228c *g_8c4e228c;
extern void refresh_records_8c1ada14(void);
extern void clear_global_render_resources(void);
extern void operation_8c177748(int);
extern void spawn_effect_alt_8c22a16c(void *, void *, void *);
void operation_8c1b704c(Object *o)
{
    S_vv4 *v4;
    S_vv1 *v1;
    S_vv5 *v5;
    refresh_records_8c1ada14();
    clear_global_render_resources();
    operation_8c177748(0x37);
    v1 = (S_vv1 *)g_8c4e228c;
    if (v1 != 0) {
        spawn_effect_alt_8c22a16c((void *)o, (void *)((int)v1 + 0x3c), (void *)(v1->f64));
    } else {
        spawn_effect_alt_8c22a16c((void *)o, (void *)((void *)0x8c327474), (void *)0);
    }
    v4 = (S_vv4 *)g_8c4e228c;
    if (v4 != 0) {
        {
            unsigned int t;
            t = v4->f306;
            o->f306 = (unsigned short)t;
            t = v4->f1b6;
            o->f1b6 = (unsigned short)t;
        }
        v5 = (S_vv5 *)g_8c4e228c;
        v5->f04 |= 1;
        g_8c4e228c = (S_g8c4e228c *)0;
    }
    o->f39c = 0x12e;
}
