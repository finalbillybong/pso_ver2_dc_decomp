/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c019b18
 * function: operation_8c019b18
 * language: c++
 * reference size: 588 bytes
 * compiled size: 588 bytes (+0.0%)
 * differing lines: 126 of 230 reference instruction lines
 * differing bytes: 230
 * provenance: generator draft (mode bgotoext)
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
typedef struct Object Object;
typedef struct S_vv31 S_vv31;
typedef struct S_x33424 S_x33424;
class S_c8c021ef8;
class S_vv2;
struct Frame {
    char unknown0[0x80];
};
struct S_g8c4627c0 {
    char unknown0[0x14];
    int f14;
};
class S_vv2 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_vv2Data {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x10];
    unsigned char f20;
    unsigned char f21;
    unsigned char f22;
    unsigned char f23;
} S_vv2Data;
struct S_vv31 {
    Block1084 f00;
};
struct S_x33424 {
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
    int v16;
    int v20;
    int v1;
    int v13;
    int v14;
    S_vv2 *v2;
    int v11;
    int v15;
    int v22;
    char *v23;
    int v30;
    S_vv31 *v31;
    int v32;
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
    v1 = (int)g_8c4627c0->f14;
    v11 = (int)v1;
    goto L_8c019bea;
    v2 = (S_vv2 *)v1;
L_8c019b92:;
    if (v2 != 0) {
        v2->v0(1);
    }
    sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0x12e)), ((S_vv2Data *)v2)->f20, ((S_vv2Data *)v2)->f21, ((S_vv2Data *)v2)->f22, ((S_vv2Data *)v2)->f23);
    operation_8c011efc((Frame *)((&frame)));
    v11 = (int)((S_vv2Data *)v2)->f0c;
L_8c019bea:;
    v2 = (S_vv2 *)v11;
    if (v11 != 0) {
        goto L_8c019b92;
    }
    v14 = (int)0;
    goto L_8c019c02;
    v13 = (int)0;
L_8c019bf8:;
    *(char *)((char *)0x8c41c667 + (v13 << 4)) = 0;
    v14 = (int)(v13 + 1);
L_8c019c02:;
    v13 = (int)v14;
    if (0xc > v14) {
        goto L_8c019bf8;
    }
    v15 = (int)0x43c;
    v20 = (int)0;
    goto L_8c019c2e;
    v16 = (int)0;
L_8c019c0c:;
    strncpy_8c12b154((void *)(&*(int *)((char *)0x8c41c667 + (*(int *)((char *)((char *)o + 0xc) + (v16 * v15)) << 4))), (int)((int)o + v16 * v15 + 0x10), 0x10);
    v14 = (int)/* ? clobbered */ 0;
    v20 = (int)(v16 + 1);
L_8c019c2e:;
    v16 = (int)v20;
    if (a1 > v20) {
        goto L_8c019c0c;
    }
    v22 = (int)0;
    goto L_8c019c6a;
    v23 = (char *)v22;
L_8c019c36:;
    t1 = lookup_low_id((int)(v23));
    if (t1 != 0) {
        if (t1 != 0) {
            t1->v0(1);
        }
        sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0xff)), v23);
        operation_8c011efc((Frame *)((&frame)));
    }
    v14 = (int)/* ? clobbered */ 0;
    v22 = (int)(v23 + 1);
L_8c019c6a:;
    v23 = (char *)v22;
    if (0xc > v22) {
        goto L_8c019c36;
    }
    g_8c41bce0 = 2;
    g_8c41bcdc = a2;
    v32 = (int)g_8c41bcde;
    goto L_8c019cae;
    v30 = (int)g_8c41bcde;
L_8c019c8a:;
    v31 = (S_vv31 *)(v30 * 0x43c + g_8c418a0c);
    *(Block1084 *)&v31->f00 = *(Block1084 *)&((S_x33424 *)((int)o + v30 * 0x43c))->f00;
    v32 = (int)(v30 + 1);
L_8c019cae:;
    v30 = (int)v32;
    if ((g_8c41bcde + a1) > v32) {
        goto L_8c019c8a;
    }
    g_8c41bcde = a1;
    g_8c418258 = a3;
    t2 = get_current_area_8c032b10();
    *(int *)((char *)0x8c4e18c0 + (t2 << 3)) = a4;
    set_global_8c01c1f4();
}
