/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c111d1c
 * function: operation_8c111d1c
 * language: c++
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 2 of 96 reference instruction lines
 * differing bytes: 2
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c467880 S_g8c467880;
typedef struct S_g8c4d7bac S_g8c4d7bac;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
class S_vv2;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
} Block_frame_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xd6];
    Arg0_dc *fdc;
    char unknowne0[0x30];
    unsigned short f110;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x8];
    int f18;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_g8c4d7bac {
    char unknown0[0x24];
    int f24;
};
class S_vv2 {
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
    virtual void v25(int, int, Block8);
};
typedef struct S_vv2Data {

} S_vv2Data;
extern "C" int lookup_object_by_id(unsigned short);
extern "C" void clear_words_8c053d64(void);
extern "C" void operation_8c0521a0(Object *);
extern "C" void operation_8c05228c(Object *);
extern "C" void create_effect_777c(void *, int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c111d1c(Object *o)
{
    Frame frame;
    int t1;
    S_vv2 *v2;
    int v1;
    int v6;
    t1 = lookup_object_by_id((unsigned short)(o->f110));
    o->fdc->f0c = 5.0f;
    clear_words_8c053d64();
    operation_8c0521a0(o);
    operation_8c05228c(o);
    if (((o->fdc->f18 & 0x300000)) != 0) {
        v1 = (int)0;
        while (0x10 > v1) {
            v2 = (S_vv2 *)*(S_g8c467880 **)((char *)0x8c467880 + (v1 << 2));
            if ((int)v2 != t1) {
                if (v2 == 0) {
                    goto L_8c111db2;
                }
                *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c30fe50;
                (&frame)->f00.f04 = (float)(*(S_g8c4d7bac **)0x8c4d7bac)->f24;
                v2->v25(t1, 0, *(Block8 *)&(&frame)->f00);
            }
            v1 = (int)(v1 + 1);
        }
        v6 = (int)v1;
    }
    v1 = (int)v6;
L_8c111db2:;
    create_effect_777c((void *)(((char *)o + 0x3c)), 0xfb);
    play_se_8c05fbf8(0x3000e, (void *)(((char *)o + 0x3c)), 0, 0);
    o->f04 |= 1;
}
