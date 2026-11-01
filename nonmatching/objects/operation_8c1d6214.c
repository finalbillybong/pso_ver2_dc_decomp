/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d6214
 * function: operation_8c1d6214
 * language: c
 * reference size: 416 bytes
 * compiled size: 416 bytes (+0.0%)
 * differing lines: 36 of 181 reference instruction lines
 * differing bytes: 28
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
typedef struct S_c8c1c7658 S_c8c1c7658;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_70 Arg0_70;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_18 S_vv7_18;
typedef struct S_vv7_1c S_vv7_1c;
typedef struct S_vv7_20 S_vv7_20;
typedef struct S_vv7_24 S_vv7_24;
typedef struct S_vv7_2c S_vv7_2c;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x3c];
    Arg0_70 *f70;
    char unknown74[0x38];
    Vector3 fac;
};
struct S_vv7 {
    char unknown0[0x18];
    S_vv7_18 *f18;
    S_vv7_1c *f1c;
    S_vv7_20 *f20;
    S_vv7_24 *f24;
    int f28;
    S_vv7_2c *f2c;
};
struct Frame {
    S_frame_0 *f00;
    int f04;
};
struct S_vv2 {
    int f00;
};
struct S_vv3 {
    int f00;
    char unknown4[0x1c];
    int f20;
};
struct S_vv4 {
    int f00;
};
struct S_frame_0 {
    int f00;
};
struct S_vv5 {
    int f00;
};
struct S_c8c1c7658 {
    char unknown0[0xa];
    unsigned short f0a;
    unsigned short f0c;
    unsigned short f0e;
};
struct S_vv1 {
    int f00;
};
extern Vector3 g_8c32a180;
extern S_g8c418248 *g_8c418248;
extern int lookup_low_id(int);
extern void call_8c1d6550(Object *);
extern S_c8c1c7658 *operation_8c1c7658(void *);
extern int call_8c163428(int, void *, void *);
extern void normalize_rectangle_fields(void *, float, float);
extern void initialize_fields_8c0e24e8(void *);
void operation_8c1d6214(Object *o)
{
    Frame frame;
    S_vv7 *v7;
    int v8;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    S_vv5 *v5;
    int t1;
    S_c8c1c7658 *t3;
    int t2;
    S_vv1 *v1;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        return;
    }
    call_8c1d6550(o);
    *(Vector3 *)&o->fac = *(Vector3 *)&g_8c32a180;
    v7 = (S_vv7 *)o->f30;
    v1 = (S_vv1 *)v7->f18;
    v2 = (S_vv2 *)v7->f1c;
    v3 = (S_vv3 *)v7->f20;
    v4 = (S_vv4 *)v7->f24;
    v8 = (int)o->f70;
    (&frame)->f00 = (S_frame_0 *)v7->f28;
    v5 = (S_vv5 *)v7->f2c;
    t3 = operation_8c1c7658((void *)v8);
    t2 = call_8c163428(t1, (void *)(o->f70), (void *)(&(&frame)->f04));
    if (t2 == 0 && (((&frame)->f04 & 1)) != 0) {
        normalize_rectangle_fields((void *)v1, 0.0f, 132.0f);
        v2->f00 |= 2;
        v3->f00 |= 2;
        v4->f00 |= 2;
        (&frame)->f00->f00 |= 2;
        v5->f00 |= 2;
        return;
    }
    if (t3->f0a != 0) {
        normalize_rectangle_fields((void *)v1, 0.0f, 172.0f);
        initialize_fields_8c0e24e8((void *)v2);
        initialize_fields_8c0e24e8((void *)v4);
        initialize_fields_8c0e24e8((void *)v5);
        v3->f20 = t3->f0a;
        return;
    }
    if (t3->f0c != 0) {
        normalize_rectangle_fields((void *)v1, 0.0f, 192.0f);
        initialize_fields_8c0e24e8((void *)v2);
        initialize_fields_8c0e24e8((void *)v4);
        initialize_fields_8c0e24e8((void *)v5);
        v3->f20 = t3->f0c;
        return;
    }
    if (t3->f0e != 0) {
        normalize_rectangle_fields((void *)v1, 0.0f, 212.0f);
        initialize_fields_8c0e24e8((void *)v2);
        initialize_fields_8c0e24e8((void *)v4);
        initialize_fields_8c0e24e8((void *)v5);
        v3->f20 = t3->f0e;
        return;
    }
    v1->f00 |= 2;
    v2->f00 |= 2;
    v3->f00 |= 2;
    v4->f00 |= 2;
    (&frame)->f00->f00 |= 2;
    v5->f00 |= 2;
}
