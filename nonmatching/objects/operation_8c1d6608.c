/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d6608
 * function: operation_8c1d6608
 * language: c
 * reference size: 224 bytes
 * compiled size: 220 bytes (-1.8%)
 * differing lines: 20 of 100 reference instruction lines
 * differing bytes: 204
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1c7658 S_c8c1c7658;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_28 Arg0_30_28;
typedef struct Arg0_70 Arg0_70;
typedef struct S_vv1 S_vv1;
struct Frame {
    int f00;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
    short f0e;
    short f10;
    short f12;
    short f14;
    short f16;
    short f18;
    char unknown1a[0x2];
};
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x3c];
    Arg0_70 *f70;
};
struct Arg0_30 {
    char unknown0[0x28];
    Arg0_30_28 *f28;
};
struct S_c8c1c7658 {
    char unknown0[0xa];
    unsigned short f0a;
    unsigned short f0c;
    unsigned short f0e;
};
struct S_vv1 {
    char unknown0[0x20];
    int f20;
};
extern S_g8c418248 *g_8c418248;
extern int lookup_low_id(int);
extern void call_8c1d677c(Object *);
extern S_c8c1c7658 *operation_8c1c7658(void *);
extern int call_8c163428(int, void *, Frame *);
extern int operation_8c029a48(void *, int);
void operation_8c1d6608(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int t1;
    int t2;
    S_c8c1c7658 *t3;
    int t4;
    int t5;
    int t6;
    (&frame)->f0e = 0;
    (&frame)->f0c = 0;
    (&frame)->f0a = 0;
    (&frame)->f08 = 0;
    (&frame)->f06 = 0;
    (&frame)->f04 = 0;
    (&frame)->f18 = 0;
    (&frame)->f16 = 0;
    (&frame)->f14 = 0;
    (&frame)->f12 = 0;
    (&frame)->f10 = 0;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        call_8c1d677c(o);
        v1 = (S_vv1 *)o->f30->f28;
        t3 = operation_8c1c7658((void *)(o->f70));
        t2 = call_8c163428(t1, (void *)(o->f70), (Frame *)((&frame)));
        if (t2 == 0 && (((&frame)->f00 & 1)) != 0) {
            return;
        }
        if (t3->f0a != 0) {
            t4 = operation_8c029a48((void *)t1, (int)(&(&frame)->f04));
            if (t4 == 0) {
                return;
            }
            v1->f20 = (&frame)->f04;
            return;
        }
        if (t3->f0c != 0) {
            t5 = operation_8c029a48((void *)t1, (int)(&(&frame)->f04));
            if (t5 == 0) {
                return;
            }
            v1->f20 = (&frame)->f08;
            return;
        }
        if (t3->f0e != 0) {
            t6 = operation_8c029a48((void *)t1, (int)(&(&frame)->f04));
            if (t6 != 0) {
                v1->f20 = (&frame)->f0a;
            }
        }
    }
}
