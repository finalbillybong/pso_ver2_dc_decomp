/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b3dbc
 * function: operation_8c1b3dbc
 * language: c
 * reference size: 460 bytes
 * compiled size: 460 bytes (+0.0%)
 * differing lines: 114 of 196 reference instruction lines
 * differing bytes: 133
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
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_0_0 Arg0_0_0;
typedef struct Arg0_0_0_8 Arg0_0_0_8;
typedef struct Arg0_0_0_c Arg0_0_0_c;
typedef struct Arg0_0_430 Arg0_0_430;
typedef struct Arg0_0_430_4 Arg0_0_430_4;
typedef struct Arg0_480 Arg0_480;
typedef struct S_x28304 S_x28304;
typedef struct S_x30064_0 S_x30064_0;
typedef struct S_x37376_0 S_x37376_0;
typedef struct S_x38496 S_x38496;
typedef struct S_x40064 S_x40064;
struct Object {
    char unknown0[0x3dc];
    int f3dc;
    char unknown3e0[0x4];
    int f3e4;
    char unknown3e8[0x98];
    Arg0_480 *f480;
};
struct Arg0_0 {
    char unknown0[0x430];
    Arg0_0_430 *f430;
};
struct S_x28304 {
    float f00;
};
struct S_x40064 {
    float f00;
};
struct S_x38496 {
    float f00;
};
typedef struct Tbl6c {
    int f00;
    int f04;
    int f08[6];
} Tbl6c;
extern Tbl6c g_8c326b6c;
extern void call_8c3827d8(void *);
extern void set_effect_color_state(void);
extern void operation_8c161c78(void *);
extern void draw_tree_a702(void *, void *, float);
extern void operation_8c161ce4(void *);
extern void restore_effect_color_state(void);
extern void call_8c3addea(void *, void *, float);
void operation_8c1b3dbc(Object *o)
{
    int v4;
    int v5;
    int v1;
    int v2;
    int v6;
    int v3;
    v1 = (int)0x398;
    v2 = (int)0x42c;
    v3 = (int)0x3e8;
    v4 = (int)0;
    while (6 > v4) {
        v6 = v4 << 2;
        call_8c3827d8((void *)(*(Arg0_0_0_c **)((char *)((char *)*(Arg0_0_0 **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x0) + (v2)) + 0xc) + (*(int *)((char *)((char *)v6 + 0x0) + ((int)((void *)0x8c326b54))) << 4))));
        switch (v4) {
        case 2:
        case 3:
        case 4:
            v5 = v4 - 2;
            if (o->f3dc != 0) {
                set_effect_color_state();
            }
            v5 <<= 2;
            operation_8c161c78((void *)(*(S_x30064_0 **)((char *)((char *)((int)o + v2) + 0x0) + (v5))));
            ((void (*)(void *, void *, float))0x8c0c3964)((void *)(*(Arg0_0_0_8 **)((char *)((char *)*(Arg0_0_0 **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x0) + (v2)) + 0x8) + (*(int *)((char *)((char *)v6 + 0x0) + ((int)((void *)0x8c326b54))) << 4))), (void *)(*(Arg0_0_430_4 **)((char *)((char *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)))->f430 + 0x4) + (*(int *)((char *)&*(int *)((char *)g_8c326b6c.f08 + (o->f3e4 << 5)) + (v6)) << 3))), ((S_x28304 *)((int)o + v3))->f00);
            operation_8c161ce4((void *)(*(S_x37376_0 **)((char *)((char *)((int)o + v2) + 0x0) + (v5))));
            if (o->f3dc == 0) {
                goto L_8c1b3f20;
            }
            restore_effect_color_state();
            break;
        case 5:
            operation_8c161c78((void *)(o->f480));
            ((void (*)(void *, void *, float))0x8c0c3964)((void *)(*(Arg0_0_0_8 **)((char *)((char *)*(Arg0_0_0 **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x0) + (v2)) + 0x8) + (*(int *)((char *)((char *)v6 + 0x0) + ((int)((void *)0x8c326b54))) << 4))), (void *)(*(Arg0_0_430_4 **)((char *)((char *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)))->f430 + 0x4) + (*(int *)((char *)&*(int *)((char *)g_8c326b6c.f08 + (o->f3e4 << 5)) + (v6)) << 3))), ((S_x40064 *)((int)o + v3))->f00);
            operation_8c161ce4((void *)(o->f480));
            break;
        default:
            ((void (*)(void *, void *, float))0x8c3addea)((void *)(*(Arg0_0_0_8 **)((char *)((char *)*(Arg0_0_0 **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x0) + (v2)) + 0x8) + (*(int *)((char *)((char *)v6 + 0x0) + ((int)((void *)0x8c326b54))) << 4))), (void *)(*(Arg0_0_430_4 **)((char *)((char *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)))->f430 + 0x4) + (*(int *)((char *)&*(int *)((char *)g_8c326b6c.f08 + (o->f3e4 << 5)) + (v6)) << 3))), ((S_x38496 *)((int)o + v3))->f00);
            break;
        }
L_8c1b3f20:;
        v4 = (int)(v4 + 1);
    }
    o->f3dc = 0;
}
