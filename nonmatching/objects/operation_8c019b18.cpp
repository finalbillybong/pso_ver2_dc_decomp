/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c019b18
 * function: operation_8c019b18
 * language: c++
 * reference size: 588 bytes
 * compiled size: 588 bytes (+0.0%)
 * differing lines: 126 of 230 reference instruction lines
 * differing bytes: 230
 * provenance: generator draft (mode extern)
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
typedef struct Block1084 {
    int words[271];
} Block1084;
typedef struct Frame Frame;
typedef struct S_g8c4627c0 S_g8c4627c0;
typedef struct S_g8c4627c0_14 S_g8c4627c0_14;
typedef struct Object Object;
typedef struct S_vv13 S_vv13;
typedef struct S_vv1_c S_vv1_c;
typedef struct S_x49040 S_x49040;
class S_c8c021ef8;
class S_vv1;
struct Frame {
    char unknown0[0x80];
};
struct S_g8c4627c0 {
    char unknown0[0x14];
    S_g8c4627c0_14 *f14;
};
class S_vv1 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_vv1Data {
    char unknown0[0xc];
    S_vv1_c *f0c;
    char unknown10[0x10];
    unsigned char f20;
    unsigned char f21;
    unsigned char f22;
    unsigned char f23;
} S_vv1Data;
struct S_vv13 {
    Block1084 f00;
};
struct S_x49040 {
    Block1084 f00;
};
class S_c8c021ef8 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_c8c021ef8Data {

} S_c8c021ef8Data;
extern int g_8c418248;
extern int g_8c418258;
extern int g_8c418a04;
extern int g_8c418a08;
extern short g_8c41bcdc;
extern short g_8c41bcde;
extern int g_8c41bce0;
extern int g_8c41bce8;
extern int g_8c41bcfc;
extern int g_8c41bd00;
extern int g_8c41bd08;
extern int g_8c41cd20;
extern S_g8c4627c0 *g_8c4627c0;
extern "C" char g_8c2e3014[];
extern "C" char g_8c418a0c[];
extern "C" void operation_8c017ab0(void);
extern "C" void sprintf_8c12b048(Frame *, void *, ...);
extern "C" void operation_8c011efc(Frame *);
extern "C" void strncpy_8c12b154(void *, int, int);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int get_current_area_8c032b10(void);
extern "C" void set_global_8c01c1f4(void);
typedef struct StkArg {
    int f00;
    int f04;
} StkArg;
extern "C" void operation_8c019b18(Object *o, int a1, int a2, int a3, register int a4, StkArg sp)
{
    Frame frame;
    int v6;
    int v4;
    S_vv1 *v1;
    int v5;
    int v7;
    int v12;
    S_vv13 *v13;
    S_c8c021ef8 *t1;
    int t2;
    operation_8c017ab0();
    sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0x11f)), a2);
    operation_8c011efc((Frame *)((&frame)));
    g_8c418248 = a2;
    g_8c41bcfc = (int)(sp.f00);
    g_8c41bce8 = g_8c418a04 = 1;
    g_8c41bd00 = a4;
    g_8c41bd08 = (int)(sp.f04);
    g_8c41cd20 = 0;
    g_8c418a08 = 0;
    g_8c418258 = a3;
    v1 = (S_vv1 *)g_8c4627c0->f14;
    while (v1 != 0) {
        if (v1 != 0) {
            v1->v0(1);
        }
        sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0x12e)), ((S_vv1Data *)v1)->f20, ((S_vv1Data *)v1)->f21, ((S_vv1Data *)v1)->f22, ((S_vv1Data *)v1)->f23);
        operation_8c011efc((Frame *)((&frame)));
        v1 = (S_vv1 *)((S_vv1Data *)v1)->f0c;
    }
    v4 = (int)0;
    while (0xc > v4) {
        *(char *)((char *)0x8c41c667 + (v4 << 4)) = 0;
        v4 = (int)(v4 + 1);
    }
    v6 = (int)0;
    v5 = (int)0x43c;
    while (a1 > v6) {
        strncpy_8c12b154((void *)(&*(int *)((char *)0x8c41c667 + (*(int *)((char *)((char *)o + 0xc) + (v6 * v5)) << 4))), (int)((int)o + v6 * v5 + 0x10), 0x10);
        v6 = (int)(v6 + 1);
    }
    v7 = (int)0;
    while (0xc > v7) {
        t1 = lookup_low_id(v7);
        if (t1 != 0) {
            if (t1 != 0) {
                t1->v0(1);
            }
            sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0xff)), v7);
            operation_8c011efc((Frame *)((&frame)));
        }
        v7 = (int)(v7 + 1);
    }
    g_8c41bce0 = 2;
    g_8c41bcdc = a2;
    v12 = (int)g_8c41bcde;
    while ((g_8c41bcde + a1) > v12) {
        v13 = (S_vv13 *)(v12 * 0x43c + g_8c418a0c);
        *(Block1084 *)&v13->f00 = *(Block1084 *)&((S_x49040 *)((int)o + v12 * 0x43c))->f00;
        v12 = (int)(v12 + 1);
    }
    g_8c41bcde = a1;
    g_8c418258 = a3;
    t2 = get_current_area_8c032b10();
    *(int *)((char *)0x8c4e18c0 + (t2 << 3)) = a4;
    set_global_8c01c1f4();
}
