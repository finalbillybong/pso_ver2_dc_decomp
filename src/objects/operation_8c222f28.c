typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c5064f0 S_L8c5064f0;
typedef struct Frame Frame;
typedef struct S_frame_58 S_frame_58;
typedef struct S_frame_5c S_frame_5c;
typedef struct S_g8c506068 S_g8c506068;
typedef struct S_g8c50606c S_g8c50606c;
typedef struct Object Object;
typedef struct Arg0_22cc Arg0_22cc;
typedef struct Arg0_e0 Arg0_e0;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x2290];
    int f22b8;
    char unknown22bc[0x10];
    Arg0_22cc *f22cc;
    char unknown22d0[0xc];
    int f22dc;
};
struct Frame {
    char unknown0[0x58];
    S_frame_58 *f58;
    S_frame_5c *f5c;
};
struct S_L8c5064f0 {
    int f00;
    int f04;
};
extern S_g8c506068 *g_8c506068;
extern S_g8c50606c *g_8c50606c;
extern S_L8c5064f0 g_8c5064f0;
extern int operation_8c1cdc80(void *);
extern int call_8c372d98(void *);
extern int call_8c377fd0(Frame *, void *);
extern int operation_8c2324e0(void);
extern int operation_8c2324c0(void);
extern void operation_8c22d42c(void *, int);
extern int call_8c22d538(void *, void *);
extern int call_8c1052b4(int, int, void *, void *);
extern void call_8c220c40(int, int);
extern void operation_8c223228(void *);
void operation_8c222f28(Object *o)
{
    Frame frame;
    char *v42;
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    v42 = (char *)o->f22b8;
    if (v42 != 0) {
        t1 = operation_8c1cdc80((void *)v42);
        t2 = call_8c372d98((void *)(*(Arg0_e0 **)((char *)((char *)o + 0xe0) + (t1 * 0xb8))));
        if (t2 == 0) {
            t3 = call_8c377fd0((Frame *)((&frame)), (void *)(o->f22cc));
            switch (t3) {
            case 0:
                t4 = operation_8c2324e0();
                v1 = (int)t4;
                if (t4 == 0) {
                    t7 = operation_8c2324c0();
                    v1 = (int)t7;
                }
                (&g_8c5064f0)->f04 = (int)(v1);
                (&g_8c5064f0)->f00 = (int)(v1);
                operation_8c22d42c((void *)((&frame)->f58), (int)((&frame)->f5c));
                t5 = call_8c22d538((void *)((&frame)->f58), (void *)((&frame)->f5c));
                if (t5 == 0) {
                    o->f22dc += 2;
                    o->f24 = 2;
                    return;
                }
                t6 = call_8c1052b4((int)((int)(&frame)->f58 + 8), (int)((int)(&frame)->f5c + -8), g_8c506068, g_8c50606c);
                if (t6 != 0) {
                    g_8c50606c = (S_g8c50606c *)(int)(t6);
                    o->f24 = 0xd;
                    return;
                }
                call_8c220c40(0x19, 1);
                operation_8c223228((void *)o);
                o->f24 = 5;
                return;
            case -223:
                call_8c220c40(0x19, 1);
                operation_8c223228((void *)o);
                o->f24 = 5;
                return;
            case -224:
                call_8c220c40(0x19, 1);
                operation_8c223228((void *)o);
                o->f24 = 5;
            }
        }
    }
}
