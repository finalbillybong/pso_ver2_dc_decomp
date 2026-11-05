/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c021164
 * function: operation_8c021164
 * language: c
 * reference size: 1236 bytes
 * compiled size: 1232 bytes (-0.3%)
 * differing lines: 152 of 418 reference instruction lines
 * differing bytes: 1019
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c2e727c S_g8c2e727c;
typedef struct S_g8c41cd30 S_g8c41cd30;
typedef struct S_g8c41cd30_0 S_g8c41cd30_0;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_3b8 Arg0_3b8;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0xb0];
    int fe8;
    char unknownec[0x21c];
    short f308;
    char unknown30a[0xe];
    float f318;
    float f31c;
    float f320;
    char unknown324[0xc];
    short f330;
    char unknown332[0x1e];
    int f350;
    int f354;
    char unknown358[0x18];
    int f370;
    char unknown374[0x10];
    short f384;
    char unknown386[0x6];
    int f38c;
    int f390;
    int f394;
    float f398;
    float f39c;
    float f3a0;
    char unknown3a4[0x14];
    Arg0_3b8 *f3b8;
    char unknown3bc[0x14c];
    int f508;
    char unknown50c[0x74];
    float f580;
    float f584;
    float f588;
    char unknown58c[0x34];
    int f5c0;
    int f5c4;
    int f5c8;
    char unknown5cc[0xe4];
    short f6b0;
    short f6b2;
    char unknown6b4[0x4];
    float f6b8;
    float f6bc;
    float f6c0;
    char unknown6c4[0x10];
    short f6d4;
    short f6d6;
    int f6d8;
    char unknown6dc[0x104];
    int f7e0;
};
struct S_g8c41cd30 {
    S_g8c41cd30_0 *f00;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
extern int g_8c418248;
extern S_g8c41cd30 *g_8c41cd30;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4dc800;
void operation_8c021164(Object *o)
{
    int v2;
    int v5;
    int v12;
    int v15;
    int v17;
    unsigned short v21;
    int v22;
    int t2;
    int v25;
    int v35;
    int v36;
    int t1;
    int v23;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    ((void (*)(Object *))0x8c01d32c)(o);
    ((void (*)(Object *))0x8c051fd4)(o);
    ((void (*)(Object *))0x8c01c544)(o);
    ((void (*)(Object *))0x8c043724)(o);
    o->f7e0 &= -3;
    o->f5c4 = 0;
    o->f5c0 = 0;
    o->f5c8 = 0;
    ((void (*)(void *))0x8c1aa7fc)(((char *)o + 0x754));
    o->f6b0 = 0;
    o->f6b2 = 0;
    o->f6b8 = 0.0f;
    o->f6c0 = 0.0f;
    o->f6bc = 0.0f;
    ((void (*)(void *))0x8c03bdb0)(((char *)o + 0x58c));
    o->f508 = 0;
    o->f6d8 = 0;
    o->f6d4 = 0;
    o->f6d6 = 0;
    o->f370 = 0;
    *(int *)((char *)o + 0x350) &= -0x484;
    o->f394 = 0;
    o->f390 = 0;
    o->f38c = 0;
    o->f3a0 = 0.0f;
    o->f39c = 0.0f;
    o->f398 = 0.0f;
    o->f320 = 0.0f;
    o->f31c = 0.0f;
    o->f318 = 0.0f;
    o->f580 = 0.0f;
    o->f584 = 0.0f;
    o->f588 = 0.0f;
    ((void (*)(Object *))0x8c0206c4)(o);
    t1 = ((int (*)(void))0x8c032ad0)();
    if (t1 == 0) {
        o->f384 = 0;
    }
    t2 = ((int (*)(Object *))0x8c026554)(o);
    t3 = ((int (*)(Object *))0x8c1e9610)(o);
    ((void (*)(Object *, void *, void *, int))0x8c01c908)(o, *(S_g8c2e727c **)((char *)0x8c2e727c + (t2 << 2)), g_8c41cd30->f00, t3);
    ((void (*)(Object *))0x8c02ae70)(o);
    v2 = (int)(o->f308 == 2);
    if (v2 == 0) {
        ((void (*)(Object *))0x8c1e92e4)(o);
    } else {
        ((void (*)(Object *))0x8c1ef548)(o);
    }
    t4 = ((int (*)(void))0x8c02c194)();
    if (t4 != 0) {
        ((void (*)(Object *))0x8c02aff0)(o);
        v5 = (int)(o->f308 == 2);
        if (v5 != 0) {
            o->fe8 |= 1;
        }
    }
    ((void (*)(Object *))0x8c02c1d4)(o);
    t5 = ((int (*)(void))0x8c032ad0)();
    if (t5 != 0) {
        o->f350 &= -0x200001;
    } else {
        o->f350 |= 0x200000;
    }
    v12 = (int)(o->f308 == 2);
    if (v12 == 0) {
        ((void (*)(Object *))0x8c02c100)(o);
    }
    v15 = (int)(o->f20 == g_8c418248);
    if (v15 != 0) {
        ((void (*)(Object *))0x8c021d68)(o);
    }
    ((void (*)(void *))0x8c03be3c)(((char *)o + 0x5b8));
    v17 = (int)(o->f20 == g_8c418248);
    if (v17 != 0) {
        ((void (*)(void *))0x8c02a94c)((void *)0x8c02b214);
    }
    if (o->f3b8 != 0) {
        ((void (*)(void *))0x8c0d8ed8)(o->f3b8);
    }
    ((void (*)(void))0x8c0292ec)();
    ((void (*)(Object *))0x8c020f28)(o);
    v21 = (unsigned short)o->f20;
    v22 = (int)(v21 == g_8c418248);
    if (v22 != 0) {
        t6 = ((int (*)(Object *))0x8c02c0c4)(o);
        if (t6 == 0) {
            v23 = (int)(((o->f350 & 0x4000)) != 0);
            if (v23 == 0) {
                if (((o->f34 & 0x800)) == 0 && o->f330 > 0) {
                    goto L_8c02152c;
                }
                o->f34 &= -0x801;
                v25 = (int)(g_8c4dc800 == 1);
                if (v25 != 0) {
                    ((void (*)(Object *))0x8c027890)(o);
                } else {
                    ((void (*)(short, void *, int))0x8c02a438)(o->f20, (void *)0x8c2e758c, 0x8000);
                    o->f350 |= 0x4000;
                    o->f354 = 0;
                }
            }
        }
    }
L_8c02152c:;
    v35 = (int)(o->f20 == g_8c418248);
    if (v35 != 0) {
        v36 = (int)(((o->f350 & 0x4000)) != 0);
        if (v36 != 0) {
            o->f350 &= -0x4001;
            if (g_8c46fe20 != 0) {
                g_8c46fe20->f20 &= -3;
            }
            ((void (*)(Object *, int))0x8c026700)(o, 0xf);
            ((void (*)(Object *))0x8c1e92e4)(o);
            ((void (*)(Object *))0x8c027890)(o);
            ((void (*)(Object *))0x8c027954)(o);
            ((void (*)(Object *))0x8c02c820)(o);
            if (o->f354 != 0) {
                if (o->f354 == 1) {
                    goto L_8c021618;
                }
            } else {
                ((void (*)(int))0x8c1a9f58)(2);
                ((void (*)(Object *))0x8c02af54)(o);
                t7 = ((int (*)(void *, int))0x8c122700)(g_8c4d97e0, 0x24);
                if (t7 != 0) {
                    ((void (*)(int, void *))0x8c10ae08)(t7, g_8c44be98);
                    goto L_8c02161e;
L_8c021618:;
                    ((void (*)(int))0x8c1a9f58)(1);
                }
            }
L_8c02161e:;
            o->f354 = 0;
        }
    }
}
