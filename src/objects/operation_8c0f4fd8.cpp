typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c03b55c S_c8c03b55c;
typedef struct Frame Frame;
typedef struct S_g8c467880 S_g8c467880;
typedef struct S_g8c470618 S_g8c470618;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_dc Arg0_dc;
class S_vv7;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_g8c470618 {
    char unknown0[0x20];
    int f20;
};
class S_vv7 {
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
    virtual void v25(Object *, int, Block8);
};
typedef struct S_vv7Data {
    char unknown0[0x20];
    short f20;
} S_vv7Data;
struct S_c8c03b55c {
    char unknown0[0xe8];
    int fe8;
};
extern S_g8c470618 *g_8c470618;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void clear_words_8c053d64(void);
extern "C" void operation_8c0521a0(void *);
extern "C" void operation_8c05228c(void *);
extern "C" int operation_8c0f33b8(int, int);
extern "C" int operation_8c05b228(short);
extern "C" int operation_8c05bbf8(void);
extern "C" S_c8c03b55c *operation_8c03b55c(void *, int);
extern "C" void operation_8c022538(void *, int);
extern "C" float object_random_fraction(void *);
extern "C" void operation_8c05b5b4(int, void *);
extern "C" int allocate_block(void *, unsigned int);
extern "C" void call_8c103d6c(int, Object *, Object *, S_vv7 *, float);
extern "C" int operation_8c0f4fd8(Object *o)
{
    Frame frame;
    int v1;
    int v3;
    S_vv7 *v7;
    int v2;
    int v6;
    int v8;
    int v27;
    int v4;
    int v5;
    int t1;
    int t2;
    int t3;
    S_c8c03b55c *t4;
    float t5;
    int t6;
    v1 = (int)0;
    clear_words_8c053d64();
    operation_8c0521a0((void *)o);
    operation_8c05228c((void *)o);
    v3 = (int)v1;
    if (((o->fdc->f18 & 0x300000)) != 0) {
        v2 = (int)0x464;
        v3 = (int)1;
        v4 = (int)0x308;
        v6 = (int)0;
        v5 = (int)0xbcc;
        while (0x10 > v6) {
            v7 = (S_vv7 *)*(S_g8c467880 **)((char *)0x8c467880 + (v6 << 2));
            if (v7 == 0) {
                goto L_8c0f50e6;
            }
            t1 = operation_8c0f33b8((int)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v2))), (int)v7);
            if (t1 != 0) {
                (&frame)->f00.f00 = 0;
                (&frame)->f00.f04 = (float)g_8c470618->f20;
                v7->v25(o, 0, *(Block8 *)&(&frame)->f00);
                t2 = operation_8c05b228(((S_vv7Data *)v7)->f20);
                if (t2 != 0) {
                    t3 = operation_8c05bbf8();
                    if (t3 != 0) {
                        v8 = (int)(*(short *)((char *)((char *)v7 + 0x0) + (v4)) == 1);
                        if (v8 == 0) {
                            goto L_8c0f50c0;
                        }
                        t4 = operation_8c03b55c((void *)((int)v7 + v5), 6);
                        if (t4 == 0) {
                            goto L_8c0f50c0;
                        }
                        operation_8c022538((void *)v7, (int)(t4->fe8));
                    } else {
                        t5 = object_random_fraction((void *)o);
                        if (!(t5 > 0.3333f)) {
                            operation_8c05b5b4((int)o, (void *)v7);
                        }
                    }
                }
L_8c0f50c0:;
                t6 = allocate_block(g_8c4d97e0, (unsigned int)0x38);
                if (t6 != 0) {
                    call_8c103d6c(t6, o, o, v7, 12.0f);
                }
            }
            v6 = (int)(v6 + 1);
        }
        v27 = (int)v6;
    }
    v6 = (int)v27;
L_8c0f50e6:;
    return (int)(v3);
}
