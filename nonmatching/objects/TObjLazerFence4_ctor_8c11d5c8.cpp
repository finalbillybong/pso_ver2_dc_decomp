/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11d5c8
 * function: TObjLazerFence4_ctor_8c11d5c8
 * language: c++
 * reference size: 436 bytes
 * compiled size: 436 bytes (+0.0%)
 * differing lines: 84 of 168 reference instruction lines
 * differing bytes: 66
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TObjLazerFence4.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d8380 S_g8c4d8380;
typedef struct S_g8c4d8380_42c S_g8c4d8380_42c;
typedef struct S_g8c4d8380_430 S_g8c4d8380_430;
typedef struct Arg0_90 Arg0_90;
typedef struct Arg0_f4 Arg0_f4;
typedef struct S_vv12 S_vv12;
typedef struct S_vv12_4 S_vv12_4;
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
    virtual void v6(int);
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x14];
    int f34;
    char unknown38[0x34];
    float f6c;
    char unknown70[0x18];
    int f88;
    char unknown8c[0x4];
    Arg0_90 *f90;
    char unknown94[0x50];
    int fe4;
    float fe8;
    char unknownec[0x4];
    short ff0;
    short ff2;
    Arg0_f4 *ff4;
    int ff8;
    int ffc;
} ObjectData;
struct S_g8c4d8380 {
    char unknown0[0x42c];
    S_g8c4d8380_42c *f42c;
    S_g8c4d8380_430 *f430;
};
struct S_g8c4d8380_42c {
    char unknown0[0x8];
    int f08;
    char unknownc[0xc];
    int f18;
    char unknown1c[0xc];
    int f28;
    char unknown2c[0xc];
    int f38;
};
struct S_g8c4d8380_430 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x4];
    int f0c;
};
struct Arg0_f4 {
    char unknown0[0x2c];
    int f2c;
};
struct S_vv12 {
    char unknown0[0x4];
    S_vv12_4 *f04;
    char unknown8[0x28];
    int f30;
};
struct S_vv12_4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c3112d0;
extern S_g8c4d8380 *g_8c4d8380;
extern "C" char g_8c311118[];
extern "C" void operation_8c051eb8(void *);
extern "C" int call_8c18e8a0(void *, int);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void attach_and_insert_object(void *);
extern "C" void transform_actor_records(void *);
extern "C" Object *TObjLazerFence4_ctor_8c11d5c8(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v1;
    int v2;
    int v9;
    char *v11;
    S_vv12 *v12;
    int v10;
    int v16;
    int t1;
    (void)home;
    operation_8c051eb8((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26a1dc;
    ((ObjectData *)o)->tag = (int)(g_8c3112d0);
    ((ObjectData *)o)->size = 0x130;
    o->v6(a2);
    ((ObjectData *)o)->fe4 = 0;
    ((ObjectData *)o)->fe8 = 0.0f;
    ((ObjectData *)o)->ff2 = ((ObjectData *)o)->f88;
    {
        Object *base = o;
        v1 = (int)(int)((ObjectData *)base)->f6c;
        if (!((int)((ObjectData *)base)->f6c >= 0)) {
            v1 = (int)0;
        }
        v2 = (int)v1;
        if (v1 > 3) {
            v2 = (int)3;
        }
        ((ObjectData *)base)->ff0 = *(volatile unsigned short *)((char *)0x8c285db0 + (v2 << 1)) & 0xffff;
    }
    {
        Object *base = o;
        t1 = call_8c18e8a0((void *)(((ObjectData *)base)->f90), 2);
        if (t1 == 0) {
            ((ObjectData *)base)->ff4 = (Arg0_f4 *)g_8c4d8380->f42c->f08;
            ((ObjectData *)o)->ff8 = (int)(g_8c4d8380->f42c->f18);
            ((ObjectData *)o)->ffc = (int)(g_8c4d8380->f430->f04);
        } else {
            ((ObjectData *)base)->ff4 = (Arg0_f4 *)g_8c4d8380->f42c->f28;
            ((ObjectData *)o)->ff8 = (int)(g_8c4d8380->f42c->f38);
            ((ObjectData *)o)->ffc = (int)(g_8c4d8380->f430->f0c);
        }
        v9 = (int)((ObjectData *)o)->ff4->f2c;
        v10 = (int)0;
        v11 = (char *)v9;
        v12 = (S_vv12 *)v9;
        while (v11 != 0 && v12 != 0) {
            if (v12->f04 != 0) {
                *(int *)((char *)((char *)o + 0x100) + (v10 << 2)) = (int)(v12->f04->f04);
                v10 = (int)(v10 + 1);
            }
            if (v10 > 0xb) {
                goto L_8c11d6e4;
            }
            v16 = (int)v12->f30;
            v12 = (S_vv12 *)v16;
        }
L_8c11d6e4:;
        copy_actor_records((void *)o, (void *)(t1 * 0xdc + g_8c311118), 5);
    }
    ((ObjectData *)o)->f34 |= 0x40000000;
    attach_and_insert_object((void *)o);
    transform_actor_records((void *)o);
    return o;
}
