/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cdd68
 * function: load_assets_ene_dubchik_8c0cdd68
 * language: c
 * reference size: 848 bytes
 * compiled size: 856 bytes (+0.9%)
 * differing lines: 88 of 330 reference instruction lines
 * differing bytes: 172
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46fc2c S_L8c46fc2c;
typedef struct S_L8c46fc2c_4 S_L8c46fc2c_4;
typedef struct S_L8c46fc34 S_L8c46fc34;
typedef struct S_L8c46fc34_4 S_L8c46fc34_4;
typedef struct S_c8c03ef88 S_c8c03ef88;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_4 S_frame_4;
typedef struct S_frame_8 S_frame_8;
typedef struct S_g8c46fac0 S_g8c46fac0;
typedef struct S_g8c46fac0_42c S_g8c46fac0_42c;
typedef struct S_g8c46fac0_42c_8 S_g8c46fac0_42c_8;
typedef struct S_g8c46fc2c S_g8c46fc2c;
typedef struct S_g8c46fc34 S_g8c46fc34;
typedef struct S_vv18 S_vv18;
typedef struct S_vv18_42c S_vv18_42c;
typedef struct S_vv18_42c_8 S_vv18_42c_8;
typedef struct S_vv18_430 S_vv18_430;
typedef struct S_vv18_430_34 S_vv18_430_34;
typedef struct S_vv24 S_vv24;
typedef struct S_vv24_42c S_vv24_42c;
typedef struct S_vv24_42c_8 S_vv24_42c_8;
typedef struct S_vv24_430 S_vv24_430;
typedef struct S_vv24_430_34 S_vv24_430_34;
typedef struct S_vv30 S_vv30;
typedef struct S_vv30_42c S_vv30_42c;
typedef struct S_vv30_42c_8 S_vv30_42c_8;
typedef struct S_vv30_430 S_vv30_430;
typedef struct S_vv30_430_3c S_vv30_430_3c;
typedef struct S_vv35 S_vv35;
typedef struct S_vv35_42c S_vv35_42c;
typedef struct S_vv35_42c_8 S_vv35_42c_8;
typedef struct S_vv35_430 S_vv35_430;
typedef struct S_vv35_430_3c S_vv35_430_3c;
struct S_g8c46fac0 {
    char unknown0[0x42c];
    S_g8c46fac0_42c *f42c;
};
struct S_g8c46fac0_42c {
    char unknown0[0x8];
    S_g8c46fac0_42c_8 *f08;
    char unknownc[0xc];
    int f18;
    int f1c;
};
struct S_c8c03ef88 {
    int f00;
    char unknown4[0x2c];
    int f30;
};
struct S_vv18 {
    char unknown0[0x42c];
    S_vv18_42c *f42c;
    S_vv18_430 *f430;
};
struct S_vv18_42c {
    char unknown0[0x8];
    S_vv18_42c_8 *f08;
};
struct S_vv18_430 {
    char unknown0[0x34];
    S_vv18_430_34 *f34;
};
struct S_vv24 {
    char unknown0[0x42c];
    S_vv24_42c *f42c;
    S_vv24_430 *f430;
};
struct S_vv24_42c {
    char unknown0[0x8];
    S_vv24_42c_8 *f08;
};
struct S_vv24_430 {
    char unknown0[0x34];
    S_vv24_430_34 *f34;
};
struct S_L8c46fc2c {
    char unknown0[0x4];
    S_L8c46fc2c_4 *f04;
};
struct S_vv30 {
    char unknown0[0x42c];
    S_vv30_42c *f42c;
    S_vv30_430 *f430;
};
struct S_vv30_42c {
    char unknown0[0x8];
    S_vv30_42c_8 *f08;
};
struct S_vv30_430 {
    char unknown0[0x3c];
    S_vv30_430_3c *f3c;
};
struct S_L8c46fc34 {
    char unknown0[0x4];
    S_L8c46fc34_4 *f04;
};
struct S_vv35 {
    char unknown0[0x42c];
    S_vv35_42c *f42c;
    S_vv35_430 *f430;
};
struct S_vv35_42c {
    char unknown0[0x8];
    S_vv35_42c_8 *f08;
};
struct S_vv35_430 {
    char unknown0[0x3c];
    S_vv35_430_3c *f3c;
};
struct Frame {
    S_frame_0 *f00;
    S_frame_4 *f04;
    S_frame_8 *f08;
};
extern char g_8c306c54[];
extern int operation_8c05bbf8(void);
extern int operation_8c059f44(void *, int);
extern int game_malloc_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern int load_pvm_file_tls_8c118528(void *);
extern S_c8c03ef88 *call_8c03ef88(int, int);
extern void operation_8c08a548(void);
extern void initialize_vector_array(void *, void *);
extern void call_8c118ea4(int, int, float, float, float);
extern void draw_grid_selected_rows(void *, void *, void *, int, int);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
extern void call_8c0c2cc8(void *, void *);
void load_assets_ene_dubchik_8c0cdd68(void)
{
    Frame frame;
    char *v41;
    char *v42;
    char *v43;
    char *v44;
    int v13;
    float v14;
    S_vv18 *v18;
    int v19;
    float v20;
    S_vv24 *v24;
    int v25;
    float v26;
    S_vv30 *v30;
    int v31;
    float v32;
    S_vv35 *v35;
    char *v37;
    int v38;
    int v39;
    int t11;
    int v36;
    int t1;
    int t2;
    int v40;
    int t4;
    int t5;
    int t6;
    S_c8c03ef88 *t7;
    S_c8c03ef88 *t8;
    S_c8c03ef88 *t9;
    S_c8c03ef88 *t10;
    int t3;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    S_c8c03ef88 *t20;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        t2 = operation_8c059f44((void *)((void *)0x8c306a4c), (int)(g_8c306c54 + 0x18b));
        *(int *)0x8c46fac0 = (int)(t2);
    } else {
        t3 = game_malloc_8c011ecc(0x440);
        if (t3 != 0) {
            call_8c03d610(t3, 5, (void *)((void *)0x8c306a4c), 0, 0, 0);
        }
        *(int *)0x8c46fac0 = (int)(t3);
    }
    *(int *)0x8c46fac4 = (int)((*(S_g8c46fac0 **)0x8c46fac0)->f42c->f1c);
    t4 = operation_8c05bbf8();
    if (t4 != 0) {
        t5 = load_pvm_file_tls_8c118528((void *)((g_8c306c54 + 0x1a0)));
        *(int *)0x8c46fac8 = (int)(t5);
    } else {
        t6 = load_pvm_file_tls_8c118528((void *)((g_8c306c54 + 0x1b2)));
        *(int *)0x8c46fac8 = (int)(t6);
    }
    v41 = (char *)(*(S_g8c46fac0 **)0x8c46fac0)->f42c->f18;
    t7 = call_8c03ef88((int)(v41), 0x17);
    t7->f30 = 0;
    operation_8c08a548();
    v42 = (char *)(*(S_g8c46fac0 **)0x8c46fac0)->f42c->f08;
    t8 = call_8c03ef88((int)(v42), 0x15);
    *(S_c8c03ef88 **)0x8c46fc20 = t8;
    v43 = (char *)(*(S_g8c46fac0 **)0x8c46fac0)->f42c->f08;
    t9 = call_8c03ef88((int)(v43), 0x2a);
    *(S_c8c03ef88 **)0x8c46fc24 = t9;
    v44 = (char *)(*(S_g8c46fac0 **)0x8c46fac0)->f42c->f18;
    t10 = call_8c03ef88((int)(v44), 0x15);
    t10->f00 |= 8;
    t11 = game_malloc_8c011ecc(0xc);
    if (t11 != 0) {
        initialize_vector_array((void *)t11, (void *)((*(S_g8c46fac0 **)0x8c46fac0)->f42c->f08));
    }
    *(int *)0x8c46fc28 = (int)(t11);
    t12 = game_malloc_8c011ecc(0x18);
    if (t12 != 0) {
        v13 = (int)2;
        v14 = (float)1.0f;
        call_8c118ea4(t12, v13, 28.0f, 35.0f, v14);
    }
    *(int *)0x8c46fc2c = (int)(t12);
    v18 = (S_vv18 *)*(S_g8c46fac0 **)0x8c46fac0;
    draw_grid_selected_rows((void *)(*(S_g8c46fc2c **)0x8c46fc2c), (void *)(v18->f42c->f08), (void *)(v18->f430->f34), 0x1c, 0x24);
    t13 = game_malloc_8c011ecc(0x18);
    if (t13 != 0) {
        v19 = (int)2;
        v20 = (float)1.0f;
        call_8c118ea4(t13, v19, 36.0f, 40.0f, v20);
    }
    *(int *)0x8c46fc34 = (int)(t13);
    v24 = (S_vv24 *)*(S_g8c46fac0 **)0x8c46fac0;
    draw_grid_selected_rows((void *)(*(S_g8c46fc34 **)0x8c46fc34), (void *)(v24->f42c->f08), (void *)(v24->f430->f34), 0x2e, 0x32);
    t14 = game_malloc_8c011ecc(0x18);
    if (t14 != 0) {
        v25 = (int)2;
        v26 = (float)1.0f;
        call_8c118ea4(t14, v25, 30.0f, 38.0f, v26);
    }
    ((S_L8c46fc2c *)0x8c46fc2c)->f04 = (S_L8c46fc2c_4 *)t14;
    v30 = (S_vv30 *)*(S_g8c46fac0 **)0x8c46fac0;
    draw_grid_selected_rows((void *)(((S_L8c46fc2c *)0x8c46fc2c)->f04), (void *)(v30->f42c->f08), (void *)(v30->f430->f3c), 0x1c, 0x24);
    t15 = game_malloc_8c011ecc(0x18);
    if (t15 != 0) {
        v31 = (int)2;
        v32 = (float)1.0f;
        call_8c118ea4(t15, v31, 50.0f, 58.0f, v32);
    }
    ((S_L8c46fc34 *)0x8c46fc34)->f04 = (S_L8c46fc34_4 *)t15;
    v35 = (S_vv35 *)*(S_g8c46fac0 **)0x8c46fac0;
    draw_grid_selected_rows((void *)(((S_L8c46fc34 *)0x8c46fc34)->f04), (void *)(v35->f42c->f08), (void *)(v35->f430->f3c), 0x2e, 0x32);
    v36 = (int)0;
    while (2 > v36) {
        t16 = record24_8c17948c((int)(v36 + 0x1b));
        v37 = (char *)v36;
        v38 = (int)((int)(v37) << 2);
        *(int *)((char *)((char *)v38 + 0x0) + ((int)((void *)0x8c46faa0))) = (int)(t16);
        t17 = record30_8c1794a0((int)(v36 + 0x1b));
        *(int *)((char *)((char *)v38 + 0x0) + ((int)((void *)0x8c46faa8))) = (int)(t17);
        t18 = block32_8c1794b4((int)(v36 + 0x1b));
        *(int *)((char *)((char *)v38 + 0x0) + ((int)((void *)0x8c46fab0))) = (int)(t18);
        t19 = record30_8c1794c8((int)(v36 + 0x1b));
        *(int *)((char *)((char *)v38 + 0x0) + ((int)((void *)0x8c46fab8))) = (int)(t19);
        v36 = (int)(v36 + 1);
    }
    v39 = (int)0;
    v40 = (int)(*(S_g8c46fac0 **)0x8c46fac0)->f42c->f08;
    while (3 > v39) {
        t20 = call_8c03ef88(v40, (int)(*(short *)((char *)0x8c306c38 + (v39 << 1))));
        *(S_c8c03ef88 **)((char *)&(&frame)->f00 + (v39 << 2)) = t20;
        v39 = (int)(v39 + 1);
    }
    call_8c0c2cc8((void *)((&frame)->f00), (void *)((void *)0x8c46fb14));
    call_8c0c2cc8((void *)((&frame)->f04), (void *)((void *)0x8c46fb24));
    call_8c0c2cc8((void *)((&frame)->f08), (void *)((void *)0x8c46fb54));
}
