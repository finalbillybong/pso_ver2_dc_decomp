/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10c174
 * function: operation_8c10c174
 * language: c++
 * reference size: 796 bytes
 * compiled size: 796 bytes (+0.0%)
 * differing lines: 64 of 339 reference instruction lines
 * differing bytes: 56
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
typedef struct Block40 {
    int words[10];
} Block40;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
typedef struct S_x73904 S_x73904;
class Arg0_7c_94;
typedef struct Block_p0_34 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x18];
    char f20;
    char f21;
    char unknown22[0x6];
} Block_p0_34;
typedef struct Block_p0_e0 {
    float f00;
    float f04;
    float f08;
} Block_p0_e0;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    int f28;
    char unknown2c[0x4];
    short f30;
    char unknown32[0x2];
    Block_p0_34 f34;
    float f5c;
    char unknown60[0x18];
    int f78;
    Arg0_7c *f7c;
    int f80;
    int f84;
    int f88;
    float f8c;
    char f90;
    char f91;
    short f92;
    char unknown94[0x1c];
    float fb0;
    float fb4;
    float fb8;
    char unknownbc[0xc];
    int fc8;
    int fcc;
    int fd0;
    float fd4;
    float fd8;
    float fdc;
    Block_p0_e0 fe0;
};
struct S_x73904 {
    Block40 f00;
};
struct Arg0_7c {
    char unknown0[0x94];
    Arg0_7c_94 *f94;
};
class Arg0_7c_94 {
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
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73(int, int);
};
typedef struct Arg0_7c_94Data {
    char unknown0[0x3c];
    Vector3 f3c;
} Arg0_7c_94Data;
extern int g_8c30fb0c;
extern "C" char g_8c30be88[];
extern "C" void TObject_ctor_8c0330e4(void *, void *);
extern "C" int game_malloc_8c011ecc(int);
extern "C" void call_8c10eb1c(int, int);
extern "C" Object *operation_8c10c174(Object *o, int a1, int a2, int a3, int a4, int a5)
{
    Object **home = &o;
    int v1;
    int v6;
    int t1;
    int t2;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a5);
    o->dispatch = (void *)(void *)0x8c269b54;
    v1 = (int)0;
    while (0xb > v1) {
        *(short *)((char *)((char *)o + 0x60) + (v1 << 1)) = 0;
        v1 = (int)(v1 + 1);
    }
    o->tag = (int)(g_8c30fb0c);
    o->size = 0xec;
    o->f28 = 0x19;
    o->f20 = 0;
    o->f24 = 0;
    o->fb0 = 0.0f;
    o->fb4 = 0.0f;
    o->fb8 = 0.0f;
    o->fd4 = 0.0f;
    o->fd8 = 0.0f;
    o->fdc = 0.0f;
    o->fe0.f00 = 0.0f;
    o->fe0.f04 = 0.0f;
    o->fe0.f08 = 0.0f;
    o->fc8 = 0;
    o->fcc = 0;
    o->fd0 = 0;
    o->f30 = a3;
    o->f84 = 0;
    o->f80 = 0;
    o->f8c = 0.0f;
    o->f5c = 0.0f;
    o->f90 = 0;
    o->f92 = 0;
    o->f91 = 0;
    t1 = game_malloc_8c011ecc(0x108);
    if (t1 != 0) {
        call_8c10eb1c(t1, (int)((unsigned short)a1));
    }
    o->f78 = (int)t1;
    t2 = game_malloc_8c011ecc(0x108);
    if (t2 != 0) {
        call_8c10eb1c(t2, (int)((unsigned short)a2));
    }
    o->f7c = (Arg0_7c *)(int)t2;
    *(Block40 *)&o->f34 = *(Block40 *)&((S_x73904 *)(o->f30 * 0x28 + g_8c30be88))->f00;
    if (o->f7c == 0) {
    } else {
        if (o->f7c->f94 == 0) {
        } else {
            *(Vector3 *)&o->fe0 = *(Vector3 *)&((Arg0_7c_94Data *)o->f7c->f94)->f3c;
            v6 = (int)o->f34.f04;
            if (((v6 & 4)) != 0) {
                o->f7c->f94->v73(o->f34.f20, 0);
                o->f7c->f94->v73(o->f34.f20, 1);
            } else {
                if (((v6 & 8)) != 0) {
                    o->f7c->f94->v73(o->f34.f20, 3);
                    o->f7c->f94->v73(o->f34.f20, 4);
                } else {
                    if (((v6 & 0x10)) != 0) {
                        o->f7c->f94->v73(o->f34.f20, 6);
                        o->f7c->f94->v73(o->f34.f20, 8);
                    }
                }
            }
            o->f7c->f94->v73(o->f34.f21, 0xf);
            o->f7c->f94->v73(o->f34.f21, 0x10);
        }
    }
    o->f88 = a4;
    return o;
}
