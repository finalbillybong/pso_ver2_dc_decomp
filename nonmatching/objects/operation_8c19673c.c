/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19673c
 * function: operation_8c19673c
 * language: c
 * reference size: 1608 bytes
 * compiled size: 1688 bytes (+5.0%)
 * differing lines: 864 of 662 reference instruction lines
 * differing bytes: 1482
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +80 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
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
typedef struct S_L8c28777c S_L8c28777c;
typedef struct S_L8c287794 S_L8c287794;
typedef struct S_L8c2877c4 S_L8c2877c4;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_0 S_g8c467180_2c_0;
typedef struct Object Object;
typedef struct S_x85648 S_x85648;
typedef struct S_x86160 S_x86160;
typedef struct Block_frame_30 {
    float f00;
    float f04;
} Block_frame_30;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0xc];
    float f34;
    int f38;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    Block_frame_30 f30;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    int f58;
    void *f5c;
    int f60;
    int f64;
    char unknown68[0x30];
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_L8c287794 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
};
struct S_L8c28777c {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
    short f0e;
    short f10;
    short f12;
    short f14;
    short f16;
};
struct S_x85648 {
    float f00;
};
struct S_x86160 {
    float f00;
};
struct S_L8c2877c4 {
    char unknown0[0x4];
    float f04;
};
extern float g_8c31bf88;
extern S_g8c467180 *g_8c467180;
extern char g_8c4dc410;
extern S_L8c28777c g_8c28777c;
extern S_L8c287794 g_8c287794;
extern S_L8c2877c4 g_8c2877c4;
extern char g_8c2877f4[];
extern void operation_1959b0(int, void *, void *, float, float);
extern float njSin_8c37eb0c(int);
extern void operation_8c04b230(int, int, float, float);
extern void call_8c38ef2c(void *, int, int, float);
void operation_8c19673c(Object *o)
{
    Frame frame;
    float v3;
    int v5;
    int v6;
    float v4;
    float v12;
    float v20;
    float v24;
    int v30;
    float v25;
    int v33;
    int v29;
    float v32;
    float v31;
    int v34;
    int v37;
    int v38;
    float v52;
    int v61;
    int v62;
    int v65;
    int v71;
    int v73;
    float v72;
    int v76;
    float t1;
    if (o->f34 == 0.0f) {
        return;
    }
    if (0.33f > o->f34) {
        v3 = (float)(o->f34 * 3.030303f);
    } else {
        v3 = (float)1.0f;
    }
    (&frame)->f50 = v3 * -144.0f + 160.0f;
    (&frame)->f54 = 264.0f;
    v4 = (float)((&frame)->f50 + 40.0f);
    (&frame)->f0c = 1.0f;
    (&frame)->f08 = 1.0f;
    operation_1959b0(0x50, (void *)(&(&frame)->f50), (void *)(&(&frame)->f08), -250.0f, 1.0f);
    v5 = (int)((int)o->f24 + 2);
    v6 = (int)v5;
    if (v5 >= 9) {
        v6 = (int)(v5 + -9);
    }
    (&frame)->f50 += 13.0f;
    (&frame)->f54 = 406.0f;
    t1 = njSin_8c37eb0c((int)(o->f38 << 0xa));
    (&frame)->f1c = 1.0f;
    (&frame)->f18 = 1.0f;
    operation_1959b0((int)(v6 + 0x40), (void *)(&(&frame)->f50), (void *)(&(&frame)->f18), -249.0f, t1 * 0.25f + 1.0f);
    if (!(v4 > 160.0f)) {
        (&frame)->f48 = (160.0f - v4) / 8.0f;
        (&frame)->f4c = 1.0f;
        operation_1959b0(0x51, (void *)((void *)0x8c31c230), (void *)(&(&frame)->f48), -250.0f, 1.0f);
    }
    v12 = (float)o->f34;
    if (v12 > 0.2f) {
        if (!(0.8f > v12)) {
            v12 = (float)1.0f;
        } else {
            v12 = (float)((v12 - 0.2f) / 0.6f);
        }
        (&frame)->f44 = 284.0f;
        (&frame)->f3c = 1.0f;
        (&frame)->f40 = 191.0f;
        (&frame)->f38 = v12;
        operation_1959b0(0x52, (void *)(&(&frame)->f40), (void *)(&(&frame)->f38), -250.0f, 1.0f);
        (&frame)->f40 = v12 * 56.0f + 191.0f;
        (&frame)->f38 = v12 * 369.0f / 32.0f;
        operation_1959b0(0x53, (void *)(&(&frame)->f40), (void *)(&(&frame)->f38), -250.0f, 1.0f);
        (&frame)->f40 = v12 * 56.0f + 191.0f + v12 * 369.0f;
        (&frame)->f04 = 1.0f;
        (&frame)->f00 = 1.0f;
        operation_1959b0(0x54, (void *)(&(&frame)->f40), (void *)(&frame), -250.0f, 1.0f);
    }
    v20 = (float)o->f34;
    if (v20 > 0.9f) {
        if (!(1.0f > v20)) {
            v24 = (float)1.0f;
        } else {
            v24 = (float)((v20 - 0.9f) / 0.100000024f);
        }
        v25 = (float)g_8c31bf88;
        if ((v24 * 255.0f) > 2147483648.0f) {
        }
        v29 = (int)(unsigned int)(v24 * 255.0f);
        v30 = (int)((int)o->f24 + 2);
        if (v30 >= 9) {
            v30 -= 9;
        }
        v31 = (float)(v25 * 19.0f);
        v25 = (float)(v25 * 300.0f);
        v37 = (int)0;
        v38 = (int)((v30 << 2) + 0x2b);
        goto L_8c1969e6;
        v32 = (float)v25;
        v33 = (int)((v30 << 2) + 0x2b);
        v34 = (int)0;
L_8c1969c8:;
        operation_8c04b230((int)(*(S_g8c467180_2c_0 **)((char *)((char *)g_8c467180->f2c + 0x0) + (v33 << 2))), (int)(v29 << 0x18), 219.0f, v32);
        v25 = (float)(v32 + v31);
        v37 = (int)(v34 + 1);
        v38 = (int)(v33 + 1);
L_8c1969e6:;
        if (4 > v37) {
            v32 = (float)v25;
            v33 = (int)v38;
            v34 = (int)v37;
            goto L_8c1969c8;
        }
    }
    v52 = (float)o->f34;
    if (!(v52 > 0.4f)) {
        return;
    }
    if (!(0.9f > v52)) {
        v52 = (float)1.0f;
    } else {
        v52 = (float)((v52 - 0.4f) / 0.49999997f);
    }
    if (g_8c4dc410 != 0) {
    } else {
        (&g_8c287794)->f00 = (float)(&g_8c28777c)->f00 * 0.5f + 108.0f;
        (&g_8c287794)->f04 = (float)(&g_8c28777c)->f02 * 0.5f + 274.0f;
        (&g_8c287794)->f08 = (float)(&g_8c28777c)->f04 * 0.5f + 160.0f;
        (&g_8c287794)->f0c = (float)(&g_8c28777c)->f06 * 0.5f + 296.0f;
        (&g_8c287794)->f10 = (float)(&g_8c28777c)->f08 * 0.5f + 160.0f;
        (&g_8c287794)->f14 = (float)(&g_8c28777c)->f0a * 0.5f + 370.0f;
        (&g_8c287794)->f18 = (float)(&g_8c28777c)->f0c * 0.5f + 110.0f;
        (&g_8c287794)->f1c = (float)(&g_8c28777c)->f0e * 0.5f + 391.0f;
        (&g_8c287794)->f20 = (float)(&g_8c28777c)->f10 * 0.5f + 56.0f;
        (&g_8c287794)->f24 = (float)(&g_8c28777c)->f12 * 0.5f + 370.0f;
        (&g_8c287794)->f28 = (float)(&g_8c28777c)->f14 * 0.5f + 56.0f;
        (&g_8c287794)->f2c = (float)(&g_8c28777c)->f16 * 0.5f + 296.0f;
        g_8c4dc410 = 1;
        v37 = (int)(void *)&(&g_8c287794)->f18;
        v38 = (int)(void *)&(&g_8c287794)->f14;
    }
    v65 = (int)0;
    goto L_8c196c3e;
    v61 = (int)0;
L_8c196bac:;
    v62 = (int)(v61 << 2);
    *(Block8 *)&(&frame)->f30 = *(Block8 *)&*(Block8 *)((char *)&g_8c287794 + (v61 << 3));
    (&frame)->f14 = 1.0f;
    (&frame)->f10 = 1.0f;
    (&frame)->f28 = ((&frame)->f30.f00 - ((float)*(short *)((char *)&g_8c28777c + (v62)) * 0.5f + 120.0f)) * (v52 * v52) + ((float)*(short *)((char *)&g_8c28777c + (v62)) * 0.5f + 120.0f);
    (&frame)->f2c = ((&frame)->f30.f04 - ((float)*(short *)((char *)0x8c28777e + (v62)) * 0.5f + 340.0f)) * (v52 * v52) + ((float)*(short *)((char *)0x8c28777e + (v62)) * 0.5f + 340.0f);
    operation_1959b0((int)(v61 + 0x55), (void *)(&(&frame)->f28), (void *)(&(&frame)->f10), -244.0f, v52 * v52);
    v65 = (int)(v61 + 1);
L_8c196c3e:;
    v61 = (int)v65;
    if (6 > v65) {
        goto L_8c196bac;
    }
    (&frame)->f24 = v52;
    (&frame)->f20 = v52;
    operation_1959b0(0x5b, (void *)((void *)0x8c31c238), (void *)(&(&frame)->f20), -246.0f, 1.0f);
    v71 = (int)((int)o->f24 + 2);
    if (v71 >= 9) {
        v71 -= 9;
    }
    v72 = (float)g_8c31bf88;
    v76 = (int)0;
    goto L_8c196d22;
    v73 = (int)0;
L_8c196cc0:;
    ((S_x85648 *)((v73 << 3) + ((char *)(&frame) + 0x68)))->f00 = *(float *)((char *)&g_8c2877c4 + (v73 << 3)) - 120.0f;
    ((S_x86160 *)((v73 << 3) + ((char *)(&frame) + 0x6c)))->f00 = *(float *)((char *)&g_8c2877c4.f04 + (v73 << 3)) - 340.0f;
    ((S_x85648 *)((v73 << 3) + ((char *)(&frame) + 0x68)))->f00 *= (float)*(int *)((char *)((char *)(v71 * 0x18 + g_8c2877f4) + 0x0) + (v73 << 2)) / 5.0f * (v52 * (v52 * v52));
    ((S_x86160 *)((v73 << 3) + ((char *)(&frame) + 0x6c)))->f00 *= (float)*(int *)((char *)((char *)(v71 * 0x18 + g_8c2877f4) + 0x0) + (v73 << 2)) / 5.0f * (v52 * (v52 * v52));
    ((S_x85648 *)((v73 << 3) + ((char *)(&frame) + 0x68)))->f00 += 120.0f;
    ((S_x86160 *)((v73 << 3) + ((char *)(&frame) + 0x6c)))->f00 += 340.0f;
    ((S_x86160 *)((v73 << 3) + ((char *)(&frame) + 0x6c)))->f00 *= v72;
    v76 = (int)(v73 + 1);
    v65 = (int)((v73 << 3) + ((char *)(&frame) + 0x68));
L_8c196d22:;
    v73 = (int)v76;
    if (6 > v76) {
        goto L_8c196cc0;
    }
    (&frame)->f5c = (void *)0x8c31c240;
    (&frame)->f60 = 0;
    (&frame)->f64 = 6;
    (&frame)->f58 = (int)(((char *)(&frame) + 0x68));
    call_8c38ef2c((void *)(&(&frame)->f58), 6, 0x60, -245.0f);
}
