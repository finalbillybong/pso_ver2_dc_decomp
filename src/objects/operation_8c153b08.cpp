typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4da87c S_g8c4da87c;
typedef struct S_g8c4da87c_24 S_g8c4da87c_24;
typedef struct S_g8c4daa24 S_g8c4daa24;
typedef struct Arg0_490 Arg0_490;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv23 S_vv23;
typedef struct S_vv26 S_vv26;
typedef struct S_vv7 S_vv7;
class Object;
class Object {
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
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
};
typedef struct ObjectData {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x84];
    int fec;
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x9c];
    short f198;
    char unknown19a[0x196];
    short f330;
    char unknown332[0x26];
    short f358;
    char unknown35a[0x36];
    int f390;
    char unknown394[0x4];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    char unknown3a8[0xe8];
    Arg0_490 *f490;
} ObjectData;
struct S_g8c4daa24 {
    char unknown0[0x7];
    char f07;
};
struct Frame {
    Vector3 f00;
    int f0c;
    char unknown10[0x8];
};
struct S_vv7 {
    char unknown0[0x4];
    short f04;
};
struct S_g8c4da87c {
    char unknown0[0x24];
    S_g8c4da87c_24 *f24;
};
struct S_vv23 {
    char unknown0[0x4];
    short f04;
};
struct S_vv26 {
    char unknown0[0x4];
    short f04;
};
extern Vector3 g_8c316028;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4da87c *g_8c4da87c;
extern S_g8c4daa24 *g_8c4daa24;
extern "C" char g_8c31604c[];
extern "C" void call_8c1549b0(Object *);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" void call_8c01c5f0(Object *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void call_8c38ade4(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3be280(int, Frame *, void *);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void call_8c38ad10(void);
extern "C" int create_effect_769c(void *, int);
extern "C" int call_8c18e768(void *, int);
extern "C" int allocate_block(void *, unsigned int);
extern "C" void operation_8c0ee1d8(void *, int, int, int, int, short);
extern "C" void operation_8c153b08(Object *o)
{
    Frame frame;
    float v5;
    float v6;
    S_vv7 *v7;
    int v12;
    int v13;
    int v14;
    int v29;
    int v15;
    int v16;
    int v20;
    int v21;
    int v22;
    S_vv23 *v23;
    S_vv26 *v26;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    if (((((ObjectData *)o)->f3a4 & 0x40000)) != 0) {
        ((ObjectData *)o)->f390 = 0;
    }
    switch (((ObjectData *)o)->f398) {
    case 0:
        ((ObjectData *)o)->ff0 = 5;
        ((ObjectData *)o)->f398 = 1;
        call_8c1549b0(o);
        call_8c05fbf8(0x30017, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 1:
        call_8c01c5f0(o);
        t1 = check_range_8c01cf68((void *)o, 20.0f);
        if (t1 != 0) {
            call_8c05fbf8(0x3000b, (void *)(((char *)o + 0x3c)), 0, 0);
        }
        v5 = (float)((((ObjectData *)o)->ff8 - 18.0f) * 0.0833333358f);
        if (v5 > 0.0f) {
            v6 = (float)v5;
        } else {
            v6 = (float)0.0f;
        }
        v6 = 1.0f > v6 ? v6 : 1.0f;
        g_8c4daa24->f07 = (int)(v6 * 255.0f);
        if (38.0f > ((ObjectData *)o)->ff8) {
            return;
        }
        call_8c38ade4((void *)((void *)0x8c400500));
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c316028;
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3be280(0, (Frame *)((&frame)), (void *)(&(&frame)->f0c));
        call_8c3bdf60((void *)(&(&frame)->f0c), (void *)(((char *)o + 0x3c)));
        call_8c38ad10();
        t2 = create_effect_769c((void *)(&(&frame)->f0c), 0x1a1);
        ((ObjectData *)o)->f490 = (Arg0_490 *)(int)t2;
        ((ObjectData *)o)->f358 = 0x1e;
        ((ObjectData *)o)->f398 = 2;
        return;
    case 2:
        call_8c05fbf8(0x30019, (void *)(((char *)o + 0x3c)), 0, 0);
        if ((short)--*(short *)((char *)o + 0x358) > 0) {
            return;
        }
        if (((ObjectData *)o)->f490 != 0) {
            v7 = (S_vv7 *)((ObjectData *)o)->f490;
            v7->f04 |= 1;
            ((ObjectData *)o)->f490 = (Arg0_490 *)0;
        }
        t4 = call_8c18e768((void *)(g_8c4da87c->f24), 5);
        t3 = allocate_block(g_8c4d97e0, (unsigned int)0x50);
        if (t3 != 0) {
            operation_8c0ee1d8((void *)t3, (int)(((char *)o + 0x324)), -0xff0100, 0x1e, (int)(g_8c31604c + 0x10), (short)t4);
        }
        v12 = (int)(((ObjectData *)o)->f330 + t4);
        if (((ObjectData *)o)->f198 > v12) {
            v13 = (int)v12;
        } else {
            v13 = (int)((ObjectData *)o)->f198;
        }
        ((ObjectData *)o)->f330 = v13;
        for (v14 = 0; 4 > v14; v14++) {
            v21 = v14 << 1;
            v29 = *(short *)((char *)((char *)o + 0x4c8) + v21);
            if (v29 > 0) {
                v15 = v29 + t4;
                v20 = *(short *)((char *)((char *)o + 0x4d0) + v21);
                if (v20 > v15) {
                    v16 = v15;
                } else {
                    v16 = v20;
                }
                *(short *)((char *)((char *)o + 0x4c8) + v21) = v16;
            }
        }
        ((ObjectData *)o)->f358 = 0x3c;
        v21 = (int)(((ObjectData *)o)->f330 + 0xa);
        if (((ObjectData *)o)->f198 > v21) {
            v22 = (int)v21;
        } else {
            v22 = (int)((ObjectData *)o)->f198;
        }
        ((ObjectData *)o)->f330 = v22;
        t5 = create_effect_769c((void *)(((char *)o + 0x3c)), 0x1a2);
        ((ObjectData *)o)->f490 = (Arg0_490 *)(int)t5;
        ((ObjectData *)o)->f398 = 3;
        call_8c05fbf8(0x2000e, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 3:
        if ((short)--((ObjectData *)o)->f358 > 0) {
            return;
        }
        if (((ObjectData *)o)->f490 != 0) {
            v23 = (S_vv23 *)((ObjectData *)o)->f490;
            v23->f04 |= 1;
            ((ObjectData *)o)->f490 = (Arg0_490 *)0;
        }
        ((ObjectData *)o)->f398 = 4;
        call_8c05fbf8(0x30017, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 4:
        call_8c01c5f0(o);
        if (((ObjectData *)o)->fec == 4) {
            return;
        }
        o->v66();
        return;
    case -1:
        if (((ObjectData *)o)->f490 != 0) {
            v26 = (S_vv26 *)((ObjectData *)o)->f490;
            v26->f04 |= 1;
            ((ObjectData *)o)->f490 = (Arg0_490 *)0;
        }
        return;
    }
}
