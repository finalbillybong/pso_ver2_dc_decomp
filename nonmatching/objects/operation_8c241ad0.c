/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c241ad0
 * function: operation_8c241ad0
 * language: c
 * reference size: 488 bytes
 * compiled size: 484 bytes (-0.8%)
 * differing lines: 98 of 195 reference instruction lines
 * differing bytes: 430
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
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_64 S_c8c021ef8_64;
typedef struct S_c8c022ce0 S_c8c022ce0;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_3c;
typedef struct Block_p0_f4 {
    float f00;
    float f04;
    float f08;
} Block_p0_f4;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x7c];
    unsigned short fe4;
    char unknowne6[0x2];
    float fe8;
    float fec;
    float ff0;
    Block_p0_f4 ff4;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct S_c8c022ce0 {
    Vector3 f00;
};
struct S_c8c021ef8 {
    char unknown0[0x64];
    S_c8c021ef8_64 *f64;
    char unknown68[0x2bc];
    Vector3 f324;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
extern int g_8c418248;
extern S_L8c41cba0 g_8c41cba0;
extern void operation_8c24225c(int);
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c2421f4(int);
extern S_c8c022ce0 *operation_8c022ce0(void *, int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, Frame *, void *);
extern void njPopMatrix_8c38accc(int);
extern void operation_8c241d30(void *);
extern int call_8c241d88(Object *);
extern void operation_8c2421b8(int, int);
void operation_8c241ad0(Object *o)
{
    Frame frame;
    unsigned short v1;
    S_c8c021ef8 *t5;
    S_c8c022ce0 *t3;
    S_c8c021ef8 *t1;
    int t4;
    S_c8c022ce0 *t6;
    v1 = (unsigned short)o->fe4;
    if ((unsigned short)v1 == g_8c418248 && (((&g_8c41cba0)->f28 & 0x400)) != 0) {
        operation_8c24225c(v1);
    }
    t1 = lookup_low_id((int)(o->fe4 & 0xffff));
    if (t1 == 0 || operation_8c2421f4((int)(o->fe4)) == 0) {
        return;
    }
    t3 = operation_8c022ce0((void *)t1, 0);
    if (t3 != 0) {
        *(Vector3 *)&o->f3c = *(Vector3 *)&t3->f00;
    } else {
        *(Vector3 *)&o->f3c = *(Vector3 *)&t1->f324;
    }
    o->f64 = (int)(t1->f64);
    (&frame)->f00 = 0.0f;
    (&frame)->f04 = 0.0f;
    (&frame)->f08 = 1.0f;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (void *)(t1->f64));
    call_8c3be280(0, (Frame *)((&frame)), (void *)(&o->fe8));
    njPopMatrix_8c38accc(1);
    o->ff4.f00 = o->f3c.f00 + o->fe8 * 40.0f;
    o->ff4.f04 = o->f3c.f04 + o->fec * 40.0f;
    o->ff4.f08 = o->f3c.f08 + o->ff0 * 40.0f;
    operation_8c241d30((void *)o);
    t4 = call_8c241d88(o);
    t5 = lookup_low_id((int)((unsigned short)t4));
    if (t5 != 0) {
        t6 = operation_8c022ce0((void *)t5, 0);
        if (t6 != 0) {
            *(Vector3 *)&o->ff4 = *(Vector3 *)&t6->f00;
        } else {
            *(Vector3 *)&o->ff4 = *(Vector3 *)&t5->f324;
        }
    }
    operation_8c2421b8((int)(o->fe4), t4);
}
