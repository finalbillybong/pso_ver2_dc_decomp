/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24cb78
 * function: handle_6x86_hit_destructible_object_8c24cb78
 * language: c++
 * reference size: 512 bytes
 * compiled size: 512 bytes (+0.0%)
 * differing lines: 118 of 215 reference instruction lines
 * differing bytes: 123
 * provenance: generator draft (mode retflip2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block76 {
    int words[19];
} Block76;
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct Frame Frame;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct S_vv16 S_vv16;
typedef struct S_vv28 S_vv28;
typedef struct S_vv32_0 S_vv32_0;
typedef struct S_x84928 S_x84928;
class S_c8c053d84;
typedef struct Block_frame_8 {
    char unknown0[0xc];
    Vector3 f0c;
    char unknown18[0x20];
    float f38;
    char unknown3c[0x4];
    int f40;
    int f44;
    char unknown48[0x4];
} Block_frame_8;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    char unknown4[0x8];
    unsigned short f0c;
    unsigned short f0e;
};
class S_c8c053d84 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(void *, int);
};
typedef struct S_c8c053d84Data {
    int f00;
    char unknown4[0x3c];
    float f40;
    char unknown44[0x2c6];
    short f30a;
    char unknown30c[0x4c];
    int f358;
} S_c8c053d84Data;
struct Frame {
    char f00;
    char unknown1[0x3];
    short f04;
    char unknown6[0x2];
    Block_frame_8 f08;
};
struct S_x84928 {
    Vector3 f00;
};
struct S_vv16 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_vv28 {
    char f00;
};
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" void operation_8c05428c(void *, int, int);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TObjChip_ctor_8c087d8c(void *, void *, void *);
extern "C" void create_effect_777c(void *, int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void handle_6x86_hit_destructible_object_8c24cb78(Object *o)
{
    Frame frame;
    int v1;
    unsigned short v2;
    int v9;
    S_vv16 *v16;
    int v32;
    S_c8c053d84 *t1;
    int v10;
    int v27;
    S_vv28 *v28;
    int v6;
    int v7;
    int t2;
    if (o == 0) {
        return;
    }
    {
        Object *base = o;
        if (base->f02 == 0xffff || !((unsigned int)base->f02 >= (unsigned int)0x4000)) {
            return;
        }
        t1 = lookup_object_by_id((unsigned short)(base->f02));
        if (t1 == 0) {
            v16 = (S_vv16 *)base;
        } else {
            v1 = (int)((int)(((S_c8c053d84Data *)t1)->f00) == *(int *)0x8c33eb90);
            if (v1 == 0) {
                return;
            }
            v2 = (unsigned short)base->f0c;
            if (v2 != 0) {
                if (v2 == 1) {
                    goto L_8c24cc04;
                }
                v16 = (S_vv16 *)base;
            } else {
                if (((S_c8c053d84Data *)t1)->f30a != 0) {
                    v16 = (S_vv16 *)base;
                    if (((S_c8c053d84Data *)t1)->f30a == 1) {
                        goto L_8c24ccd0;
                    }
                    ((S_c8c053d84Data *)t1)->f30a = 0;
                }
                v16 = (S_vv16 *)base;
                if (((S_c8c053d84Data *)t1)->f358 > base->f0e) {
                    ((S_c8c053d84Data *)t1)->f358 = base->f0e;
                    v16 = (S_vv16 *)base;
                    goto L_8c24ccd0;
L_8c24cc04:;
                    v16 = (S_vv16 *)base;
                    if (((S_c8c053d84Data *)t1)->f30a != 1) {
                        ((S_c8c053d84Data *)t1)->f30a = 1;
                        operation_8c05428c((void *)t1, 0, 1);
                        v6 = (int)0x324;
                        v9 = (int)7;
                        v7 = (int)0x42c;
                        while (0xf >= v9) {
                            *(Block76 *)&(&frame)->f08 = *(Block76 *)&*(Block76 *)0x8c33eb94;
                            *(Vector3 *)&(&frame)->f08.f0c = *(Vector3 *)&((S_x84928 *)((int)t1 + v6))->f00;
                            v10 = (int)(v9 << 4);
                            (&frame)->f08.f38 = ((S_c8c053d84Data *)t1)->f40;
                            v32 = (int)*(int *)0x8c510fe0;
                            (&frame)->f08.f40 = (int)(*(int *)((char *)((char *)*(S_vv32_0 **)((char *)((char *)v32 + 0x0) + (v7)) + 0x8) + (v10)));
                            (&frame)->f08.f44 = (int)(*(int *)((char *)((char *)*(S_vv32_0 **)((char *)((char *)v32 + 0x0) + (v7)) + 0xc) + (v10)));
                            t2 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x78);
                            if (t2 != 0) {
                                TObjChip_ctor_8c087d8c((void *)t2, (void *)(*(S_g8c44be98 **)0x8c44be98), (void *)(&(&frame)->f08));
                            }
                            v9 = (int)(v9 + 1);
                        }
                        create_effect_777c((void *)(((char *)t1 + 0x3c)), 0x45);
                        create_effect_777c((void *)(((char *)t1 + 0x3c)), 0x46);
                        play_se_8c05fbf8(0x40005, (void *)(((char *)t1 + 0x3c)), 0, 0);
                        v16 = (S_vv16 *)v9;
                    }
                }
            }
L_8c24ccd0:;
            (&frame)->f04 = ((S_c8c053d84Data *)t1)->f30a;
            t1->v5(&(&frame)->f04, 0);
            return;
        }
    }
    v27 = (int)*(int *)0x8c46ed0c;
    v28 = (S_vv28 *)v27;
    v28 = (S_vv28 *)((int)v28 + (v16->f08 << 2));
    *(SBlock4 *)&(&frame)->f00 = *(SBlock4 *)&v28->f00;
    *(short *)&(&frame)->f00 = v16->f04;
    if (!((short)v16->f08 > 0xb9f)) {
        *(SBlock4 *)&*(char *)((char *)((char *)v27 + 0x0) + ((short)v16->f08 << 2)) = *(SBlock4 *)&(&frame)->f00;
    }
}
