/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b3284
 * function: operation_8c1b3284
 * language: c
 * reference size: 484 bytes
 * compiled size: 500 bytes (+3.3%)
 * differing lines: 72 of 205 reference instruction lines
 * differing bytes: 440
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +16 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_vv12 S_vv12;
typedef struct S_vv2 S_vv2;
typedef struct S_vv29 S_vv29;
typedef struct S_vv31 S_vv31;
typedef struct S_vv7 S_vv7;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct S_vv2 {
    Vector3 f00;
};
struct S_vv7 {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
struct S_vv12 {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct Frame {
    Block_frame_0 f00;
    float f0c;
    float f10;
    float f14;
};
struct S_vv29 {
    Vector3 f00;
};
struct S_vv31 {
    float f00;
    char unknown4[0x4];
    float f08;
};
extern Vector3 g_8c326780;
extern S_g8c418248 *g_8c418248;
extern S_c8c021ef8 *lookup_low_id(int);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
extern int rand(void);
extern void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern float njScalor_8c37e480(Frame *);
extern float call_8c38d7d8(void *, int);
void operation_8c1b3284(int a0, float f0)
{
    Frame frame;
    S_vv2 *v2;
    int v1;
    int v6;
    int v5;
    int v10;
    int v25;
    int v39;
    int v44;
    char *v14;
    int v20;
    int v38;
    int v41;
    int v9;
    char *v11;
    int v19;
    char *v40;
    int v43;
    S_vv7 *v7;
    S_vv12 *v12;
    int v18;
    S_vv31 *v31;
    int v56;
    int v8;
    int v13;
    int v17;
    int v30;
    int v55;
    S_vv29 *v29;
    int v68;
    int v32;
    int v67;
    S_c8c021ef8 *t1;
    float t2;
    float t3;
    int t4;
    int t5;
    float t6;
    float t7;
    v5 = (int)(void *)0x8c4e2840;
    v6 = (int)0;
    goto L_8c1b32b6;
    v1 = (int)0;
    v2 = (S_vv2 *)(void *)0x8c4e2840;
L_8c1b32a6:;
    *(Vector3 *)&v2->f00 = *(Vector3 *)&g_8c326780;
    v5 = (int)((int)v2 + 0xc);
    v6 = (int)(v1 + 1);
L_8c1b32b6:;
    if (0x40 > v6) {
        v1 = (int)v6;
        v2 = (S_vv2 *)v5;
        goto L_8c1b32a6;
    }
    v7 = (S_vv7 *)(void *)0x8c4e2840;
    v8 = (int)0;
    t1 = lookup_low_id((int)g_8c418248);
    v17 = (int)v8;
    v18 = (int)v7;
    if (t1 != 0) {
        v9 = (int)0;
        v7->f00 = t1->f3c;
        v7->f08 = t1->f44;
        v10 = (int)0x2000;
        v17 = (int)(v8 + 1);
        v18 = (int)((int)v7 + 0xc);
        v19 = (int)v9;
        v20 = (int)v9;
        goto L_8c1b3322;
        v11 = (char *)v9;
        v12 = (S_vv12 *)((int)v7 + 0xc);
        v13 = (int)(v8 + 1);
        v14 = (char *)v9;
L_8c1b32ea:;
        t2 = njSin_8c37eb0c((int)(v11));
        v12->f00 = t1->f3c + t2 * 40.0f;
        t3 = njCos_8c38c154((int)(v11));
        v12->f08 = t1->f44 + t3 * 40.0f;
        v17 = (int)(v13 + 1);
        v18 = (int)((int)v12 + 0xc);
        v19 = (int)(v11 + v10);
        v20 = (int)(v14 + 1);
L_8c1b3322:;
        if (8 > v20) {
            v11 = (char *)v19;
            v12 = (S_vv12 *)v18;
            v13 = (int)v17;
            v14 = (char *)v20;
            goto L_8c1b32ea;
        }
        v25 = (int)v10;
    }
    v67 = (int)0;
    v68 = (int)a0;
    goto L_8c1b33fc;
    v29 = (S_vv29 *)a0;
    v30 = (int)v17;
    v31 = (S_vv31 *)v18;
    v32 = (int)0;
L_8c1b332c:;
    t4 = rand();
    (&frame)->f0c = ((float)t4 / 32768.0f - 0.5f) * 460.0f;
    t5 = rand();
    (&frame)->f14 = ((float)t5 / 32768.0f - 0.5f) * 460.0f;
    (&frame)->f10 = 0.0f;
    v55 = (int)v30;
    v56 = (int)v31;
    v43 = (int)v19;
    v38 = (int)v20;
    v44 = (int)v25;
    if (52900.0f > ((&frame)->f0c * (&frame)->f0c + (&frame)->f14 * (&frame)->f14)) {
        if (v29 != 0) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&v29->f00;
            vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (void *)(&(&frame)->f0c));
            (&frame)->f00.f04 = 0.0f;
            t6 = njScalor_8c37e480((Frame *)((&frame)));
            v55 = (int)v30;
            v56 = (int)v31;
            if (!(t6 > f0)) {
                goto L_8c1b33fa;
            }
        }
        v38 = (int)0;
        v43 = (int)v38;
        v44 = (int)(void *)0x8c4e2840;
        goto L_8c1b33dc;
        v39 = (int)(void *)0x8c4e2840;
        v40 = (char *)v38;
L_8c1b33c2:;
        t7 = call_8c38d7d8((void *)(&(&frame)->f0c), v39);
        if (!(t7 > 12.5f)) {
            v41 = (int)1;
            v43 = (int)v40;
            v38 = (int)v41;
            v44 = (int)v39;
        } else {
            v43 = (int)(v40 + 1);
            v44 = (int)(v39 + 0xc);
L_8c1b33dc:;
            if (v30 > v43) {
                v39 = (int)v44;
                v40 = (char *)v43;
                goto L_8c1b33c2;
            }
        }
        v55 = (int)v30;
        v56 = (int)v31;
        if (v38 == 0) {
            v31->f00 = (&frame)->f0c;
            v31->f08 = (&frame)->f14;
            v55 = (int)(v30 + 1);
            v56 = (int)((int)v31 + 0xc);
        }
    }
    v19 = (int)v43;
    v20 = (int)v38;
    v25 = (int)v44;
L_8c1b33fa:;
    v67 = (int)(v32 + 1);
    v68 = (int)v29;
    v17 = (int)v55;
    v18 = (int)v56;
L_8c1b33fc:;
    if (0x100 > v67 && 0x40 > v17) {
        v29 = (S_vv29 *)v68;
        v30 = (int)v17;
        v31 = (S_vv31 *)v18;
        v32 = (int)v67;
        goto L_8c1b332c;
    }
}
