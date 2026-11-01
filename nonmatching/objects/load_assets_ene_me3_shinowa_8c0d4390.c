/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d4390
 * function: load_assets_ene_me3_shinowa_8c0d4390
 * language: c
 * reference size: 1072 bytes
 * compiled size: 1100 bytes (+2.6%)
 * differing lines: 258 of 425 reference instruction lines
 * differing bytes: 1024
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +28 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46fdb0 S_L8c46fdb0;
typedef struct S_L8c46fdc8 S_L8c46fdc8;
typedef struct S_c8c03ef88 S_c8c03ef88;
typedef struct S_c8c03ef88_4 S_c8c03ef88_4;
typedef struct Frame Frame;
typedef struct S_g8c46fda4 S_g8c46fda4;
typedef struct S_g8c46fdac S_g8c46fdac;
typedef struct S_g8c46fdac_42c S_g8c46fdac_42c;
typedef struct S_g8c46fdac_42c_8 S_g8c46fdac_42c_8;
typedef struct S_g8c46fdac_42c_c S_g8c46fdac_42c_c;
typedef struct S_g8c46fdac_430 S_g8c46fdac_430;
typedef struct S_g8c46fdac_430_4 S_g8c46fdac_430_4;
typedef struct S_g8c46fdb0 S_g8c46fdb0;
typedef struct S_vv17_0 S_vv17_0;
typedef struct S_vv19_0 S_vv19_0;
typedef struct S_vv27_0 S_vv27_0;
typedef struct S_vv33_0 S_vv33_0;
typedef struct S_vv38 S_vv38;
typedef struct S_vv40 S_vv40;
typedef struct S_vv5 S_vv5;
typedef struct S_x88080 S_x88080;
typedef struct S_x88384 S_x88384;
struct S_g8c46fdac {
    char unknown0[0x42c];
    S_g8c46fdac_42c *f42c;
    S_g8c46fdac_430 *f430;
};
struct S_g8c46fdac_42c {
    char unknown0[0x8];
    S_g8c46fdac_42c_8 *f08;
    S_g8c46fdac_42c_c *f0c;
};
struct S_vv5 {
    int f00;
    int f04;
};
struct S_L8c46fdb0 {
    char unknown0[0x4];
    int f04;
};
struct S_x88384 {
    Vector3 f00;
};
struct S_x88080 {
    Vector3 f00;
};
struct S_vv38 {
    char unknown0[0xc];
    float f0c;
    float f10;
};
struct S_c8c03ef88 {
    char unknown0[0x4];
    S_c8c03ef88_4 *f04;
};
struct S_c8c03ef88_4 {
    char unknown0[0x4];
    int f04;
};
struct S_L8c46fdc8 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_vv40 {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
struct S_g8c46fda4 {
    char unknown0[0xc];
    float f0c;
};
extern char g_8c3070ec[];
extern char g_8c3071b4[];
extern int operation_8c05bbf8(void);
extern int operation_8c059f44(void *, void *);
extern int operation_8c059f04(int);
extern int operator_new_8c18de4c(int);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
extern void operation_8c0d485c(int, float);
extern S_c8c03ef88 *call_8c03ef88(int, int);
extern int game_malloc_8c011ecc(int);
extern void call_8c0c6fd8(int, void *, S_vv40 *, float);
extern void call_8c118ea4(int, int, float, float, float);
extern void draw_grid_offset_rows(void *, void *, void *, int, void *, void *);
void load_assets_ene_me3_shinowa_8c0d4390(void)
{
    Frame frame;
    S_vv5 *v5;
    int v48;
    int v7;
    int v12;
    int v13;
    int v15;
    int v51;
    int v6;
    int v16;
    int v18;
    int v23;
    int v26;
    int v29;
    int v32;
    int v35;
    int v47;
    int t12;
    int v17;
    int v19;
    int v27;
    float v43;
    int v33;
    S_vv38 *v38;
    float v52;
    char *v39;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    S_c8c03ef88 *t9;
    S_c8c03ef88 *t10;
    S_c8c03ef88 *t11;
    S_vv40 *v40;
    int t13;
    int t14;
    int t15;
    *(float *)0x8c46fd80 = 0.0f;
    *(float *)0x8c46fd84 = 0.0f;
    *(float *)0x8c46fd88 = 0.0f;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        t2 = operation_8c059f44((void *)((void *)0x8c3070dc), (void *)((g_8c3071b4 + 0x136)));
        *(int *)0x8c46fdac = (int)(t2);
    } else {
        t3 = operation_8c059f04((int)((void *)0x8c3070dc));
        *(int *)0x8c46fdac = (int)(t3);
    }
    v5 = (S_vv5 *)(*(S_g8c46fdac **)0x8c46fdac)->f42c->f0c;
    v6 = (int)v5->f04;
    ((S_L8c46fdb0 *)0x8c46fdb0)->f04 = (int)(v6);
    t4 = operator_new_8c18de4c((int)(v6 * 0xc));
    *(int *)0x8c46fdb0 = (int)(t4);
    v12 = (int)0;
    goto L_8c0d444c;
    v7 = (int)0;
    do {
        *(Vector3 *)&((S_x88384 *)(*(int *)0x8c46fdb0 + v7 * 0xc))->f00 = *(Vector3 *)&((S_x88080 *)(v5->f00 + v7 * 0xc))->f00;
        v12 = (int)(v7 + 1);
L_8c0d444c:;
        v7 = (int)v12;
    } while (v6 > v12);
    v15 = (int)0;
    goto L_8c0d4474;
    v13 = (int)0;
    do {
        *(int *)((char *)((char *)*(S_g8c46fdb0 **)0x8c46fdb0 + 0x2c) + (v13 * 0xc)) = (int)(*(int *)((char *)((char *)*(S_g8c46fdb0 **)0x8c46fdb0 + 0x8) + (v13 * 0xc)));
        v15 = (int)(v13 + 1);
L_8c0d4474:;
        v13 = (int)v15;
    } while (3 > v15);
    v16 = (int)0;
    while (2 > v16) {
        v17 = (int)(v16 << 2);
        t5 = record24_8c17948c((int)(*(S_vv17_0 **)((char *)((char *)v17 + 0x0) + ((int)((void *)0x8c285854)))));
        *(int *)((char *)((char *)v17 + 0x0) + ((int)((void *)0x8c46fd8c))) = (int)(t5);
        v16 = (int)(v16 + 1);
    }
    v23 = (int)0;
    goto L_8c0d44be;
    v18 = (int)0;
    do {
        v19 = (int)(v18 << 2);
        t6 = record30_8c1794a0((int)(*(S_vv19_0 **)((char *)((char *)v19 + 0x0) + ((int)((void *)0x8c28585c)))));
        *(int *)((char *)((char *)v19 + 0x0) + ((int)((void *)0x8c46fd94))) = (int)(t6);
        v23 = (int)(v18 + 1);
L_8c0d44be:;
        v18 = (int)v23;
    } while (2 > v23);
    v29 = (int)0;
    goto L_8c0d44ea;
    v26 = (int)0;
    do {
        v27 = (int)(v26 << 2);
        t7 = block32_8c1794b4((int)(*(S_vv27_0 **)((char *)((char *)v27 + 0x0) + ((int)((void *)0x8c285864)))));
        *(int *)((char *)((char *)v27 + 0x0) + ((int)((void *)0x8c46fd9c))) = (int)(t7);
        v29 = (int)(v26 + 1);
L_8c0d44ea:;
        v26 = (int)v29;
    } while (2 > v29);
    v35 = (int)0;
    goto L_8c0d4516;
    v32 = (int)0;
    do {
        v33 = (int)(v32 << 2);
        t8 = record30_8c1794c8((int)(*(S_vv33_0 **)((char *)((char *)v33 + 0x0) + ((int)((void *)0x8c28586c)))));
        *(int *)((char *)((char *)v33 + 0x0) + ((int)((void *)0x8c46fda4))) = (int)(t8);
        v35 = (int)(v32 + 1);
L_8c0d4516:;
        v32 = (int)v35;
    } while (2 > v35);
    v38 = (S_vv38 *)*(S_g8c46fda4 **)0x8c46fda4;
    operation_8c0d485c(6, v38->f0c);
    operation_8c0d485c(3, v38->f10);
    *(float *)0x8c46fdbc = 0.0f;
    *(int *)0x8c46fdb8 = 0;
    *(float *)0x8c46fdc0 = 0.0f;
    *(float *)0x8c46fdc4 = 0.0f;
    v39 = (char *)(*(S_g8c46fdac **)0x8c46fdac)->f42c->f08;
    t9 = call_8c03ef88((int)(v39), 9);
    *(int *)0x8c46fdc8 = t9->f04->f04 + 4;
    t10 = call_8c03ef88((int)(v39), 0xd);
    ((S_L8c46fdc8 *)0x8c46fdc8)->f04 = t10->f04->f04 + 4;
    t11 = call_8c03ef88((int)(v39), 0x26);
    ((S_L8c46fdc8 *)0x8c46fdc8)->f08 = t11->f04->f04 + 4;
    v40 = (S_vv40 *)*(S_g8c46fdac_430_4 **)((char *)((char *)(*(S_g8c46fdac **)0x8c46fdac)->f430 + 0x4) + (*(int *)(g_8c3070ec + 0x44) << 3));
    t12 = game_malloc_8c011ecc(0xc);
    if (t12 != 0) {
        v43 = (float)(float)(unsigned int)(v40->f04 + -1);
        call_8c0c6fd8(t12, (void *)((*(S_g8c46fdac **)0x8c46fdac)->f42c->f08), v40, v43);
    }
    *(int *)0x8c46fdd4 = (int)(t12);
    v47 = (int)(*(S_g8c46fdac **)0x8c46fdac)->f42c->f08;
    (&frame)->f0c = 0.0f;
    (&frame)->f10 = 0.0f;
    (&frame)->f14 = 0.0f;
    (&frame)->f00 = -10.0f;
    (&frame)->f04 = 0.0f;
    (&frame)->f08 = 0.0f;
    v48 = (int)*(int *)((char *)((char *)(*(S_g8c46fdac **)0x8c46fdac)->f430 + 0x4) + (*(int *)(g_8c3070ec + 0x54) << 3));
    t13 = game_malloc_8c011ecc(0x18);
    if (t13 != 0) {
        call_8c118ea4(t13, 2, 16.0f, 26.0f, 0.7f);
    }
    *(int *)0x8c46fde0 = (int)(t13);
    draw_grid_offset_rows((void *)t13, (void *)v47, (void *)v48, 0x22, (void *)(&(&frame)->f0c), (void *)(&frame));
    (&frame)->f0c = 0.0f;
    (&frame)->f10 = 0.0f;
    (&frame)->f14 = 0.0f;
    v51 = (int)*(int *)((char *)((char *)(*(S_g8c46fdac **)0x8c46fdac)->f430 + 0x4) + (*(int *)(g_8c3070ec + 0x64) << 3));
    v52 = (float)(*(S_g8c46fda4 **)0x8c46fda4)->f0c;
    if (0.1f > (*(S_g8c46fda4 **)0x8c46fda4)->f0c) {
        v52 = (float)0.1f;
    }
    (&frame)->f00 = -10.0f;
    (&frame)->f04 = 0.0f;
    (&frame)->f08 = 0.0f;
    t14 = game_malloc_8c011ecc(0x18);
    if (t14 != 0) {
        call_8c118ea4(t14, 2, 6.0f, 14.0f, v52);
    }
    *(int *)0x8c46fdd8 = (int)(t14);
    draw_grid_offset_rows((void *)t14, (void *)v47, (void *)v51, 0x22, (void *)(&(&frame)->f0c), (void *)(&frame));
    (&frame)->f00 = 10.0f;
    (&frame)->f04 = 0.0f;
    (&frame)->f08 = 0.0f;
    t15 = game_malloc_8c011ecc(0x18);
    if (t15 != 0) {
        call_8c118ea4(t15, 2, 17.0f, 23.0f, v52);
    }
    *(int *)0x8c46fddc = (int)(t15);
    draw_grid_offset_rows((void *)t15, (void *)v47, (void *)v51, 0x15, (void *)(&(&frame)->f0c), (void *)(&frame));
}
