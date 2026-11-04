/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21648c
 * function: operation_8c21648c
 * language: c
 * reference size: 948 bytes
 * compiled size: 952 bytes (+0.4%)
 * differing lines: 526 of 406 reference instruction lines
 * differing bytes: 760
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct S_g8c46fe00_0 S_g8c46fe00_0;
typedef struct Object Object;
typedef struct Arg0_6c Arg0_6c;
typedef struct Arg1 Arg1;
typedef struct S_vv33 S_vv33;
typedef struct S_vv4 S_vv4;
typedef struct S_vv48 S_vv48;
typedef struct S_vv58 S_vv58;
typedef struct S_vv67 S_vv67;
struct S_g8c46fe00 {
    S_g8c46fe00_0 *f00;
};
struct S_g8c46fe00_0 {
    char unknown0[0x8];
    int f08;
};
struct Arg1 {
    char unknown0[0x2c];
    float f2c;
    int f30;
};
struct Object {
    char unknown0[0x4c];
    float f4c;
    char unknown50[0x4];
    float f54;
    char unknown58[0x4];
    float f5c;
    char unknown60[0x8];
    int f68;
    Arg0_6c *f6c;
    char unknown70[0x4];
    int f74;
    char unknown78[0x4];
    int f7c;
    int f80;
    char unknown84[0xc];
    float f90;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    int f14;
    char unknown18[0xbc];
};
struct S_vv4 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x14];
    float f1c;
};
struct S_vv33 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x8];
    float f10;
    char unknown14[0x8];
    float f1c;
    char unknown20[0x8];
    float f28;
};
struct S_vv48 {
    char unknown0[0x10];
    float f10;
    char unknown14[0x14];
    float f28;
};
struct S_vv58 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x14];
    float f1c;
};
struct S_vv67 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x8];
    float f10;
    char unknown14[0x8];
    float f1c;
    char unknown20[0x8];
    float f28;
};
extern float g_8c2e1534;
extern float g_8c2e153c;
extern float g_8c2e1568;
extern float g_8c2e1578;
extern int g_8c3fc180;
extern S_g8c46fe00 *g_8c46fe00;
extern int hs_8c18e768(int, int);
extern float operation_8c20b160(void *, float, float);
extern void operation_8c20a89c(void *, int, float);
extern void operation_8c20b178(void *, int);
extern void operation_8c20b1b0(Arg1 *, void *);
extern void hs_8c38d9a0(void *, int, int, int);
extern float hs_8c20b160_1(float, float);
extern void hs_8c20b178_1(void *, void *);
extern float hs_8c384258(float);
void operation_8c21648c(Object *o, Arg1 *a1)
{
    Frame frame;
    int v99;
    int v1;
    S_vv4 *v4;
    float v2;
    float v3;
    int v5;
    int v7;
    int v8;
    float v18;
    float v19;
    float v22;
    float v25;
    float v27;
    int t2;
    float v21;
    float v29;
    float v30;
    float v26;
    S_vv33 *v33;
    float v32;
    int v34;
    int v40;
    int v39;
    int v17;
    float v20;
    int v28;
    S_vv48 *v48;
    int v49;
    int v53;
    int v52;
    float v47;
    int v43;
    float v56;
    int v59;
    S_vv58 *v58;
    float v57;
    float v31;
    S_vv67 *v67;
    float v64;
    float v98;
    float v66;
    int v68;
    int v74;
    int v73;
    float t1;
    int v55;
    float t3;
    float t4;
    t2 = hs_8c18e768(g_8c46fe00->f00->f08 - g_8c3fc180, 0x44);
    if (!(a1->f30 >= 0)) {
        return;
    }
    v99 = (int)o->f7c;
    (&frame)->f10 = o->f4c + o->f54 * 0.5f;
    if (v99 > 0) {
        v1 = !(o->f68 & 1);
        if (v1 != 0) {
            t1 = operation_8c20b160(&o->f4c, o->f5c, 0.1f);
            operation_8c20a89c(&(&frame)->f14, -1, t1);
            operation_8c20b178(&(&frame)->f14, 1);
            operation_8c20b1b0(a1, &(&frame)->f14);
            v8 = (int)0;
            v2 = (float)(((float)o->f74 * g_8c2e153c + -(o->f54 * 0.5f)) * a1->f2c + (&frame)->f10);
            v3 = (float)(((float)o->f74 * g_8c2e153c + -(o->f54 * 0.5f) + g_8c2e153c) * a1->f2c + (&frame)->f10);
            v7 = (int)&(&frame)->f14;
            goto L_8c2165a2;
            v4 = (S_vv4 *)&(&frame)->f14;
            v5 = (int)0;
            do {
                v4->f04 = v2;
                v4->f1c = v3;
                v5 = (int)(v5 + 1);
                v7 = (int)((int)v4 + 0x30);
                v8 = (int)v5;
L_8c2165a2:;
                v4 = (S_vv4 *)v7;
                v5 = (int)v8;
            } while (4 > v8);
            hs_8c38d9a0(&(&frame)->f14, 8, t2, 1);
        }
    }
    t3 = hs_8c20b160_1(o->f5c, 0.0f);
    operation_8c20a89c(&(&frame)->f14, -1, t3);
    hs_8c20b178_1(&(&frame)->f14, o->f6c);
    operation_8c20b1b0(a1, &(&frame)->f14);
    (&frame)->f0c = a1->f2c;
    v17 = (int)o->f80;
    v18 = (float)o->f54;
    v18 = (float)(v18 * 0.5f);
    v19 = (float)g_8c2e153c;
    v18 = (float)-v18;
    v20 = (float)(v18 + v19);
    v18 = (float)(v18 * (&frame)->f0c);
    v21 = (float)(v18 + (&frame)->f10);
    if (o->f6c == 0) {
        (&frame)->f08 = g_8c2e1568;
        v25 = (float)(g_8c2e1568 + v19);
    } else {
        v22 = (float)g_8c2e1578;
        (&frame)->f08 = g_8c2e1578;
        v22 = (float)(v22 + v19);
        v25 = (float)v22;
    }
    v26 = (float)(v25 * g_8c2e1534);
    (&frame)->f08 *= g_8c2e1534;
    t4 = hs_8c384258(-o->f90 / v19);
    v27 = (float)g_8c2e153c;
    v27 = (float)(v27 * t4);
    v43 = (int)v17;
    v47 = (float)v21;
    v31 = (float)v27;
    if (v27 != 0.0f) {
        v28 = (int)((int)o->f80 + -1);
        if (0.0f > v27) {
            v30 = (float)(v27 + g_8c2e153c);
            v31 = (float)v27;
        } else {
            v29 = (float)(v27 - g_8c2e153c);
            v30 = (float)v27;
            v31 = (float)v29;
        }
        (&frame)->f04 = v30 * (&frame)->f0c + v21;
        v32 = (float)(v26 - v30 * g_8c2e1534);
        v39 = (int)0;
        v40 = (int)&(&frame)->f14;
        goto L_8c216716;
        v33 = (S_vv33 *)&(&frame)->f14;
        v34 = (int)0;
        do {
            v33->f04 = v21;
            v33->f10 = v32;
            v33->f1c = (&frame)->f04;
            v33->f28 = v26;
            v34 = (int)(v34 + 1);
            v39 = (int)v34;
            v40 = (int)((int)v33 + 0x30);
L_8c216716:;
            v33 = (S_vv33 *)v40;
            v34 = (int)v39;
        } while (4 > v39);
        hs_8c38d9a0(&(&frame)->f14, 8, t2, 1);
        v43 = (int)v28;
        v47 = (float)(&frame)->f04;
    }
    v64 = (float)(v20 * (&frame)->f0c + (&frame)->f10);
    if (v43 > 0) {
        (&frame)->f00 = g_8c2e153c * (&frame)->f0c;
        v52 = (int)0;
        v53 = (int)&(&frame)->f14;
        goto L_8c216768;
        v48 = (S_vv48 *)&(&frame)->f14;
        v49 = (int)0;
        do {
            v48->f10 = (&frame)->f08;
            v48->f28 = v26;
            v49 = (int)(v49 + 1);
            v52 = (int)v49;
            v53 = (int)((int)v48 + 0x30);
L_8c216768:;
            v48 = (S_vv48 *)v53;
            v49 = (int)v52;
        } while (4 > v52);
        v55 = (int)0;
        v56 = (float)v47;
        while (v43 > v55) {
            v57 = (float)(v56 + (&frame)->f00);
            v58 = (S_vv58 *)&(&frame)->f14;
            v59 = (int)0;
            while (4 > v59) {
                v58->f04 = v56;
                v58->f1c = v57;
                v58 = (S_vv58 *)((char *)v58 + 48);
                v59 = (int)(v59 + 1);
            }
            hs_8c38d9a0(&(&frame)->f14, 8, t2, 1);
            v56 = (float)v57;
            v55 = (int)(v55 + 1);
        }
        v64 = (float)v57;
    }
    if (v31 != 0.0f) {
        v66 = (float)((&frame)->f08 - v31 * g_8c2e1534);
        v73 = (int)0;
        v74 = (int)&(&frame)->f14;
        goto L_8c216812;
        v67 = (S_vv67 *)&(&frame)->f14;
        v68 = (int)0;
        do {
            v98 = (float)(o->f54 * 0.5f * (&frame)->f0c + (&frame)->f10);
            v67->f04 = v64;
            v67->f10 = (&frame)->f08;
            v67->f1c = v98;
            v67->f28 = v66;
            v68 = (int)(v68 + 1);
            v73 = (int)v68;
            v74 = (int)((int)v67 + 0x30);
L_8c216812:;
            v67 = (S_vv67 *)v74;
            v68 = (int)v73;
        } while (4 > v73);
        hs_8c38d9a0(&(&frame)->f14, 8, t2, 1);
    }
}
