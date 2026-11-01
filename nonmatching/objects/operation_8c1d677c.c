/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d677c
 * function: operation_8c1d677c
 * language: c
 * reference size: 492 bytes
 * compiled size: 492 bytes (+0.0%)
 * differing lines: 168 of 214 reference instruction lines
 * differing bytes: 86
 * provenance: generator draft (mode bgotoext)
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_4 S_frame_4;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_78 Arg0_78;
typedef struct Arg0_a8 Arg0_a8;
typedef struct S_vv30 S_vv30;
struct Frame {
    S_frame_0 *f00;
    S_frame_4 *f04;
    int f08;
    short f0c;
    short f0e;
    short f10;
    short f12;
    short f14;
    short f16;
    short f18;
    short f1a;
    short f1c;
    short f1e;
    short f20;
    char unknown22[0x2];
};
struct S_c8c021ef8 {
    char unknown0[0x184];
    int f184;
    char unknown188[0x22];
    short f1aa;
    short f1ac;
    short f1ae;
    short f1b0;
    short f1b2;
};
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x44];
    Arg0_78 *f78;
    char unknown7c[0x2c];
    Arg0_a8 *fa8;
};
struct S_vv30 {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
};
struct S_frame_4 {
    char unknown0[0x2];
    short f02;
    char unknown4[0x8];
    short f0c;
};
extern S_g8c418248 *g_8c418248;
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c1e5f20(void *, int);
extern int operation_8c1d78fc(void *);
extern void call_8c0229e0(S_c8c021ef8 *, void *, void *);
extern void call_8c022718(S_c8c021ef8 *, void *, void *);
extern void operation_8c1e5f5c(void *, int);
extern int call_8c163428(S_c8c021ef8 *, void *, void *);
extern void operation_8c1e5f68(void *, int);
void operation_8c1d677c(Object *o)
{
    Frame frame;
    S_vv30 *v30;
    char *v29;
    char *v2;
    char *v3;
    char *v4;
    char *v5;
    S_c8c021ef8 *t1;
    char *v1;
    int t2;
    int t3;
    (&frame)->f16 = 0;
    (&frame)->f14 = 0;
    (&frame)->f12 = 0;
    (&frame)->f10 = 0;
    (&frame)->f0e = 0;
    (&frame)->f0c = 0;
    (&frame)->f20 = 0;
    (&frame)->f1e = 0;
    (&frame)->f1c = 0;
    (&frame)->f1a = 0;
    (&frame)->f18 = 0;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        return;
    }
    (&frame)->f04 = (S_frame_4 *)t1->f184;
    if (t1->f184 == 0) {
        return;
    }
    v30 = (S_vv30 *)o->f30;
    v29 = (char *)v30->f00;
    (&frame)->f00 = (S_frame_0 *)v29;
    v1 = (char *)v30->f0c;
    v2 = (char *)v30->f04;
    v3 = (char *)v30->f10;
    v4 = (char *)v30->f08;
    v5 = (char *)v30->f14;
    operation_8c1e5f20((void *)v29, (int)(t1->f1aa + t1->f1ac));
    operation_8c1e5f20((void *)v1, (int)(t1->f1b2));
    operation_8c1e5f20((void *)v2, (int)(t1->f1b0));
    operation_8c1e5f20((void *)v3, (int)(t1->f1ae));
    operation_8c1e5f20((void *)v4, (int)((&frame)->f04->f02));
    operation_8c1e5f20((void *)v5, (int)((&frame)->f04->f0c));
    if (o->f78 != 0) {
        t2 = operation_8c1d78fc((void *)o);
        if (t2 != 0) {
            call_8c0229e0(t1, (void *)(&(&frame)->f0c), (void *)(o->fa8));
        } else {
            call_8c022718(t1, (void *)(&(&frame)->f0c), (void *)(o->f78));
        }
        operation_8c1e5f5c((void *)((&frame)->f00), (int)((&frame)->f0c));
        operation_8c1e5f5c((void *)v1, (int)((&frame)->f12));
        operation_8c1e5f5c((void *)v2, (int)((&frame)->f0e));
        operation_8c1e5f5c((void *)v3, (int)((&frame)->f14));
        operation_8c1e5f5c((void *)v4, (int)((&frame)->f10));
        operation_8c1e5f5c((void *)v5, (int)((&frame)->f16));
        t3 = call_8c163428(t1, (void *)(o->f78), (void *)(&(&frame)->f08));
        if (t3 != 0) {
            operation_8c1e5f68((void *)((&frame)->f00), 1);
            operation_8c1e5f68((void *)v1, 1);
            operation_8c1e5f68((void *)v2, 1);
            operation_8c1e5f68((void *)v3, 1);
            operation_8c1e5f68((void *)v4, 1);
            operation_8c1e5f68((void *)v5, 1);
            return;
        }
        operation_8c1e5f68((void *)((&frame)->f00), 0);
        operation_8c1e5f68((void *)v1, 0);
        operation_8c1e5f68((void *)v2, 0);
        operation_8c1e5f68((void *)v3, 0);
        operation_8c1e5f68((void *)v4, 0);
        operation_8c1e5f68((void *)v5, 0);
    }
}
