/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c099780
 * function: operation_8c099780
 * language: c
 * reference size: 1084 bytes
 * compiled size: 1104 bytes (+1.8%)
 * differing lines: 406 of 471 reference instruction lines
 * differing bytes: 1011
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +20 bytes
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
typedef struct Block44 {
    int words[11];
} Block44;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_10 Arg0_10;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv21 S_vv21;
typedef struct S_vv22 S_vv22;
typedef struct Block_frame_8 {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x1c];
} Block_frame_8;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xa];
    Arg0_10 *f10;
    char unknown14[0xc];
    Arg0_20 *f20;
    int f24;
    int f28;
    short f2c;
    short f2e;
    short f30;
    char unknown32[0x2];
    float f34;
    float f38;
    float f3c;
};
struct Frame {
    Block8 f00;
    Block_frame_8 f08;
};
struct Arg0_10 {
    char unknown0[0x30];
    int f30;
};
struct S_vv21 {
    short f00;
};
struct S_vv22 {
    short f00;
};
struct Arg0_20 {
    char unknown0[0x42];
    short f42;
    short f44;
    short f46;
    float f48;
    float f4c;
};
extern Block44 g_8c300d08;
extern float g_8c300d60;
extern Block8 g_8c301200;
extern int g_8c46ec14;
extern char g_8c2f5b38[];
extern void call_8c0a2858(void *);
extern void operation_1957e0(int, void *);
extern void operation_195830(void);
extern int operation_8c09a640(int);
extern void play_se_8c05fbf8(int, int, int, int);
extern int operation_8c034c7c(void *);
extern int rand(void);
extern int call_8c0356ac(int, int);
void operation_8c099780(Object *o)
{
    Frame frame;
    float v1;
    float v2;
    float v3;
    float v4;
    float v11;
    int v39;
    S_vv21 *v21;
    int v33;
    S_vv22 *v22;
    int v32;
    int v20;
    char *v23;
    int v24;
    int v25;
    float v37;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    v1 = (float)g_8c300d60;
    if (o->f24 != 2) {
        if (o->f3c != 1.0f) {
            v11 = (float)v1;
            goto L_8c0997d4;
        }
        v11 = (float)(v1 + -0.0333333351f);
        if (!(0.0f > (v1 + -0.0333333351f))) {
            goto L_8c0997d4;
        }
        v2 = (float)0.0f;
        v4 = (float)v2;
    } else {
        v3 = (float)(1.0f - o->f3c);
        if (v1 > v3) {
            v4 = (float)v1;
        } else {
            v4 = (float)v3;
        }
    }
    v11 = (float)v4;
L_8c0997d4:;
    *(Block44 *)&(&frame)->f08 = *(Block44 *)&g_8c300d08;
    (&frame)->f08.f0c = (v11 * 0.160000026f + 0.5f) * 640.0f;
    call_8c0a2858((void *)(&(&frame)->f08));
    g_8c300d60 = v11;
    if (o->f24 == 2) {
        if ((o->f3c += -0.0833333358f) > 0.0f) {
        } else {
            o->f3c = 0.0f;
            o->f04 |= 1;
        }
        return;
    }
    if ((o->f3c += 0.166666672f) > 1.0f) {
        o->f3c = 1.0f;
    }
    if (o->f24 != 1) {
        if (o->f24 == 3) {
            goto L_8c0998a0;
        }
    } else {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c301200;
        operation_1957e0(2, (void *)(&frame));
        goto L_8c0998a6;
L_8c0998a0:;
        operation_195830();
    }
L_8c0998a6:;
    if (o->f24 != 0) {
        if (o->f24 == 1) {
            goto L_8c0998c6;
        }
        if (o->f24 == 3) {
            goto L_8c099ac0;
        }
        return;
    }
    o->f24 = 1;
    return;
L_8c0998c6:;
    t1 = operation_8c09a640(2);
    if (t1 != 0) {
        play_se_8c05fbf8(0x50004, 0, 0, 0);
        o->f10->f30 = 0;
        o->f24 = 2;
        return;
    }
    t2 = operation_8c09a640(4);
    if (t2 == 0) {
        return;
    }
    t9 = operation_8c034c7c((void *)(o->f20));
    v39 = (int)(t9 * 0x2c);
    v20 = (int)0;
    v32 = (int)((char *)o->f20 + 0x38);
    v33 = (int)(v39 + g_8c2f5b38);
    goto L_8c099990;
    v21 = (S_vv21 *)(v39 + g_8c2f5b38);
    v22 = (S_vv22 *)((char *)o->f20 + 0x38);
    v23 = (char *)v20;
L_8c099928:;
    if (!(2 > v21->f00)) {
        t10 = rand();
        v25 = (int)(int)((float)v21->f00 * 0.99f * ((float)t10 / 32768.0f));
        goto L_8c099974;
        v24 = (int)(int)((float)v21->f00 * 0.99f * ((float)t10 / 32768.0f));
L_8c099968:;
        v25 = (int)(v24 + 1);
        if ((v24 + 1) >= v21->f00) {
            v25 = (int)0;
        }
L_8c099974:;
        if (v25 == v22->f00) {
            v24 = (int)v25;
            goto L_8c099968;
        }
        t3 = call_8c0356ac((int)(v23), v25);
        if (t3 == 0) {
            v24 = (int)v25;
            goto L_8c099968;
        }
        v22->f00 = v25;
    }
    v20 = (int)(v23 + 1);
    v32 = (int)((int)v22 + 2);
    v33 = (int)((int)v21 + 2);
L_8c099990:;
    if (4 >= v20) {
        v21 = (S_vv21 *)v33;
        v22 = (S_vv22 *)v32;
        v23 = (char *)v20;
        goto L_8c099928;
    }
    t4 = rand();
    o->f2c = (unsigned char)(int)((float)(o->f2c + 0x40) + (float)t4 / 32768.0f * 128.0f);
    t5 = rand();
    o->f2e = (unsigned char)(int)((float)(o->f2e + 0x40) + (float)t5 / 32768.0f * 128.0f);
    t6 = rand();
    o->f30 = (unsigned char)(int)((float)(o->f30 + 0x40) + (float)t6 / 32768.0f * 128.0f);
    t7 = rand();
    o->f34 += (float)t7 / 32768.0f * 0.5f + 0.25f;
    if (!(1.0f > (o->f34 + ((float)t7 / 32768.0f * 0.5f + 0.25f)))) {
        o->f34 -= 1.0f;
    }
    t8 = rand();
    o->f38 += (float)t8 / 32768.0f * 0.5f + 0.25f;
    if (!(1.0f > (o->f38 + ((float)t8 / 32768.0f * 0.5f + 0.25f)))) {
        o->f38 -= 1.0f;
    }
    play_se_8c05fbf8(0x50001, 0, 0, 0);
    o->f28 = 0;
    o->f24 = 3;
    return;
L_8c099ac0:;
    o->f28 += 1;
    v37 = (float)((float)o->f28 / 45.0f);
    o->f20->f42 = (int)((float)(o->f2c - o->f20->f42) * v37 + (float)o->f20->f42);
    o->f20->f44 = (int)((float)(o->f2e - o->f20->f44) * v37 + (float)o->f20->f44);
    o->f20->f46 = (int)((float)(o->f30 - o->f20->f46) * v37 + (float)o->f20->f46);
    o->f20->f48 += (o->f34 - o->f20->f48) * v37;
    o->f20->f4c += (o->f38 - o->f20->f4c) * v37;
    if (o->f28 >= 0x2d && g_8c46ec14 == 2) {
        play_se_8c05fbf8(0x50002, 0, 0, 0);
        o->f24 = 1;
    }
}
