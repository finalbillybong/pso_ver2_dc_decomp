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
typedef struct S_x19024 S_x19024;
typedef struct S_x61904 S_x61904;
typedef struct S_x82032 S_x82032;
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
struct Arg0_34 {
    char unknown0[0x80];
    unsigned short f80;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_14 f14;
    Block_frame_0 f28;
};
struct S_x61904 {
    Block20 f00;
};
struct S_c8c03b55c {
    char unknown0[0xe8];
    int fe8;
};
struct S_x82032 {
    Block20 f00;
};
struct S_x19024 {
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
extern "C" void operation_8c023a44(void *, void *);
extern "C" S_c8c0744dc *find_record_8c0744dc(int);
extern "C" S_c8c03b55c *call_8c03b55c(int, int);
extern "C" void operation_8c022538(void *, int);
extern "C" void operation_8c02231c(void *, int, int);
extern "C" void operation_8c189990(Object *, int);
extern "C" int operation_8c1ccb64(void *);
extern "C" void operation_8c18ef00(int);
extern "C" void operation_8c1cdcdc(void *);
extern "C" void request_resource_release(void *);
static inline void apply_8c1895f4(Object *o)
{
    Block_frame_0 rec;
    char *v;
    int idx;
    int off;
    int p;
    v = (char *)o->f30;
    if (v != 0) {
        idx = operation_8c1cdc80((void *)v);
        off = idx * 0x14;
        *(Block20 *)&rec = *(Block20 *)((char *)(int *)((char *)o + 0x4c) + off);
        rec.f0c = operation_194d60((unsigned short)g_8c418248);
        operation_8c023a44((void *)(o->f28), (void *)&rec);
        p = (int)o + off + 0x4c;
        operation_8c189990(o, p);
        if (operation_8c1ccb64((void *)p) != 0) {
            operation_8c18ef00(idx);
        }
        operation_8c1cdcdc((void *)(o->f30));
    }
}
extern "C" void operation_8c1895f4(Object *o)
{
    Block_frame_0 rec1;
    char *v74;
    int v5;
    char *v75;
    int v78;
    int v15;
    char *v76;
    int v79;
    int v29;
    int t1;
    int t2;
    int t3;
    int v77;
    S_c8c0744dc *t4;
    int t5;
    S_c8c03b55c *t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    if (o->f34 == 0) {
    } else {
        if (((o->f34->f80 & 0xffff & 2)) == 0) {
        } else {
            t1 = operation_8c1571f4((void *)(o->f34));
            if (t1 == 0) {
                v74 = (char *)o->f30;
                if (v74 != 0) {
                    t3 = operation_8c1cdc80((void *)v74);
                    v77 = (int)(t3 * 0x14);
                    *(Block20 *)&rec1 = *(Block20 *)&((S_x61904 *)((char *)(int *)((char *)o + 0x4c) + v77))->f00;
                    t2 = operation_194d60((unsigned short)g_8c418248);
                    rec1.f0c = (int)t2;
                    operation_8c023a44((void *)(o->f28), (void *)&rec1);
                    t4 = find_record_8c0744dc(rec1.f0c);
                    if (t4 != 0) {
                        t5 = t4->v30();
                        t6 = call_8c03b55c((int)((int)o->f28 + 0xbcc), (int)((short)t5));
                        if (t6 != 0) {
                            operation_8c022538((void *)(o->f28), (int)(t6->fe8));
                        }
                    }
                    operation_8c02231c((void *)(o->f28), rec1.f0c, 0);
                    v5 = (int)((int)o + v77 + 0x4c);
                    operation_8c189990(o, v5);
                    t7 = operation_8c1ccb64((void *)v5);
                    if (t7 != 0) {
                        operation_8c18ef00(t3);
                    }
                    operation_8c1cdcdc((void *)(o->f30));
                }
                request_resource_release((void *)(o->f34));
                o->f34 = (Arg0_34 *)0;
                o->f24 = 0;
            }
            if (t1 == 1) {
                apply_8c1895f4(o);
                request_resource_release((void *)(o->f34));
                o->f34 = (Arg0_34 *)0;
                o->f24 = 0;
            }
        }
    }
    if (o->f34 != 0 && ((o->f34->f80 & 0xffff & 4)) != 0) {
        apply_8c1895f4(o);
        request_resource_release((void *)(o->f34));
        o->f34 = (Arg0_34 *)0;
        o->f24 = 0;
    }
}
