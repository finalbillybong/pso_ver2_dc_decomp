/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c227e10
 * function: operation_8c227e10
 * language: c
 * reference size: 736 bytes
 * compiled size: 752 bytes (+2.2%)
 * differing lines: 388 of 304 reference instruction lines
 * differing bytes: 608
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +16 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c506168 S_L8c506168;
typedef struct Frame Frame;
typedef struct S_frame_10 S_frame_10;
typedef struct S_vv32 S_vv32;
typedef struct S_vv33 S_vv33;
typedef struct S_x3952 S_x3952;
typedef struct S_x41008 S_x41008;
struct Frame {
    int f00;
    char unknown4[0xc];
    S_frame_10 *f10;
};
struct S_x3952 {
    int f00;
    int f04;
    int f08;
    int f0c;
};
struct S_L8c506168 {
    char unknown0[0xc];
    int f0c;
};
struct S_x41008 {
    int f00;
    int f04;
    int f08;
    int f0c;
};
struct S_vv32 {
    float f00;
};
struct S_vv33 {
    float f00;
};
extern S_L8c506168 g_8c506168;
extern char g_8c2e1a04[];
extern char gc_8c506168[];
extern char g_8c50616c[];
extern char g_8c506174[];
extern float njCos_8c38c154(void);
extern float njSin_8c37eb0c(int);
extern int operation_8c227db4(int, unsigned int, int);
extern void backup_render_state(void);
extern void restore_child_blend(void);
extern void reset_state_8c391c94(void);
extern void call_8c38d81c(int, int, int);
extern void reset_state_8c391cc4(void);
extern void restore_render_state(void);
void operation_8c227e10(int a0, int a1, float f0, float f1)
{
    Frame frame;
    int v1;
    int v34;
    int v31;
    int v2;
    char *v3;
    int v30;
    char *v10;
    S_vv32 *v32;
    S_vv33 *v33;
    float v8;
    int v9;
    float v14;
    float v35;
    int v36;
    int v18;
    int v20;
    float v24;
    float v37;
    float v21;
    float v11;
    int v28;
    int v19;
    int v29;
    float t1;
    float t2;
    int t3;
    int t4;
    float t5;
    int t6;
    int t7;
    float t8;
    (&frame)->f00 = 0;
    v1 = (int)0;
    v34 = (int)(v1 * 0x30 + g_8c2e1a04);
    v10 = (char *)((S_x3952 *)(v34 + v31))->f0c;
    while (v1 != 6) {
        v2 = (int)(&frame)->f00;
        (&frame)->f10 = (S_frame_10 *)(g_8c506174 + v1 * 0x30);
        v3 = (char *)v2;
        while ((int)(v3) != 3) {
            v30 = (int)((S_x3952 *)(v34 + v31))->f04;
            v31 = (int)((int)(v3) << 4);
            ((S_x41008 *)(v1 * 0x30 + gc_8c506168 + v31))->f00 = (int)(((S_x3952 *)(v34 + v31))->f00);
            ((S_x41008 *)(v1 * 0x30 + gc_8c506168 + v31))->f04 = (int)(v30);
            ((S_x41008 *)(v1 * 0x30 + gc_8c506168 + v31))->f08 = (int)(((S_x3952 *)(v34 + v31))->f08);
            ((S_x41008 *)(v1 * 0x30 + gc_8c506168 + v31))->f0c = (int)(v10);
            v32 = (S_vv32 *)(v1 * 0x30 + gc_8c506168 + v31);
            v32->f00 += f0;
            v33 = (S_vv33 *)(g_8c50616c + v1 * 0x30 + ((int)(v3) << 4));
            v33->f00 += f1;
            if (v3 != 0) {
                *(int *)((char *)((char *)(&frame)->f10 + 0x0) + ((int)(v3) << 4)) = a0;
            }
            v3 = (char *)(v3 + 1);
        }
        v1 = (int)(v1 + 1);
    }
    v8 = (float)(float)(unsigned int)(a1 << 4);
    v9 = (int)(int)(v8 * 65536.0f / 360.0f);
    t5 = njCos_8c38c154();
    v11 = (float)(f1 + t5 * 23.0f);
    t1 = njSin_8c37eb0c((int)(v9 + 0x8000));
    v14 = (float)(float)(unsigned int)(unsigned char)a0;
    v35 = (float)(v14 * (t1 + 1.0f));
    v18 = (int)(unsigned int)v35;
    if ((unsigned int)(unsigned int)v35 > (unsigned int)0xff) {
        v18 = (int)0xff;
    }
    t7 = operation_8c227db4(a0, (unsigned int)0xff00, (int)(v9 + 0x8000));
    t6 = operation_8c227db4(a0, (unsigned int)0xff0000, (int)(v9 + 0x8000));
    v36 = (int)(a0 & -0x1000000);
    v19 = (int)(v36 | t6 | t7 | (unsigned char)v18);
    v20 = (int)(v9 + 0x8000);
    t8 = ((float (*)(int))njCos_8c38c154)(v20);
    v21 = (float)(f1 + t8 * 23.0f);
    t2 = njSin_8c37eb0c((int)(v20 + 0x8000));
    v24 = (float)(float)(unsigned int)(unsigned char)a0;
    v37 = (float)(v24 * (t2 + 1.0f));
    v28 = (int)(unsigned int)v37;
    if ((unsigned int)(unsigned int)v37 > (unsigned int)0xff) {
        v28 = (int)0xff;
    }
    t4 = operation_8c227db4(a0, (unsigned int)0xff00, (int)(v20 + 0x8000));
    t3 = operation_8c227db4(a0, (unsigned int)0xff0000, (int)(v20 + 0x8000));
    *(float *)(gc_8c506168 + 0x14) = v21;
    *(float *)(gc_8c506168 + 0x54) = v11;
    *(float *)(gc_8c506168 + 0x74) = v11;
    *(float *)(gc_8c506168 + 0x84) = v11;
    *(float *)(gc_8c506168 + 0xa4) = v11;
    *(float *)(gc_8c506168 + 0xe4) = v21;
    *(float *)(gc_8c506168 + 0x104) = v21;
    *(float *)(gc_8c506168 + 0x114) = v21;
    *(int *)(gc_8c506168 + 0x1c) = v36 | t3 | t4 | (unsigned char)v28;
    *(int *)(gc_8c506168 + 0x5c) = (int)(v19);
    *(int *)(gc_8c506168 + 0x7c) = (int)(v19);
    *(int *)(gc_8c506168 + 0x8c) = (int)(v19);
    *(int *)(gc_8c506168 + 0xac) = (int)(v19);
    *(int *)(gc_8c506168 + 0xec) = v36 | t3 | t4 | (unsigned char)v28;
    *(int *)(gc_8c506168 + 0x10c) = v36 | t3 | t4 | (unsigned char)v28;
    *(int *)(gc_8c506168 + 0x11c) = v36 | t3 | t4 | (unsigned char)v28;
    backup_render_state();
    restore_child_blend();
    reset_state_8c391c94();
    v29 = (int)0;
    while (v29 != 6) {
        call_8c38d81c((int)(v29 * 0x30 + gc_8c506168), 3, 1);
        v29 = (int)(v29 + 1);
    }
    reset_state_8c391cc4();
    restore_render_state();
}
