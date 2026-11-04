/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e1784
 * function: operation_8c1e1784
 * language: c
 * reference size: 312 bytes
 * compiled size: 316 bytes (+1.3%)
 * differing lines: 18 of 130 reference instruction lines
 * differing bytes: 269
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_a4 Arg0_a4;
typedef struct S_vv11 S_vv11;
typedef struct S_vv13 S_vv13;
typedef struct S_vv15 S_vv15;
typedef struct S_vv8 S_vv8;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    char unknown6a[0x22];
    int f8c;
    char unknown90[0x14];
    Arg0_a4 *fa4;
    int fa8;
    char unknownac[0x4];
    int fb0;
    int fb4;
    int fb8;
};
struct S_vv8 {
    char f00;
};
struct S_vv11 {
    char f00;
};
struct S_vv9 {
    short f00;
};
struct S_vv13 {
    unsigned short f00;
};
struct S_vv15 {
    char f00;
};
struct Frame {
    char unknown0[0x45];
    char f45;
    char unknown46[0x46];
};
extern void call_8c1e15e8(Object *, int);
extern int call_8c1e209c(Object *, void *);
extern void strncpy_8c12b154(Frame *, void *, int);
extern int call_8c1f53c8(void *, Frame *, void *);
extern void call_8c1e1e2c(Object *, Frame *);
extern int operation_8c1e1b64(void *, int, int);
extern void call_8c1e1bb8(Object *, Frame *, void *);
void operation_8c1e1784(Object *o)
{
    S_vv13 *v13;
    int t2;
    int v7;
    int pm4;
    S_vv8 *v8;
    int t3;
    S_vv15 *v15;
    int v10;
    Frame frame;
    S_vv11 *v11;
    S_vv9 *v9;
    int v6;
    char pm1;
    int pm5;
    if (!(0 != ((o->f68 & 0x20)))) {
        call_8c1e15e8(o, 1);
    }
    v6 = (int)o->f8c;
    v7 = (int)o->fa4;
    v13 = (S_vv13 *)v6;
    v15 = (S_vv15 *)v7;
    goto L_8c1e17c8;
    v9 = (S_vv9 *)v6;
    v8 = (S_vv8 *)v7;
    pm1 = 0;
    v10 = pm1;
L_8c1e17ac:
    ;
    v11 = (S_vv11 *)v8;
    v8->f00 = v10 >> 8;
    if (0 != v8->f00) {
        v7 = 1 + (int)v8;
        v11 = (S_vv11 *)(v7);
    }
    pm5 = 2;
    v13 = (S_vv13 *)((int)v9 + pm5);
    v15 = (S_vv15 *)(1 + (int)v11);
    v11->f00 = (unsigned char)v9->f00;
L_8c1e17c8:
    ;
    if (!((int)v13->f00 == 0)) {
        v9 = (S_vv9 *)v13;
        v10 = (int)v13->f00;
        v8 = (S_vv8 *)v15;
        goto L_8c1e17ac;
    }
    v15->f00 = 0;
    o->fa8 = (int)(o->fa4);
    pm4 = call_8c1e209c(o, (void *)(o->fa4));
    if (!(pm4 == 0)) {
        o->f68 = 0x10 | o->f68;
        o->fb4 = 1;
        o->fb0 = 1;
        strncpy_8c12b154((Frame *)((&frame)), (void *)(o->fa4), 0x45);
        (&frame)->f45 = 0;
    } else {
        o->f68 = o->f68 & -0x11;
        t2 = call_8c1f53c8((void *)(o->fa4), (Frame *)((&frame)), (void *)(&(&frame)->f45));
        o->fb4 = (int)(t2);
        o->fb0 = 1;
        call_8c1e1e2c(o, (Frame *)(((&frame))));
    }
    o->fb8 = 0x50;
    t3 = operation_8c1e1b64((void *)o, (int)(&frame), (int)(&(&frame)->f45));
    if (t3 != 0) {
        call_8c1e1bb8(o, ((&frame)), (void *)(&(&frame)->f45));
        o->f68 |= 4;
    }
}
