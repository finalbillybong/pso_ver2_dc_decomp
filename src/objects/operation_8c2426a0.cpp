typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_40 Arg0_40;
typedef struct Arg0_40_18 Arg0_40_18;
typedef struct Arg0_4c Arg0_4c;
typedef struct S_vv11_0 S_vv11_0;
typedef struct S_x31440 S_x31440;
class S_c8c021ef8;
struct Object {
    char unknown0[0x24];
    int f24;
    int f28;
    char unknown2c[0x4];
    int f30;
    char unknown34[0xc];
    Arg0_40 *f40;
    int f44;
    char unknown48[0x4];
    Arg0_4c *f4c;
};
struct Frame {
    Block8 f00;
    Block8 f08;
    Block8 f10;
    int f18;
    char unknown1c[0xc];
    int f28;
    char unknown2c[0xc];
    int f38;
    char unknown3c[0xc];
    int f48;
    char unknown4c[0xc];
};
struct S_x31440 {
    int f00;
};
struct Arg0_40 {
    char unknown0[0x18];
    Arg0_40_18 *f18;
};
class S_c8c021ef8 {
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
    virtual int v13();
};
typedef struct S_c8c021ef8Data {

} S_c8c021ef8Data;
extern Block8 g_8c33aad8;
extern Block8 g_8c33aae0;
extern Block8 g_8c33aae8;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c510c90;
extern "C" int call_8c1196d4(void *, void *, int);
extern "C" void operation_8c119764(int, int, int);
extern "C" int operation_239288(void *);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void call_8c12b154(int, int, int);
extern "C" void call_8c12b048(void *, void *, ...);
extern "C" int operation_8c244bfc(Object *);
extern "C" void request_resource_release(void *);
extern "C" void operation_8c2446a4(Object *);
extern "C" int operation_8c2446d0(Object *);
extern "C" int allocate_block(void *, unsigned int);
extern "C" void construct_effect_controller(void *, void *, unsigned char);
extern "C" void operation_8c244688(void);
extern "C" void operation_8c2426a0(Object *o)
{
    Frame frame;
    int v7;
    int v11;
    int v10;
    int v8;
    int t1;
    int t2;
    S_c8c021ef8 *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    switch (o->f24) {
    case 0:
        if (o->f4c == 0) {
            *(Block8 *)&(&frame)->f10 = *(Block8 *)&g_8c33aad8;
            *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c33aae0;
            t1 = call_8c1196d4((void *)(&(&frame)->f10), (void *)(&(&frame)->f08), 1);
            o->f4c = (Arg0_4c *)(int)t1;
        }
        g_8c510c90 = 0;
        o->f24 = 1;
        return;
    case 1:
        operation_8c119764((int)(o->f4c), (int)(((char *)o + 0x68)), 0x80);
        o->f30 = 0xf0;
        o->f24 = 2;
        return;
    case 2:
        if (--o->f30 > 0) {
            return;
        }
        t2 = operation_239288((void *)((void *)0x8c41ce5c));
        if ((unsigned char)t2 == 1) {
            o->f24 = 3;
            return;
        }
        o->f24 = 5;
        return;
    case 3:
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c33aae8;
        v7 = (int)0;
        while (4 > v7) {
            *(char *)((char *)&(&frame)->f18 + (v7 << 4)) = 0;
            v7 = (int)(v7 + 1);
        }
        v8 = (int)0;
        while (4 > v8) {
            t3 = lookup_low_id(v8);
            if (t3 != 0) {
                v10 = (int)(*(int *)((char *)0x8c510d00 + (v8 << 2)) != 1);
                v11 = (int)(v10 << 2);
                if (2 > *(int *)((char *)((char *)v11 + 0x0) + ((int)((&frame))))) {
                    t4 = t3->v13();
                    call_8c12b154((int)((((v10 << 1) + *(int *)((char *)&frame + v11)) << 4) + (char *)&(&frame)->f18), t4, 0x10);
                    ((S_x31440 *)(v11 + (int)(&frame)))->f00 += 1;
                }
            }
            v8 = (int)(v8 + 1);
        }
        call_8c12b048((void *)((void *)0x8c510d10), (void *)(o->f40->f18), &(&frame)->f18, &(&frame)->f28, &(&frame)->f38, &(&frame)->f48);
        operation_8c119764((int)(o->f4c), (int)((void *)0x8c510d10), 0x80);
        o->f30 = 0xf0;
        o->f24 = 4;
        return;
    case 4:
        if (--o->f30 > 0) {
            return;
        }
        o->f24 = 5;
        return;
    case 5:
        o->f44 = 0x384;
        o->f24 = 6;
    case 6:
        o->f44 -= 1;
        t5 = operation_8c244bfc(o);
        if (t5 == 0) {
            if (o->f44 > 0) {
                return;
            }
        }
        request_resource_release((void *)(o->f4c));
        o->f4c = (Arg0_4c *)0;
        operation_8c2446a4(o);
        o->f44 = 0x1c2;
        o->f24 = 7;
        return;
    case 7:
        o->f44 -= 1;
        t6 = operation_8c2446d0(o);
        if (t6 == 0) {
            if (o->f44 > 0) {
                return;
            }
        }
        t7 = allocate_block(g_8c4d97e0, (unsigned int)0x28);
        if (t7 != 0) {
            construct_effect_controller((void *)t7, (void *)o, (unsigned char)0);
        }
        o->f30 = 0x96;
        o->f24 = 8;
        return;
    case 8:
        if (--o->f30 > 0) {
            return;
        }
        o->f28 = 2;
        return;
    case -1:
        if (o->f4c != 0) {
            request_resource_release((void *)(o->f4c));
            o->f4c = (Arg0_4c *)0;
        }
        operation_8c244688();
        return;
    }
}
