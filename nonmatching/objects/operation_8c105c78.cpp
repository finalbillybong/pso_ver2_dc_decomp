/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c105c78
 * function: operation_8c105c78
 * language: c++
 * reference size: 616 bytes
 * compiled size: 616 bytes (+0.0%)
 * differing lines: 8 of 272 reference instruction lines
 * differing bytes: 4
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
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct S_c8c03b55c S_c8c03b55c;
typedef struct S_c8c194d60 S_c8c194d60;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct S_x29424 S_x29424;
typedef struct S_x72080 S_x72080;
typedef struct S_x92544 S_x92544;
class S_c8c0744dc;
typedef struct Block_frame_14 {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x4];
} Block_frame_14;
typedef struct Block_frame_0 {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    char unknown2c[0x4];
    Arg0_30 *f30;
    Arg0_34 *f34;
};
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_14 f14;
    Block_frame_0 f28;
};
struct S_x72080 {
    Block20 f00;
};
struct S_c8c03b55c {
    char unknown0[0xe8];
    int fe8;
};
struct S_x92544 {
    Block20 f00;
};
struct S_x29424 {
    Block20 f00;
};
class S_c8c0744dc {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual int v30();
};
typedef struct S_c8c0744dcData {

} S_c8c0744dcData;
extern S_g8c418248 *g_8c418248;
extern "C" int operation_8c1571f4(void *);
extern "C" int operation_8c1cdc80(void *);
extern "C" int operation_194d60(unsigned short);
extern "C" void operation_8c1c74a8(void *, int);
extern "C" void operation_8c023a44(void *, void *);
extern "C" S_c8c0744dc *find_record_8c0744dc(int);
extern "C" S_c8c03b55c *operation_8c03b55c(int, int);
extern "C" void operation_8c022538(void *, int);
extern "C" void operation_8c02231c(void *, int, int);
extern "C" void operation_8c106038(Object *, int);
extern "C" int operation_8c1ccb64(void *);
extern "C" void operation_8c18afac(int);
extern "C" void operation_8c1cdcdc(void *);
extern "C" void request_resource_release(void *);
static inline void apply_8c105c78(Object *o)
{
    Block_frame_0 rec;
    char *v;
    int idx;
    int off;
    int p;
    v = (char *)o->f34;
    if (v != 0) {
        idx = operation_8c1cdc80((void *)v);
        off = idx * 0x14;
        *(Block20 *)&rec = *(Block20 *)((char *)(int *)((char *)o + 0x50) + off);
        rec.f0c = operation_194d60((unsigned short)g_8c418248);
        operation_8c1c74a8((void *)&rec, 1);
        operation_8c023a44((void *)(o->f28), (void *)&rec);
        p = (int)o + off + 0x50;
        operation_8c106038(o, p);
        if (operation_8c1ccb64((void *)p) != 0) {
            operation_8c18afac(idx);
        }
        operation_8c1cdcdc((void *)(o->f34));
    }
}
static inline void apply_first_8c105c78(Object *o)
{
    Block_frame_0 rec;
    char *v;
    int idx;
    int off;
    int p;
    S_c8c0744dc *r;
    S_c8c03b55c *q;
    v = (char *)o->f34;
    if (v != 0) {
        idx = operation_8c1cdc80((void *)v);
        off = idx * 0x14;
        *(Block20 *)&rec = *(Block20 *)((char *)(int *)((char *)o + 0x50) + off);
        rec.f0c = operation_194d60((unsigned short)g_8c418248);
        operation_8c1c74a8((void *)&rec, 1);
        operation_8c023a44((void *)(o->f28), (void *)&rec);
        r = find_record_8c0744dc(rec.f0c);
        if (r != 0) {
            q = operation_8c03b55c((int)((int)o->f28 + 0xbcc), (int)((short)r->v30()));
            if (q != 0) {
                operation_8c022538((void *)(o->f28), (int)(q->fe8));
            }
        }
        operation_8c02231c((void *)(o->f28), rec.f0c, 0);
        p = (int)o + off + 0x50;
        operation_8c106038(o, p);
        if (operation_8c1ccb64((void *)p) != 0) {
            operation_8c18afac(idx);
        }
        operation_8c1cdcdc((void *)(o->f34));
    }
}
extern "C" void operation_8c105c78(Object *o)
{
    int t1;
    if (o->f30 == 0) {
    } else {
        if (((o->f30->f80 & 0xffff & 2)) == 0) {
        } else {
            t1 = operation_8c1571f4((void *)(o->f30));
            if (t1 == 0) {
                apply_first_8c105c78(o);
                request_resource_release((void *)(o->f30));
                o->f30 = (Arg0_30 *)0;
                o->f24 = 0;
            }
            if (t1 == 1) {
                apply_8c105c78(o);
                request_resource_release((void *)(o->f30));
                o->f30 = (Arg0_30 *)0;
                o->f24 = 0;
            }
        }
    }
    if (o->f30 != 0 && ((o->f30->f80 & 0xffff & 4)) != 0) {
        apply_8c105c78(o);
        request_resource_release((void *)(o->f30));
        o->f30 = (Arg0_30 *)0;
        o->f24 = 0;
    }
}
