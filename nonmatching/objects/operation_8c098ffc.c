/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c098ffc
 * function: operation_8c098ffc
 * language: c
 * reference size: 1692 bytes
 * compiled size: 1784 bytes (+5.4%)
 * differing lines: 830 of 713 reference instruction lines
 * differing bytes: 1659
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +92 bytes
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
typedef struct S_L8c2850ac S_L8c2850ac;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv100 S_vv100;
typedef struct S_x91984 S_x91984;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x4];
    int f28;
    int f2c;
    int f30;
    char unknown34[0x4];
    float f38;
};
struct Arg0_20 {
    char unknown0[0x40];
    short f40;
};
struct Frame {
    float f00;
    Block8 f04;
    int f0c;
    int f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    float f5c;
    float f60;
    float f64;
    float f68;
    float f6c;
    float f70;
    float f74;
    float f78;
};
struct S_L8c2850ac {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x4];
    float f18;
};
struct S_x91984 {
    float f00;
};
struct S_vv100 {
    float f00;
};
extern Block8 g_8c3011cc;
extern float g_8c31bf88;
extern int g_8c46ec14;
extern S_L8c2850ac g_8c2850ac;
extern char g_8c2850cc[];
extern float njSin_8c37eb0c(int);
extern void operation_195990(int, void *, float, float);
extern void operation_195984(int, void *, void *, float);
extern float call_8c12c714(float);
extern void call_8c38ef2c(void *, int, int, float, float, float);
extern void operation_195b44(void *, float);
void operation_8c098ffc(Object *o)
{
    Frame frame;
    int v2;
    int v3;
    int v5;
    float v121;
    float v120;
    float v7;
    int v10;
    int v9;
    int v11;
    int v14;
    float v20;
    int v22;
    float v6;
    float v23;
    float v28;
    int v29;
    int v36;
    float v46;
    int v48;
    int v47;
    int v1;
    float v51;
    int v52;
    int v63;
    float v69;
    float v70;
    int v72;
    int v71;
    float v75;
    int v77;
    float v79;
    int v81;
    int v89;
    int v97;
    float v98;
    S_vv100 *v100;
    int v99;
    int v102;
    int v112;
    float v80;
    float t1;
    float t2;
    float t3;
    float t4;
    v1 = (int)o->f20->f40;
    t1 = njSin_8c37eb0c((int)(o->f30 << 0xa));
    v2 = (int)-1;
    v3 = (int)((int)o->f2c + v2);
    (&frame)->f00 = t1 * 0.25f + 1.0f;
    if (!(v3 >= 0)) {
        v5 = (int)0;
    } else {
        if (v3 >= 0xa) {
            v3 = (int)9;
        }
        v5 = (int)v3;
    }
    v6 = (float)*(float *)((char *)0x8c285074 + (v5 << 2));
    v121 = (float)o->f38;
    v120 = (float)(v121 * v121);
    *(Block8 *)&(&frame)->f04 = *(Block8 *)&g_8c3011cc;
    operation_195990(0xe, (void *)(&(&frame)->f04), -1.6f, v120);
    v7 = (float)o->f38;
    if (v7 > 0.0f) {
        if (!(0.33f > v7)) {
            v7 = (float)1.0f;
        } else {
            v7 = (float)(v7 / 0.33f);
        }
        v9 = (int)-1;
        (&frame)->f34 = 56.0f;
        (&frame)->f38 = 146.0f;
        v14 = (int)0;
        goto L_8c0990f6;
        v10 = (int)0;
L_8c0990c8:;
        v11 = (int)0;
        if (v10 == o->f28) {
            v11 = (int)v9;
        }
        operation_195990((int)(v11 + 0x17), (void *)(&(&frame)->f34), -3.4f, v7);
        (&frame)->f38 += 44.0f;
        v14 = (int)(v10 + 1);
L_8c0990f6:;
        v10 = (int)v14;
        if (4 > v14) {
            goto L_8c0990c8;
        }
    }
    v20 = (float)o->f38;
    v36 = (int)v14;
    if (v20 > 0.33f) {
        if (!(0.66f > v20)) {
            v20 = (float)1.0f;
        } else {
            v20 = (float)((v20 - 0.33f) / 0.33f);
        }
        (&frame)->f28 = 1.0f;
        (&frame)->f30 = 146.0f;
        v36 = (int)0;
        goto L_8c0991f8;
        v22 = (int)0;
L_8c099158:;
        v29 = (int)0;
        if (v22 == 0) {
            v28 = (float)(v20 * (v6 - 75.0f) + 75.0f);
        } else {
            v23 = (float)(v20 * (*(float *)((char *)0x8c28509c + (v22 << 2)) - 75.0f) + 75.0f);
            v28 = (float)v23;
        }
        (&frame)->f2c = 75.0f;
        if (v22 == o->f28) {
            v29 = (int)2;
            t2 = njSin_8c37eb0c((int)(o->f30 << 0xa));
            (&frame)->f2c += t2 * 9.0f;
        }
        (&frame)->f24 = (v28 - (&frame)->f2c) / 48.0f;
        operation_195984((int)(v29 + 0x1c), (void *)(&(&frame)->f2c), (void *)(&(&frame)->f24), -3.5f);
        (&frame)->f2c = v28;
        (&frame)->f24 = 1.0f;
        operation_195984((int)(v29 + 0x1d), (void *)(&(&frame)->f2c), (void *)(&(&frame)->f24), -3.5f);
        (&frame)->f30 += 44.0f;
        v9 = (int)(v29 + 0x1d);
        v36 = (int)(v22 + 1);
L_8c0991f8:;
        v22 = (int)v36;
        if (4 > v36) {
            goto L_8c099158;
        }
    }
    v46 = (float)o->f38;
    if (!(v46 > 0.66f)) {
        return;
    }
    v46 = (float)(v46 - 0.66f);
    v46 = (float)(v46 / 0.339999974f);
    (&frame)->f1c = 103.0f;
    (&frame)->f20 = 150.0f;
    v63 = (int)0;
    goto L_8c0992dc;
    v47 = (int)0;
L_8c099260:;
    v48 = (int)o->f28;
    v51 = (float)(v46 * v46);
    v52 = (int)0x6b;
    if (v48 != 0) {
        v51 = (float)(v46 * v46 * 0.6f);
    }
    if (v47 == v1) {
        v52 = (int)0x6c;
        if (g_8c46ec14 != 2) {
            t3 = njSin_8c37eb0c((int)(o->f30 << 0xc));
            t4 = call_8c12c714(t3);
            v51 = (float)(v51 * (t4 * 0.2f + 0.2f));
        } else {
            if (v48 == 0) {
                v51 = (float)(v51 * (&frame)->f00);
            }
        }
    }
    operation_195990(v52, (void *)(&(&frame)->f1c), -3.4f, v51);
    (&frame)->f1c += 17.0f;
    v63 = (int)(v47 + 1);
L_8c0992dc:;
    v47 = (int)v63;
    if (o->f2c > v63) {
        goto L_8c099260;
    }
    if (o->f28 == 0) {
        v69 = (float)(v46 * v46 * (&frame)->f00);
        v70 = (float)(v46 * v46);
    } else {
        v69 = (float)(v46 * v46 * 0.6f);
        v70 = (float)(v46 * v46 * 0.6f);
    }
    (&frame)->f14 = v6 - 347.0f + 299.0f;
    (&frame)->f18 = 149.0f;
    operation_195990((int)(v1 + 0x60), (void *)(&(&frame)->f14), -3.4f, v69);
    (&frame)->f14 = v6 - 347.0f + 305.0f;
    (&frame)->f18 = 150.0f;
    operation_195990(0x6a, (void *)(&(&frame)->f14), -3.4f, v70);
    (&frame)->f14 = v6 - 347.0f + 324.0f;
    (&frame)->f18 = 167.0f;
    operation_195990((int)((int)o->f2c + 0x5f), (void *)(&(&frame)->f14), -3.4f, v70);
    v71 = (int)-1;
    v77 = (int)1;
    goto L_8c0993d8;
    v72 = (int)1;
L_8c0993a8:;
    if (v72 == o->f28) {
        v75 = (float)(v46 * v46 * (&frame)->f00);
    } else {
        v75 = (float)(v46 * v46 * 0.6f);
    }
    operation_195990((int)(v72 + 0x5b), (void *)(&*(int *)((char *)0x8c3011e4 + (v72 + v71 << 3))), -3.4f, v75);
    v77 = (int)(v72 + 1);
L_8c0993d8:;
    v72 = (int)v77;
    if (4 > v77) {
        goto L_8c0993a8;
    }
    (&frame)->f3c = (int)(&(&frame)->f5c);
    (&frame)->f40 = (int)(&(&frame)->f4c);
    (&frame)->f44 = 0;
    (&frame)->f48 = 4;
    (&frame)->f5c = (&g_8c2850ac)->f00 + ((&g_8c2850ac)->f08 - (&g_8c2850ac)->f00) * 0.1f;
    (&frame)->f64 = (&g_8c2850ac)->f00 + ((&g_8c2850ac)->f08 - (&g_8c2850ac)->f00) * 1.1f;
    v79 = (float)g_8c31bf88;
    (&frame)->f6c = (&g_8c2850ac)->f18 + ((&g_8c2850ac)->f10 - (&g_8c2850ac)->f18) * 1.1f;
    (&frame)->f74 = (&g_8c2850ac)->f18 + ((&g_8c2850ac)->f10 - (&g_8c2850ac)->f18) * 0.1f;
    (&frame)->f60 = (&frame)->f78 = (&g_8c2850ac)->f04 + ((&g_8c2850ac)->f0c - (&g_8c2850ac)->f04) * 0.1f;
    (&frame)->f68 = (&frame)->f70 = (&g_8c2850ac)->f04 + ((&g_8c2850ac)->f0c - (&g_8c2850ac)->f04) * 1.1f;
    (&frame)->f60 *= v79;
    (&frame)->f68 *= v79;
    (&frame)->f70 *= v79;
    (&frame)->f78 *= v79;
    (&frame)->f10 = (int)(*(int *)(g_8c2850cc + 0xc));
    v80 = (float)(v46 * v46);
    v46 = (float)(v46 * 255.0f);
    *(char *)((char *)(&frame) + 0x13) = (int)v46;
    (&frame)->f58 = (int)((&frame)->f10);
    (&frame)->f54 = (int)((&frame)->f10);
    (&frame)->f58 = (int)((&frame)->f10);
    (&frame)->f50 = (int)((&frame)->f10);
    (&frame)->f58 = (int)((&frame)->f10);
    (&frame)->f54 = (int)((&frame)->f10);
    (&frame)->f58 = (int)((&frame)->f10);
    (&frame)->f4c = (int)((&frame)->f10);
    v89 = (int)0;
    goto L_8c09956a;
    v81 = (int)0;
L_8c099530:;
    call_8c38ef2c((void *)(&(&frame)->f3c), 4, 0x60, -3.41f, 0.1f, 44.0f);
    (&frame)->f60 += v79 * 44.0f;
    (&frame)->f68 += v79 * 44.0f;
    (&frame)->f70 += v79 * 44.0f;
    (&frame)->f78 += v79 * 44.0f;
    v89 = (int)(v81 + 1);
L_8c09956a:;
    v81 = (int)v89;
    if (3 > v89) {
        goto L_8c099530;
    }
    v112 = (int)0;
    goto L_8c09965c;
    v97 = (int)0;
L_8c09957c:;
    v98 = (float)((float)*(short *)((char *)((char *)o->f20 + 0x42) + (v97 << 1)) / 255.0f);
    if (v98 != 0.0f) {
        (&frame)->f5c = (&g_8c2850ac)->f00;
        (&frame)->f64 = (&g_8c2850ac)->f08;
        (&frame)->f6c = ((&g_8c2850ac)->f10 - (&g_8c2850ac)->f08) * v98 + (&g_8c2850ac)->f08;
        (&frame)->f74 = ((&g_8c2850ac)->f18 - (&g_8c2850ac)->f00) * v98 + (&g_8c2850ac)->f00;
        v102 = (int)0;
        goto L_8c099602;
        v99 = (int)0;
L_8c0995ec:;
        v100 = (S_vv100 *)(void *)&(&g_8c2850ac)->f04;
        v100 = (S_vv100 *)((int)v100 + (v99 << 3));
        ((S_x91984 *)((v99 << 3) + (char *)&(&frame)->f60))->f00 = v100->f00 * v79 + (float)v97 * (v79 * 44.0f);
        v102 = (int)(v99 + 1);
L_8c099602:;
        v99 = (int)v102;
        if (4 > v102) {
            goto L_8c0995ec;
        }
        (&frame)->f0c = (int)(*(int *)((char *)g_8c2850cc + (v97 << 2)));
        *(char *)((char *)(&frame) + 0xf) = (int)v46;
        (&frame)->f58 = (int)((&frame)->f0c);
        (&frame)->f54 = (int)((&frame)->f0c);
        (&frame)->f58 = (int)((&frame)->f0c);
        (&frame)->f50 = (int)((&frame)->f0c);
        (&frame)->f58 = (int)((&frame)->f0c);
        (&frame)->f54 = (int)((&frame)->f0c);
        (&frame)->f58 = (int)((&frame)->f0c);
        (&frame)->f4c = (int)((&frame)->f0c);
        ((void (*)(void *, int, int, float))call_8c38ef2c)(&(&frame)->f3c, 4, 0x60, -3.4f);
        v52 = (int)&(&frame)->f50;
        v71 = (int)(void *)0x8c38ef2c;
    }
    v112 = (int)(v97 + 1);
L_8c09965c:;
    v97 = (int)v112;
    if (3 > v112) {
        goto L_8c09957c;
    }
    operation_195b44((void *)(((char *)o->f20 + 0x42)), v80);
}
