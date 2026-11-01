typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbc20 S_g8c4dbc20;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_bc8 Arg0_28_bc8;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_390 Arg0_390;
typedef struct Arg0_39c Arg0_39c;
typedef struct Arg0_3a0 Arg0_3a0;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_40 Arg0_40;
typedef struct S_vv26 S_vv26;
typedef struct S_vv26_90 S_vv26_90;
typedef struct S_vv2_0 S_vv2_0;
typedef struct S_vv58_0 S_vv58_0;
class S_vv3;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    char unknown2c[0x10];
    int f3c;
    char unknown40[0x338];
    int f378;
    int f37c;
    char unknown380[0x4];
    int f384;
    char unknown388[0x8];
    Arg0_390 *f390;
    char unknown394[0x8];
    Arg0_39c *f39c;
    Arg0_3a0 *f3a0;
};
struct Arg0_28 {
    char unknown0[0xbc8];
    Arg0_28_bc8 *fbc8;
};
struct Frame {
    char unknown0[0x7c];
};
struct S_g8c4dbc20 {
    int f00;
};
struct Arg0_390 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_vv26 {
    char unknown0[0x90];
    S_vv26_90 *f90;
};
class S_vv3 {
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
    virtual int v31(int);
};
typedef struct S_vv3Data {

} S_vv3Data;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4dbc20 *g_8c4dbc20;
extern "C" int operation_8c16a718(void *, int);
extern "C" int operation_8c163d44(void *);
extern "C" int call_8c18e768(int, int);
extern "C" void operation_8c1cdc94(void *);
extern "C" void call_8c220b80(int, int);
extern "C" int operation_8c19fb24(int, int);
extern "C" void operation_8c1cd734(void *, int, void *, int);
extern "C" void operation_8c1cdc30(void *);
extern "C" void operation_8c1cd440(void *, int);
extern "C" void operation_8c19a044(void *, int);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TWindowHelpItem_ctor_8c1d5b24(void *);
extern "C" void operation_8c1d5eb8(void *, int);
extern "C" int operation_8c1cdc80(void *);
extern "C" void TWindowQuantity_ctor_8c1ca088(void *);
extern "C" int find_node_8c16a3c0(void *, int);
extern "C" int operation_8c169508(void *);
extern "C" void update_count_8c1ca1fc(void *, void *);
extern "C" void operation_8c106a6c(Object *o)
{
    Frame frame;
    int sh;
    int count;
    int i;
    int off;
    S_vv3 *p;
    int sel;
    int base390;
    int n378;
    S_vv26 *v26;
    char *v59;
    char *v60;
    int t6;
    int t8;
    int t9;
    int t11;
    count = operation_8c16a718((void *)(o->f28->fbc8), (int)(&frame));
    o->f378 = 0;
    off = 0x378;
    for (i = 0; i < count; i++) {
        sh = i << 2;
        p = *(S_vv3 **)((char *)&frame + sh);
        if (p != 0) {
            if (p->v31(*(int *)((char *)o + off) * 0x1c + (int)o + 0x30) != 0) {
                *(int *)((char *)((char *)o + 0x2c) + (*(int *)((char *)o + off) * 0x1c)) = *(int *)((char *)&frame + sh);
                *(int *)((char *)((char *)o + 0x40) + (*(int *)((char *)o + off) * 0x1c)) = call_8c18e768(operation_8c163d44(*(void **)((char *)&frame + sh)), 8);
                *(int *)((char *)((char *)o + 0x44) + (*(int *)((char *)o + off) * 0x1c)) = i;
                *(int *)((char *)o + off) += 1;
            }
        }
    }
    if (o->f378 == 0) {
        o->f24 = 7;
        if (o->f390 == 0) {
            return;
        }
        operation_8c1cdc94((void *)(o->f390));
        return;
    }
    call_8c220b80(0xb, 1);
    o->f24 = 1;
    if (o->f390 == 0) {
        o->f390 = (Arg0_390 *)operation_8c19fb24((int)(*(S_vv58_0 **)((char *)((char *)g_8c4dbc20->f00 + 0x0) + (o->f37c << 2))), (int)(o->f378));
        base390 = 0x390;
        n378 = 0x378;
        for (i = 0; i < *(int *)((char *)o + n378); i++) {
            operation_8c1cd734((void *)(*(Arg0_0 **)((char *)o + base390)), (int)(*(Arg0_2c **)((char *)((char *)o + 0x2c) + (i * 0x1c))), (void *)(*(Arg0_40 **)((char *)((char *)o + 0x40) + (i * 0x1c))), i);
        }
        operation_8c1cdc30((void *)(o->f390));
    } else {
        operation_8c1cdc94((void *)(o->f390));
        base390 = 0x390;
        n378 = 0x378;
        for (i = 0; i < *(int *)((char *)o + n378); i++) {
            operation_8c1cd734((void *)(*(Arg0_0 **)((char *)o + base390)), (int)(*(Arg0_2c **)((char *)((char *)o + 0x2c) + (i * 0x1c))), (void *)(*(Arg0_40 **)((char *)((char *)o + 0x40) + (i * 0x1c))), i);
        }
        sel = o->f378 + -1;
        if (o->f384 > sel) {
            o->f384 = sel;
        }
        operation_8c1cdc30((void *)(o->f390));
        operation_8c1cd440((void *)(o->f390), (int)(o->f384));
        v26 = (S_vv26 *)o->f390;
        o->f390->f80 = (o->f390->f80 & 0xffff) & -3;
        if (v26->f90 != 0) {
            operation_8c19a044((void *)(v26->f90), 1);
        }
    }
    if (o->f3a0 == 0) {
        t6 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xb8);
        if (t6 != 0) {
            TWindowHelpItem_ctor_8c1d5b24((void *)t6);
        }
        o->f3a0 = (Arg0_3a0 *)t6;
        operation_8c1d5eb8((void *)(o->f3a0), (int)(o->f3c));
    } else {
        v59 = (char *)o->f390;
        if (v59 != 0) {
            operation_8c1d5eb8((void *)(o->f3a0), (int)(*(Arg0_3c **)((char *)&o->f3c + (operation_8c1cdc80((void *)v59) * 0x1c))));
        }
    }
    if (o->f39c == 0) {
        t8 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x6c);
        if (t8 != 0) {
            TWindowQuantity_ctor_8c1ca088((void *)t8);
        }
        o->f39c = (Arg0_39c *)t8;
        t9 = find_node_8c16a3c0((void *)(o->f28->fbc8), (int)(((char *)o + 0x30)));
        if (t9 != 0) {
            update_count_8c1ca1fc((void *)(o->f39c), (void *)operation_8c169508((void *)t9));
        } else {
            update_count_8c1ca1fc((void *)(o->f39c), (void *)0);
        }
        return;
    }
    v60 = (char *)o->f390;
    if (v60 != 0) {
        t11 = find_node_8c16a3c0((void *)(o->f28->fbc8), (int)((int)o + operation_8c1cdc80((void *)v60) * 0x1c + 0x30));
        if (t11 != 0) {
            update_count_8c1ca1fc((void *)(o->f39c), (void *)operation_8c169508((void *)t11));
            return;
        }
        update_count_8c1ca1fc((void *)(o->f39c), (void *)0);
    }
}
