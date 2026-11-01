/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ae53c
 * function: operation_8c1ae53c
 * language: c
 * reference size: 588 bytes
 * compiled size: 600 bytes (+2.0%)
 * differing lines: 192 of 265 reference instruction lines
 * differing bytes: 325
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg1_4 Arg1_4;
struct Arg1 {
    int f00;
    Arg1_4 *f04;
    float f08;
    float f0c;
    int f10;
    int f14;
    int f18;
    char f1c;
};
struct Object {
    float tag;
};
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    int f28;
};
struct Frame {
    char unknown0[0x10];
};
extern S_L8c41cba0 g_8c41cba0;
extern char g_8c325d40[];
extern void sprintf_8c12b048(void *, void *, ...);
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
extern int operation_8c01e0e4(int);
extern int operation_8c01e148(int);
extern float call_8c12b8f4(float, float);
void operation_8c1ae53c(Object *o, Arg1 *a1, int a2, int a3, int a4)
{
    Frame frame;
    int v14;
    int v15;
    int v25;
    int v26;
    int v28;
    float v29;
    float v1;
    float v30;
    float v33;
    float v36;
    float v41;
    float v40;
    float v42;
    float v44;
    int v46;
    char v47;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    float t10;
    v1 = (float)0.0f;
    if (a1->f1c != 0x25) {
        sprintf_8c12b048((void *)(&a1->f1c), (void *)((void *)g_8c325d40), (int)a1->f00 + (int)a1->f04 + 1, a1->f04);
        a1->f1c = 0x25;
    }
    if (a2 == 0) {
        njPrintColor_8c38c5b6(-0x100);
    } else {
        njPrintColor_8c38c5b6(-0xf0f10);
    }
    debug_print_at_8c38cf80((int)(a1->f14 << 0x10 | a1->f18), (void *)(&a1->f1c), o->tag);
    if (a2 == 0) {
        t1 = operation_8c01e0e4(2);
        if (t1 != 0) {
            goto L_8c1ae5e0;
        }
        if (((*(int *)((char *)&g_8c41cba0.f20 + (a4 * 0x3c)) & a3)) != 0) {
            goto L_8c1ae5e0;
        }
    }
    njPrintColor_8c38c5b6(-0xf0f10);
    return;
L_8c1ae5e0:;
    v14 = (int)(a4 * 0x3c);
    v15 = (int)*(int *)((char *)&g_8c41cba0.f28 + (v14));
    if (((v15 & 0x40)) != 0) {
        a1->f10 += 1;
    } else {
        if (((v15 & 0x80)) != 0) {
            a1->f10 -= 1;
        }
    }
    t2 = operation_8c01e0e4(2);
    if (t2 != 0) {
        t3 = operation_8c01e148(0x50);
        if (t3 != 0) {
            a1->f10 += 1;
        }
    }
    t4 = operation_8c01e0e4(2);
    if (t4 != 0) {
        t5 = operation_8c01e148(0x4f);
        if (t5 != 0) {
            a1->f10 -= 1;
        }
    }
    v25 = (int)a1->f10;
    if (!(v25 >= 0)) {
        v28 = (int)0;
    } else {
        if (((int)a1->f00 + (int)a1->f04 + -1) > v25) {
            v26 = (int)v25;
        } else {
            v26 = (int)((int)a1->f00 + (int)a1->f04 + -1);
        }
        v28 = (int)v26;
    }
    a1->f10 = (int)(v28);
    if (((*(int *)((char *)&g_8c41cba0.f28 + (v14)) & 0x10)) != 0) {
        v29 = (float)1.0f;
        v30 = (float)v29;
    } else {
        v30 = (float)v1;
        if (((*(int *)((char *)&g_8c41cba0.f28 + (v14)) & 0x20)) != 0) {
            v30 = (float)-1.0f;
        }
    }
    t6 = operation_8c01e0e4(2);
    v33 = (float)v30;
    if (t6 != 0) {
        t7 = operation_8c01e148(0x52);
        v33 = (float)v30;
        if (t7 != 0) {
            v33 = (float)1.0f;
        }
    }
    t8 = operation_8c01e0e4(2);
    v36 = (float)v33;
    if (t8 != 0) {
        t9 = operation_8c01e148(0x51);
        v36 = (float)v33;
        if (t9 != 0) {
            v36 = (float)-1.0f;
        }
    }
    t10 = call_8c12b8f4(10.0f, (float)((int)a1->f10 - (int)a1->f04));
    o->tag += v36 * t10;
    v40 = (float)o->tag;
    v41 = (float)a1->f08;
    if (v41 > v40) {
        v44 = (float)v41;
    } else {
        if (a1->f0c > v40) {
            v42 = (float)v40;
        } else {
            v42 = (float)a1->f0c;
        }
        v44 = (float)v42;
    }
    o->tag = v44;
    sprintf_8c12b048((void *)(&frame), (void *)(&a1->f1c), o->tag);
    v46 = (int)((int)(a1->f04) <= a1->f10);
    v47 = (char)*(char *)((char *)((char *)((int)a1->f00 + (int)a1->f04 - (int)a1->f10 + 1 - v46) + 0x0) + ((int)((&frame))));
    njPrintColor_8c38c5b6(-0x10000);
    debug_print_at_8c38cf80((int)((int)a1->f14 + ((int)a1->f00 + (int)a1->f04 - (int)a1->f10 + 1 - v46) << 0x10 | a1->f18), (void *)((g_8c325d40 + 0xa)), (char)v47);
    njPrintColor_8c38c5b6(-0xf0f10);
}
