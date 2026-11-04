/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16b5d8
 * function: operation_8c16b5d8
 * language: c
 * reference size: 676 bytes
 * compiled size: 676 bytes (+0.0%)
 * differing lines: 18 of 297 reference instruction lines
 * differing bytes: 240
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
typedef struct S_c8c011290 S_c8c011290;
typedef struct S_c8c011290_4 S_c8c011290_4;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct Block_p0_48 {
    float f00;
    float f04;
    float f08;
} Block_p0_48;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1b];
    char f21;
    char f22;
    char f23;
    char unknown24[0x8];
    int f2c;
    int f30;
    Arg0_34 *f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    Block_p0_48 f48;
    int f54;
};
struct S_c8c011290 {
    char unknown0[0x4];
    S_c8c011290_4 *f04;
};
struct S_c8c011290_4 {
    char unknown0[0x4];
    float f04;
};
extern int g_8c4dbb1c;
extern int g_8c4dc800;
extern int g_8c510ba0;
extern char g_8c317ac0[];
extern char g_8c317b00[];
extern int get_game_mode_8c01c25c(void);
extern int operation_8c02b2a4(void);
extern int operation_8c19b054(void);
extern int call_8c3727a0(int);
extern void operation_8c01b9e0(void);
extern int call_8c18e768(int, int);
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
extern S_c8c011290 *operation_8c011290(int, int);
extern int operation_8c16b4e4(int, void *);
extern int bu_check_busy_8c372d98(int);
int operation_8c16b5d8(Object *o)
{
    int t11;
    char v13;
    char pm15;
    int t12;
    int v15;
    float pm4;
    int v33;
    int t1;
    int v8;
    int t3;
    float t8;
    int t6;
    float t7;
    int t5;
    S_c8c011290 *t9;
    int t10;
    float pm17;
    float pm16;
    int v19;
    int t13;
    t1 = get_game_mode_8c01c25c();
    if (0xf != t1) {
        int t2;
        t2 = operation_8c02b2a4();
        if (t2 == 0) {
            if ((!(g_8c4dc800 == 1) || (int)(0 != g_8c510ba0) == 0)) {
                goto L_8c16b610;
            }
        }
    }
    v8 = (int)0;
    goto L_8c16b614;
L_8c16b610:
    ;
    v8 = (int)g_8c4dbb1c;
L_8c16b614:
    ;
    if (0 != v8) {
        if (!(o->f54 == 0)) {
            t3 = operation_8c19b054();
            t1 = call_8c3727a0((int)((char)t3));
            if (1 != t1) {
                operation_8c01b9e0();
                o->f04 = 1 | o->f04;
                return 2;
            }
        }
    }
    v13 = (char)o->f21;
    if (5 < (char)v13) {
        o->f21 = 1;
        o->f22 = (int)0;
        v15 = (int)(char)o->f21;
        if (v15 == 0) {
            o->f23 = 1;
        } else {
            o->f23 = v15 << 2;
        }
        t5 = call_8c18e768(0x10000, (int)(o->f23));
        o->f30 = (int)(t5);
        o->f34 = (Arg0_34 *)o->f2c;
        o->f38 = (float)o->f21 * 6.0f;
        return 2;
    }
    if ((int)o->f22 >= (int)o->f23) {
        int pm18;
        o->f21 = v13 + 1;
        pm18 = 0;
        o->f22 = (int)pm18;
        v19 = (int)(char)o->f21;
        if (0 == v19) {
            o->f23 = 1;
        } else {
            t3 = v19 << 2;
            o->f23 = t3;
        }
        t6 = call_8c18e768(0x10000, (int)(o->f23));
        o->f30 = (int)(t6);
        o->f34 = (Arg0_34 *)o->f2c;
        o->f38 = (float)o->f21 * 6.0f;
    }
    t7 = njSin_8c37eb0c((void *)(o->f34));
    o->f48.f00 = o->f38 * t7 + o->f3c;
    o->f48.f04 = o->f40;
    t8 = njCos_8c38c154((void *)(o->f34));
    pm15 = 0x41;
    pm4 = o->f44;
    pm16 = pm4;
    t7 = pm16;
    pm16 = o->f38 * t8 + t7;
    v15 = (int)(&o->f48);
    o->f48.f08 = pm16;
    t9 = operation_8c011290(v15, pm15);
    if (t9 == 0) {
        o->f34 = (Arg0_34 *)((int)o->f34 + o->f30);
        o->f22 += 1;
        return 0;
    }
    o->f48.f04 = t9->f04->f04 + 6.0f;
    pm17 = 3.0f;
    *(float *)(g_8c317ac0 + 0xc) = pm17;
    *(int *)(0x14 + g_8c317ac0) = 0;
    *(int *)(g_8c317ac0 + 0x18) = 0x63e03;
    *(Vector3 *)& *(Vector3 *)(g_8c317b00 + 0x8) = *(Vector3 *)&o->f48;
    t10 = operation_8c16b4e4((int)o, ((void *)g_8c317b00));
    if (t10 != 0) {
        o->f34 = (Arg0_34 *)((int)o->f34 + o->f30);
        o->f22 += 1;
        return 0;
    }
    t11 = get_game_mode_8c01c25c();
    if (0xf != t11) {
        t12 = operation_8c02b2a4();
        if (t12 == 0) {
            if (g_8c4dc800 != 1) {
                goto L_8c16b7f8;
            }
            if (0 == (int)(g_8c510ba0 != 0)) {
                goto L_8c16b7f8;
            }
        }
    }
    v33 = (int)0;
    goto L_8c16b7fc;
L_8c16b7f8:
    ;
    v33 = (int)g_8c4dbb1c;
L_8c16b7fc:
    ;
    if (v33 != 0) {
        if (o->f54 != 0) {
            int t14;
            t13 = operation_8c19b054();
            v33 = bu_check_busy_8c372d98((int)((char)t13));
            t14 = v33;
            if (t14 != 0) {
                return 0;
            }
        }
    }
    return 1;
}
