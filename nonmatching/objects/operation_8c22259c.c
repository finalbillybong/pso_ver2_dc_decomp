/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22259c
 * function: operation_8c22259c
 * language: c
 * reference size: 396 bytes
 * compiled size: 396 bytes (+0.0%)
 * differing lines: 72 of 157 reference instruction lines
 * differing bytes: 61
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c5064f0 S_L8c5064f0;
typedef struct Frame Frame;
typedef struct S_frame_58 S_frame_58;
typedef struct S_frame_5c S_frame_5c;
typedef struct S_g8c506060 S_g8c506060;
typedef struct S_g8c506064 S_g8c506064;
typedef struct Object Object;
typedef struct Arg0_22cc Arg0_22cc;
typedef struct Arg0_e0 Arg0_e0;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x2284];
    int f22ac;
    char unknown22b0[0x1c];
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
extern S_g8c506060 *g_8c506060;
extern S_g8c506064 *g_8c506064;
extern S_L8c5064f0 g_8c5064f0;
extern int bu_check_busy_8c372d98(void *);
extern int call_8c377fd0(Frame *, void *);
extern int operation_8c2324e0(void);
extern int operation_8c2324c0(void);
extern void operation_8c22d42c(void *, int);
extern int operation_8c22d538(void *, void *);
extern int call_8c1052b4(int, int, void *, void *);
extern int call_8c222728(Object *, int);
extern void memcpy_8c12b77c(int, int, int);
void operation_8c22259c(Object *o)
{
    Frame frame;
    int v1;
    int v3;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    t1 = bu_check_busy_8c372d98((void *)(*(Arg0_e0 **)((char *)((char *)o + 0xe0) + (o->f22ac * 0xb8))));
    switch (t1) {
    case 0:
        t2 = call_8c377fd0((Frame *)((&frame)), (void *)(o->f22cc));
        switch (t2) {
        case 0:
            t3 = operation_8c2324e0();
            v1 = (int)t3;
            if (t3 == 0) {
                t7 = operation_8c2324c0();
                v1 = (int)t7;
            }
            (&g_8c5064f0)->f04 = (int)(v1);
            (&g_8c5064f0)->f00 = (int)(v1);
            operation_8c22d42c((void *)((&frame)->f58), (int)((&frame)->f5c));
            t4 = operation_8c22d538((void *)((&frame)->f58), (void *)((&frame)->f5c));
            if (t4 == 0) {
                o->f22dc += 2;
                o->f24 = 2;
                return;
            }
            t5 = call_8c1052b4((int)((int)(&frame)->f58 + 8), (int)((int)(&frame)->f5c + -8), g_8c506060, g_8c506064);
            if (t5 != 0) {
                v3 = (int)g_8c506060;
                t6 = call_8c222728(o, v3);
                if (t6 != 0) {
                    memcpy_8c12b77c((int)((int)o + o->f22ac * 0xb8 + 0x39), (int)(v3 + 0x14), 0x20);
                    memcpy_8c12b77c((int)((int)o + o->f22ac * 0xb8 + 0x59), (int)(v3 + 0x34), 0x80);
                    o->f22ac += 1;
                }
                o->f22dc += 2;
                o->f24 = 2;
                return;
            }
            o->f22dc += 2;
            o->f24 = 2;
            return;
        case -223:
            o->f22dc += 2;
            o->f24 = 2;
            return;
        case -224:
            o->f22dc += 2;
            o->f24 = 2;
        }
    }
}
