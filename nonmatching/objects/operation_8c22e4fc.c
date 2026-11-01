/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22e4fc
 * function: operation_8c22e4fc
 * language: c
 * reference size: 392 bytes
 * compiled size: 392 bytes (+0.0%)
 * differing lines: 4 of 160 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode switch2)
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
typedef struct S_L8c5063c8 S_L8c5063c8;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct Object Object;
typedef struct Arg0_54 Arg0_54;
typedef struct Arg0_58 Arg0_58;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x4c0];
    int f4c0;
};
struct Object {
    char unknown0[0x54];
    Arg0_54 *f54;
    Arg0_58 *f58;
    char unknown5c[0x8];
    int f64;
    char unknown68[0x2c];
    int f94;
};
struct S_L8c5063c8 {
    char unknown0[0x34];
    int f34;
};
struct Frame {
    char unknown0[0x34];
    int f34;
    char unknown38[0xc];
    void *f44;
    void *f48;
    short f4c;
    short f4e;
    int f50;
    short f54;
    char unknown56[0x2];
    int f58;
    int f5c;
};
extern char g_8c5063c8[];
extern void operation_8c22e8e4(void *, int, int);
extern int bu_check_busy_8c372d98(void *);
extern void game_free_8c011ec0(void *);
extern int game_malloc_buffer_8c011e9c(int);
extern void memset_8c12b880(Frame *, int, int);
extern void call_8c18e720(Frame *, void *);
extern void memcpy_8c12b77c(void *, void *, int);
extern int call_8c377d84(void *, Frame *);
void operation_8c22e4fc(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    if (*(char *)0x8c50634c != 1) {
        operation_8c22e8e4((void *)o, (int)((*(S_g8c467180 **)0x8c467180)->f2c->f4c0), 1);
        o->f94 = 0x13;
        return;
    }
    if ((int)(o->f54) >= 0 && *(int *)(g_8c5063c8 + 0x34) > 0) {
        t1 = bu_check_busy_8c372d98((void *)(o->f54));
        if (t1 != 0) {
            return;
        }
        if (o->f64 > 0) {
            if (o->f58 != 0) {
                game_free_8c011ec0((void *)(o->f58));
                o->f58 = (Arg0_58 *)0;
            }
            t2 = game_malloc_buffer_8c011e9c((int)(o->f64 << 9));
            o->f58 = (Arg0_58 *)t2;
            if (o->f58 != 0) {
                memset_8c12b880((Frame *)((&frame)), 0, 0x60);
                call_8c18e720((Frame *)((&frame)), (void *)((void *)0x8c319970));
                call_8c18e720((Frame *)(((char *)(&frame) + 0x12)), (void *)((g_8c5063c8 + 0x10)));
                memcpy_8c12b77c((void *)(&(&frame)->f34), (void *)((void *)0x8c3199a4), 0x10);
                (&frame)->f44 = (void *)0x8c286c58;
                (&frame)->f48 = (void *)0x8c286c78;
                (&frame)->f4c = 1;
                (&frame)->f4e = 1;
                (&frame)->f50 = 0;
                (&frame)->f54 = 0;
                (&frame)->f58 = (int)(*(int *)(g_8c5063c8 + 0x38));
                (&frame)->f5c = (int)(*(int *)(g_8c5063c8 + 0x34));
                t3 = call_8c377d84((void *)(o->f58), (Frame *)((&frame)));
                switch (t3) {
                case -256:
                    o->f94 = 0x11;
                    return;
                }
                if (t3 != o->f64) {
                    o->f64 = (int)(t3);
                }
                o->f94 = 0xf;
                return;
            }
            o->f94 = 0x11;
            return;
        }
        o->f94 = 0x11;
        return;
    }
    o->f94 = 0x11;
}
