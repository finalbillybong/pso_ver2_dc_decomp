/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09a18c
 * function: operation_8c09a18c
 * language: c
 * reference size: 428 bytes
 * compiled size: 428 bytes (+0.0%)
 * differing lines: 14 of 166 reference instruction lines
 * differing bytes: 13
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
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_10 Arg0_10;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_28 Arg0_28;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xa];
    Arg0_10 *f10;
    char unknown14[0xc];
    Arg0_20 *f20;
    int f24;
    Arg0_28 *f28;
    int f2c;
    int f30;
    float f34;
};
struct Frame {
    char unknown0[0xc];
    char f0c;
    char unknownd[0x3];
};
struct Arg0_20 {
    char unknown0[0xc];
    char f0c;
};
struct Arg0_10 {
    char unknown0[0x30];
    int f30;
};
struct S_vv9 {
    char unknown0[0x4];
    short f04;
};
extern int heap_alloc_8c122700(void *, unsigned int);
extern void operation_8c051a98(void *, int, int, int, unsigned char);
extern void operation_8c051d50(void *, Arg0_20 *);
extern void operation_8c051d5c(void *, float, float);
extern void operation_8c051db4(void *, float, float);
extern int operation_8c051cf0(void *);
extern int operation_8c051d18(void *);
extern void strncpy_8c12b154(Frame *, int, int);
extern int call_8c0353ec(Frame *);
extern int operation_8c09a474(Object *, Frame *);
extern void operation_8c0354ac(int);
extern void operator_delete_8c18de08(int);
extern void play_se_8c05fbf8(int, int, int, int);
void operation_8c09a18c(Object *o)
{
    Frame frame;
    float v3;
    int t3;
    int v4;
    int v5;
    S_vv9 *v9;
    int v6;
    int t2;
    int t1;
    int t4;
    int t5;
    o->f2c += 1;
    if (o->f24 == 0) {
        if (1 >= o->f2c) {
            return;
        }
        t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x30);
        if (t1 != 0) {
            operation_8c051a98((void *)t1, (int)o, 0xc, 0, (unsigned char)0);
        }
        o->f28 = (Arg0_28 *)t1;
        operation_8c051d50((void *)(o->f28), (Arg0_20 *)(o->f20));
        v3 = (float)*(float *)0x8c31bf88;
        operation_8c051d5c((void *)(o->f28), 148.0f, v3 * 137.0f);
        operation_8c051db4((void *)(o->f28), 53.0f, v3 * 178.0f);
        o->f24 = 1;
        return;
    }
    if (o->f30 == 0) {
        if ((o->f34 += -0.0833333358f) <= 0.0f) {
            o->f34 = 0.0f;
            o->f04 |= 1;
        }
        return;
    }
    if ((o->f34 += 0.166666672f) > 1.0f) {
        o->f34 = 1.0f;
    }
    t2 = operation_8c051cf0((void *)(o->f28));
    if (t2 != 0) {
        t3 = operation_8c051d18((void *)(o->f28));
        v4 = (int)0x50004;
        strncpy_8c12b154((Frame *)((&frame)), t3, 0xc);
        (&frame)->f0c = 0;
        t4 = call_8c0353ec((Frame *)((&frame)));
        v5 = (int)v4;
        if (t4 == 0) {
            v5 = (int)0x5000d;
        }
        t5 = operation_8c09a474(o, (Frame *)((&frame)));
        v6 = (int)v5;
        if (t5 != 0) {
            v6 = (int)0x50008;
            strncpy_8c12b154((Frame *)((&frame)), (int)(o->f20), 0xc);
            (&frame)->f0c = 0;
        }
        operation_8c0354ac((int)(&frame));
        strncpy_8c12b154((Frame *)(o->f20), (int)(&frame), 0xc);
        o->f20->f0c = 0;
        operator_delete_8c18de08(t3);
        play_se_8c05fbf8(v6, 0, 0, 0);
        o->f10->f30 = 0;
        v9 = (S_vv9 *)o->f28;
        v9->f04 |= 1;
        o->f28 = (Arg0_28 *)0;
        o->f30 = 0;
    }
}
