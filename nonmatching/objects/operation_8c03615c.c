/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03615c
 * function: operation_8c03615c
 * language: c
 * reference size: 584 bytes
 * compiled size: 584 bytes (+0.0%)
 * differing lines: 6 of 244 reference instruction lines
 * differing bytes: 6
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
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_L8c461f70 S_L8c461f70;
typedef struct S_L8c461f70_10 S_L8c461f70_10;
typedef struct S_L8c461f70_14 S_L8c461f70_14;
typedef struct Frame Frame;
typedef struct S_frame_40 S_frame_40;
typedef struct S_frame_44 S_frame_44;
typedef struct S_vv17 S_vv17;
typedef struct Block_frame_40 {
    S_frame_40 *f00;
    S_frame_44 *f04;
    char unknown8[0x8];
} Block_frame_40;
struct Frame {
    int f00;
    int f04;
    int f08;
    int f0c;
    short f10;
    char unknown12[0x2];
    short f14;
    char unknown16[0x2];
    int f18;
    int f1c;
    int f20;
    int f24;
    int f28;
    short f2c;
    char unknown2e[0x2];
    short f30;
    char unknown32[0x2];
    int f34;
    int f38;
    int f3c;
    Block_frame_40 f40;
};
struct S_vv17 {
    char unknown0[0x4];
    Vector3 f04;
};
extern Block16 g_8c2ed2a4;
extern int g_8c461ae0;
extern int g_8c461be4;
extern int g_8c461be8;
extern int g_8c461bec;
extern int g_8c461bf0;
extern int g_8c462004;
extern int g_8c462008;
struct S_L8c461f70 {
    int f00;
    int f04;
    int f08;
    int f0c;
    S_L8c461f70_10 *f10;
    S_L8c461f70_14 *f14;
    int f18;
    char f1c[0x20];
    char f3c[0x40];
    int f7c;
};
extern S_L8c461f70 g_8c461f70;
extern int call_8c1fa038(void);
extern int call_8c1fa8b8(void *);
extern int call_8c1fa204(int, int, int, void *, void *, void *, Frame *, int);
extern int call_8c1fa4d4(void *, void *);
extern int call_8c1fa61a(void *, void *, void *);
extern int call_8c3ca534(int, void *, int);
extern int call_8c1fa48e(void *, void *, void *, void *);
extern void call_8c1fba58(void *, void *, void *);
int operation_8c03615c(void)
{
    int t5;
    int v4;
    int v7;
    int v8;
    int v10;
    Frame frame;
    S_vv17 *v17;
    int t2;
    int t3;
    int t4;
    int v1;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    *(Block16 *)&(&frame)->f40 = *(Block16 *)&g_8c2ed2a4;
    if ((g_8c461f70.f7c == 0)) {
    } else {
        if ((g_8c461f70.f00 & 2) != 2) {
            int t1;
            int v12;
            Frame *pm11;
            t1 = call_8c1fa038();
            if (t1 != 0) {
                return 9;
            }
            g_8c462008 = 1;
            t2 = call_8c1fa8b8((void *)g_8c461f70.f1c);
            if (!(t2 >= 0)) {
                return 9;
            }
            g_8c461ae0 = 0;
            g_8c461bf0 = 0;
            t3 = call_8c1fa204(0, 0, 0, (void *)((void *)0x8c4621fc), (void *)((void *)&g_8c461ae0), (void *)(&(&frame)->f04), (Frame *)((&frame)), 3);
            if (t3 != 0) {
                return 9;
            }
            t4 = call_8c1fa4d4((void *)((void *)0x8c4621fc), (void *)((void *)&g_8c461bec));
            if (0 != t4) {
                return 9;
            }
            t5 = call_8c1fa61a((void *)((void *)0x8c461bf4), (void *)((void *)0x8c461bf8), (void *)((void *)0x8c461bfc));
            if (t5 != 0) {
                return 9;
            }
            pm11 = &frame;
            (&frame)->f30 = 0;
            (&frame)->f34 = (int)(g_8c461ae0);
            (&frame)->f38 = (int)((&frame)->f04);
            (&frame)->f3c = (int)((&frame)->f00);
            t6 = call_8c3ca534(0x4105, (void *)(&(pm11)->f30), 0);
            if ((short)t6 != 0) {
                return 9;
            }
            (&frame)->f24 = 0;
            (&frame)->f28 = (int)(g_8c461bec);
            (&frame)->f2c = 0;
            t7 = call_8c3ca534(0x4130, (void *)(&(&frame)->f24), 0);
            if (0 != (short)t7) {
                return 9;
            }
            t8 = call_8c1fa48e((void *)((void *)0x8c4621fc), (void *)((void *)0x8c461ae4), (void *)((void *)&g_8c461be4), (void *)((void *)&g_8c461be8));
            if (t8 != 0) {
                return 8;
            }
            v4 = (int)0;
            v1 = (int)g_8c461f70.f10;
            if (v1 != 0) {
                *(int *)((char *)&(&frame)->f40 + (v4++ << 2)) = (int)(v1);
            }
            if (g_8c461f70.f14 != 0) {
                t6 = (int)(v1);
                *(int *)((char *)&(&frame)->f40 + (v4++ << 2)) = t6;
            }
            v8 = (int)g_8c461be4;
            if (0 != v8) {
                *(int *)((char *)&(&frame)->f40 + (v4++ << 2)) = (int)(v8);
            }
            v12 = (int)g_8c461be8;
            if (v12 != 0) {
                *(int *)((v4 << 2) + (char *)&(&frame)->f40) = (int)(v12);
            }
            call_8c1fba58((void *)((void *)0x8c461ae4), (void *)((&frame)->f40.f00), (void *)((&frame)->f40.f04));
            g_8c462004 = 1;
            goto L_8c03633a;
        }
        (&frame)->f14 = 0;
        (&frame)->f18 = g_8c461f70.f04;
        (&frame)->f1c = g_8c461f70.f08;
        (&frame)->f20 = g_8c461f70.f0c;
        t9 = call_8c3ca534(0x4105, (void *)(&(&frame)->f14), 0);
        if ((short)t9 != 0) {
            return 0xa;
        }
        (&frame)->f08 = 0;
        (&frame)->f0c = g_8c461f70.f18;
        (&frame)->f10 = 0;
        t10 = call_8c3ca534(0x4130, (void *)(&(&frame)->f08), 0);
        if ((short)t10 != 0) {
            return 0xa;
        }
        call_8c1fba58((void *)g_8c461f70.f3c, (void *)g_8c461f70.f10, (void *)g_8c461f70.f14);
        g_8c462004 = 1;
        goto L_8c03633a;
    }
    return 0xb;
L_8c03633a:
    ;
    return 0;
}
