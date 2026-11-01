/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1cb11c
 * function: operation_8c1cb11c
 * language: c
 * reference size: 1012 bytes
 * compiled size: 1012 bytes (+0.0%)
 * differing lines: 22 of 389 reference instruction lines
 * differing bytes: 18
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_44 S_g8c467180_44;
typedef struct S_g8c467180_44_18 S_g8c467180_44_18;
typedef struct S_g8c467180_44_1c S_g8c467180_44_1c;
typedef struct S_g8c467180_44_48 S_g8c467180_44_48;
typedef struct S_g8c467180_44_4c S_g8c467180_44_4c;
typedef struct S_g8c467180_44_50 S_g8c467180_44_50;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_44 Arg0_44;
struct Object {
    char unknown0[0x28];
    char f28;
    char f29;
    char unknown2a[0x2];
    Arg0_2c *f2c;
    char unknown30[0x4];
    Arg0_34 *f34;
    char unknown38[0x8];
    int f40;
    Arg0_44 *f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    int f58;
    void *f5c;
};
struct Arg0_34 {
    char unknown0[0x80];
    unsigned short f80;
};
struct Frame {
    Block8 f00;
    Block8 f08;
    Block8 f10;
    int f18;
    char unknown1c[0xfc];
};
struct S_g8c467180 {
    char unknown0[0x44];
    S_g8c467180_44 *f44;
};
struct S_g8c467180_44 {
    char unknown0[0x18];
    S_g8c467180_44_18 *f18;
    S_g8c467180_44_1c *f1c;
    char unknown20[0x28];
    S_g8c467180_44_48 *f48;
    S_g8c467180_44_4c *f4c;
    S_g8c467180_44_50 *f50;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern int operation_8c1571f4(void *);
extern void request_resource_release(void *);
extern void operation_8c199b14(void);
extern void operation_8c1b0308(void);
extern void operation_8c156e58(Arg0_34 *);
extern int create_fitted_pair_grid_view(void *, void *);
extern void sprintf_8c12b048(void *, void *, ...);
extern void operation_8c119764(int, int, int);
extern int operation_8c156c6c(int);
extern void operation_8c1571d4(void *, int);
extern void play_se_8c05fbf8(int, int, int, int);
extern void clear_global_8c19b29c(void);
extern int operation_8c19b054(void);
extern int call_8c372d38(int, void *);
extern int operation_8c01d8a8(void *, int);
extern int operation_8c04b8dc(void *);
extern Block8 g_8c3290b8;
void operation_8c1cb11c(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    if (((o->f34->f80 & 0xffff & 2)) == 0) {
    } else {
        t1 = operation_8c1571f4((void *)(o->f34));
        if (t1 != 0) {
            if (t1 == 1) {
                goto L_8c1cb1a8;
            }
            if (t1 == 2) {
                goto L_8c1cb258;
            }
            goto L_8c1cb2e8;
        }
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
        }
        operation_8c199b14();
        operation_8c1b0308();
        o->f29 = 7;
        o->f28 = 6;
        goto L_8c1cb2e8;
L_8c1cb1a8:;
        operation_8c156e58((Arg0_34 *)(o->f34));
        o->f28 = 5;
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&*(Block8 *)0x8c3290c0;
        *(Block8 *)&(&frame)->f10 = *(Block8 *)&*(Block8 *)0x8c3290c8;
        t2 = create_fitted_pair_grid_view((void *)(&(&frame)->f08), (void *)(&(&frame)->f10));
        o->f40 = (int)(t2);
        sprintf_8c12b048((void *)(&(&frame)->f18), (void *)((*(S_g8c467180 **)0x8c467180)->f44->f48), 0x186a0);
        operation_8c119764((int)(o->f40), (int)(&(&frame)->f18), 3);
        *(Block8 *)&(&frame)->f00 = g_8c3290b8;
        t3 = operation_8c156c6c((int)(&frame));
        o->f44 = (Arg0_44 *)t3;
        operation_8c1571d4((void *)(o->f44), 1);
        goto L_8c1cb2e8;
L_8c1cb258:;
        play_se_8c05fbf8(0x50016, 0, 0, 0);
        clear_global_8c19b29c();
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
        }
        o->f28 = 0;
        return;
    }
    t4 = operation_8c19b054();
    t5 = call_8c372d38((int)((char)t4), (void *)((void *)0x8c319870));
    if (t5 == 0 && ((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
        t6 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
        if (t6 == 0) {
            goto L_8c1cb2e8;
        }
    }
    play_se_8c05fbf8(0x50016, 0, 0, 0);
    clear_global_8c19b29c();
    if (o->f34 != 0) {
        request_resource_release((void *)(o->f34));
        o->f34 = (Arg0_34 *)0;
    }
    o->f28 = 0;
L_8c1cb2e8:;
    if (o->f34 == 0) {
        return;
    }
    t7 = operation_8c1571f4((void *)(o->f34));
    switch (t7) {
    case 0:
        t8 = operation_8c04b8dc((void *)((*(S_g8c467180 **)0x8c467180)->f44->f18));
        o->f48 = (640.0f - (float)(unsigned int)t8) / 2.0f;
        o->f58 = (int)((*(S_g8c467180 **)0x8c467180)->f44->f18);
        o->f50 = 320.0f;
        o->f5c = (void *)0x8c3290d0;
        o->f4c = 375.0f;
        o->f54 = o->f4c + 20.0f;
        return;
    case 1:
        t9 = operation_8c04b8dc((void *)((*(S_g8c467180 **)0x8c467180)->f44->f4c));
        o->f48 = (640.0f - (float)(unsigned int)t9) / 2.0f;
        o->f58 = (int)((*(S_g8c467180 **)0x8c467180)->f44->f4c);
        t10 = operation_8c04b8dc((void *)((*(S_g8c467180 **)0x8c467180)->f44->f50));
        o->f50 = (640.0f - (float)(unsigned int)t10) / 2.0f;
        o->f5c = (void *)(*(S_g8c467180 **)0x8c467180)->f44->f50;
        o->f4c = 375.0f;
        o->f54 = o->f4c + 20.0f;
        return;
    case 2:
        t11 = operation_8c04b8dc((void *)((*(S_g8c467180 **)0x8c467180)->f44->f1c));
        o->f48 = (640.0f - (float)(unsigned int)t11) / 2.0f;
        o->f58 = (int)((*(S_g8c467180 **)0x8c467180)->f44->f1c);
        o->f50 = 320.0f;
        o->f5c = (void *)0x8c3290d0;
        o->f4c = 375.0f;
        o->f54 = o->f4c + 20.0f;
    }
}
