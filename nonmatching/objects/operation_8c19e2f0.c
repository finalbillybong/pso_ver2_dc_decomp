/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19e2f0
 * function: operation_8c19e2f0
 * language: c
 * reference size: 668 bytes
 * compiled size: 676 bytes (+1.2%)
 * differing lines: 122 of 296 reference instruction lines
 * differing bytes: 476
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    float f0c;
    char unknown10[0x4];
    float f14;
    char unknown18[0x4];
    char f1c;
    char f1d;
    char unknown1e[0x2];
    Arg0_20 *f20;
    Arg0_24 *f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
    int f30;
    Arg0_34 *f34;
};
struct Arg1 {
    char unknown0[0x10];
    float f10;
    float f14;
    float f18;
    char unknown1c[0x14];
    int f30;
    float f34;
    char unknown38[0x4];
    float f3c;
    char unknown40[0x4];
    float f44;
};
struct Frame {
    float f00;
    float f04;
};
struct S_g8c46fe20 {
    char unknown0[0x28];
    int f28;
};
extern void call_8c19e58c(Arg1 *, Frame *, int, int, float);
extern void set_child_blend(void);
extern void restore_child_blend(void);
extern void operation_8c19a370(int, int, int, float, float);
extern int operation_8c04b8dc(void *);
extern void call_8c19a3a0(Frame *, void *, int, float);
void operation_8c19e2f0(Object *o, Arg1 *a1)
{
    Frame frame;
    float v1;
    float v2;
    int v17;
    float v19;
    int t1;
    int t2;
    if (((o->tag & 4)) == 0) {
        return;
    }
    v1 = (float)(a1->f14 + o->f0c);
    if ((o->f14 + v1) < a1->f3c || v1 > a1->f44 || !(a1->f30 >= 0)) {
        return;
    }
    (&frame)->f00 = a1->f10 + o->f08;
    (&frame)->f04 = a1->f14 + o->f0c;
    v2 = (float)(-1.0f / (a1->f34 + 0.1495f));
    if (((o->tag & 0x200)) != 0) {
        call_8c19e58c(a1, (Frame *)((&frame)), (unsigned char)o->f1c, -1, v2);
        (&frame)->f00 += 18.0f;
        call_8c19e58c(a1, (Frame *)((&frame)), (unsigned char)o->f1d, -1, v2);
        (&frame)->f00 += 18.0f;
        call_8c19e58c(a1, (Frame *)((&frame)), (int)(o->f28), -1, v2);
        (&frame)->f00 += 18.0f;
    } else {
        set_child_blend();
        if (((o->tag & 0x100)) != 0) {
            (&frame)->f00 += 18.0f;
            call_8c19e58c(a1, (Frame *)((&frame)), (unsigned char)o->f1c, (int)(o->f28), v2);
        } else {
            call_8c19e58c(a1, (Frame *)((&frame)), (unsigned char)o->f1c, (int)(o->f28), v2);
            (&frame)->f00 += 18.0f;
        }
        restore_child_blend();
        call_8c19e58c(a1, (Frame *)((&frame)), (unsigned char)o->f1d, (int)(o->f2c), v2);
        (&frame)->f00 += 18.0f;
    }
    operation_8c19a370((int)a1, 1, 1, v2, 100000.0f);
    if (((o->tag & 0x400)) != 0) {
        (&frame)->f00 = a1->f10 + a1->f18 * 0.5f;
        t1 = operation_8c04b8dc((void *)(o->f20));
        (&frame)->f00 -= (float)(unsigned int)t1 * 0.5f;
    }
    if (((o->tag & 0x800)) != 0) {
        if (*(int *)0x8c46fe20 == 0) {
            v17 = (int)-0x1600;
            goto L_8c19e4ec;
        }
        v17 = (int)(*(S_g8c46fe20 **)0x8c46fe20)->f28;
    } else {
        v17 = (int)o->f30;
    }
L_8c19e4ec:;
    call_8c19a3a0((Frame *)((&frame)), (void *)(o->f20), v17, 100000.0f);
    t2 = operation_8c04b8dc((void *)(o->f24));
    v19 = (float)(a1->f10 + a1->f18);
    (&frame)->f00 = v19 - (float)(unsigned int)t2 - 11.0f;
    call_8c19a3a0((Frame *)((&frame)), (void *)(o->f24), (int)(o->f34), 100000.0f);
}
