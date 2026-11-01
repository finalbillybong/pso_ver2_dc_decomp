/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09b5c0
 * function: operation_8c09b5c0
 * language: c
 * reference size: 556 bytes
 * compiled size: 556 bytes (+0.0%)
 * differing lines: 38 of 216 reference instruction lines
 * differing bytes: 51
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46eb3c S_L8c46eb3c;
typedef struct S_L8c46eb8c S_L8c46eb8c;
typedef struct S_L8c46ebdc S_L8c46ebdc;
typedef struct S_g8c460900 S_g8c460900;
typedef struct S_g8c46ec0c S_g8c46ec0c;
typedef struct S_g8c46ec0c_0 S_g8c46ec0c_0;
typedef struct S_g8c46ec0c_0_0 S_g8c46ec0c_0_0;
typedef struct S_g8c46ec10 S_g8c46ec10;
typedef struct S_g8c46ec10_42c S_g8c46ec10_42c;
typedef struct Object Object;
typedef struct Arg0_134 Arg0_134;
typedef struct Arg0_138 Arg0_138;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_10 S_vv3_10;
typedef struct S_vv3_14 S_vv3_14;
typedef struct S_vv3_18 S_vv3_18;
typedef struct S_vv4 S_vv4;
struct S_g8c46ec10 {
    int f00;
    char unknown4[0x428];
    S_g8c46ec10_42c *f42c;
};
struct Object {
    char unknown0[0x38];
    int f38;
    char unknown3c[0xf8];
    Arg0_134 *f134;
    Arg0_138 *f138;
    int f13c;
};
struct S_vv3 {
    char unknown0[0x10];
    S_vv3_10 *f10;
    S_vv3_14 *f14;
    S_vv3_18 *f18;
};
struct S_vv4 {
    char unknown0[0x3e];
    short f3e;
    short f40;
};
struct S_L8c46eb3c {
    char unknown0[0x4];
    int f04;
};
struct S_L8c46eb8c {
    char unknown0[0x4];
    int f04;
};
struct S_L8c46ebdc {
    char unknown0[0x4];
    int f04;
};
struct S_g8c46ec0c {
    S_g8c46ec0c_0 *f00;
};
extern int g_8c41cb3c;
extern S_g8c460900 *g_8c460900;
extern int g_8c46b040;
extern int g_8c46eb30;
extern int g_8c46eb34;
extern int g_8c46eb38;
extern int g_8c46ec04;
extern S_g8c46ec0c *g_8c46ec0c;
extern S_g8c46ec10 *g_8c46ec10;
extern S_L8c46eb3c g_8c46eb3c;
extern S_L8c46eb8c g_8c46eb8c;
extern S_L8c46ebdc g_8c46ebdc;
extern char g_8c2f5b38[];
extern char g_8c469ee8[];
extern char g_8c46a208[];
extern void operation_8c09b198(void);
extern int operation_8c034c7c(void *);
extern int call_8c09b228(Object *, void *, void *, void *, int, int);
extern int operation_8c09ae10(void *, void *);
extern void operation_8c09b3b8(void);
extern void operation_8c01d074(int, int);
extern void operation_8c09b34c(void);
extern void call_8c09bf94(int);
void operation_8c09b5c0(Object *o)
{
    int v1;
    S_vv3 *v3;
    S_vv4 *v4;
    char *v2;
    int v13;
    int v15;
    int v19;
    int v21;
    char *v11;
    int v12;
    char *v17;
    int v18;
    int t1;
    int t2;
    int t3;
    int t4;
    v1 = (int)(((g_8c46ec10->f00 & 0x400)) != 0);
    if (v1 == 0 || o->f13c == 0) {
        return;
    }
    operation_8c09b198();
    v2 = (char *)g_8c460900;
    t4 = operation_8c034c7c((void *)v2);
    g_8c46ec04 = 1;
    v3 = (S_vv3 *)(t4 * 0x2c + g_8c2f5b38);
    v13 = 0;
    v15 = v13 + 1;
    o->f38 = (int)(*(int *)((char *)((char *)g_8c46ec10->f42c + 0x8) + (v13 << 4)));
    t1 = call_8c09b228(o, (void *)((void *)&g_8c46eb34), (void *)(v3->f14), (void *)((void *)&g_8c46eb8c), 4, v15);
    t2 = call_8c09b228(o, (void *)((void *)&g_8c46eb30), (void *)(v3->f10), (void *)((void *)&g_8c46eb3c), 4, t1);
    call_8c09b228(o, (void *)((void *)&g_8c46eb38), (void *)(v3->f18), (void *)((void *)&g_8c46ebdc), 3, t2);
    operation_8c034c7c((void *)v2);
    v4 = (S_vv4 *)g_8c460900;
    v21 = v4->f40 << 3;
    if (*(int *)((char *)&g_8c46eb3c + v21) == 1) {
        g_8c46eb30 = (int)(*(int *)((char *)&g_8c46eb3c.f04 + v21));
    }
    if (*(int *)((char *)&g_8c46eb8c + v21) == 1) {
        g_8c46eb34 = (int)(*(int *)((char *)&g_8c46eb8c.f04 + v21));
    }
    v21 = v4->f3e << 3;
    if (*(int *)((char *)&g_8c46ebdc + v21) == 1) {
        g_8c46eb38 = (int)(*(int *)((char *)&g_8c46ebdc.f04 + v21));
    }
    t3 = operation_8c09ae10((void *)(o->f134), (void *)(o->f138));
    g_8c46ec0c = (S_g8c46ec0c *)(int)(t3);
    v11 = (char *)o->f38;
    operation_8c09b3b8();
    operation_8c01d074((int)(v11), (int)((void *)0x8c46a000));
    v12 = (int)0x208;
    for (v13 = 0; 7 > v13; v13++) {
        operation_8c01d074((int)(*(S_g8c46ec0c_0_0 **)((char *)((char *)g_8c46ec0c->f00 + 0x0) + (v13 << 2))), (int)(v13 * v12 + g_8c46a208));
    }
    v17 = (char *)g_8c46eb38;
    operation_8c09b34c();
    operation_8c01d074((int)(v17), (int)((void *)0x8c469ec0));
    v18 = (v4->f3e + 1) << 2;
    for (v19 = 0; 7 > v19; v19++) {
        operation_8c01d074((int)(*(S_g8c46ec0c_0_0 **)((char *)((char *)*(S_g8c46ec0c_0 **)((char *)&g_8c46ec0c->f00 + v18) + 0x0) + (v19 << 2))), (int)(v19 * 0x28 + g_8c469ee8));
    }
    call_8c09bf94((int)((int)g_8c460900 + 0x48));
    g_8c41cb3c = 0;
    g_8c46b040 = 1;
}
