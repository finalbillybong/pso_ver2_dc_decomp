/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b13f4
 * function: operation_8c1b13f4
 * language: c
 * reference size: 388 bytes
 * compiled size: 388 bytes (+0.0%)
 * differing lines: 94 of 152 reference instruction lines
 * differing bytes: 114
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, instruction or operand order; review found and fixed behaviour defects
 *   of the generator draft; not proven equivalent to the original
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
typedef struct Arg0_44c Arg0_44c;
typedef struct S_x6656 S_x6656;
typedef struct S_x68736 S_x68736;
struct Object {
    char unknown0[0x3c8];
    float f3c8;
    char unknown3cc[0x4];
    int f3d0;
    char unknown3d4[0x18];
    int f3ec;
    char unknown3f0[0x5c];
    Arg0_44c *f44c;
};
struct Arg0_0 {
    char unknown0[0x430];
    Arg0_0_430 *f430;
};
struct S_x68736 {
    float f00;
};
struct S_x6656 {
    float f00;
};
extern char g_8c326594[];
extern void call_8c3827d8(void *);
extern void call_8c397c90(void *, float, float);
extern void operation_8c161c78(void *);
extern void draw_tree_a702(void *, void *, float);
extern void set_transform_node_callback_wrapper_2_8c161ce4(void *);
extern void set_effect_color_state(void);
extern void call_8c3addea(void *, void *, float);
extern void restore_effect_color_state(void);
void operation_8c1b13f4(Object *o)
{
    int v5;
    int v1;
    int v2;
    int v4;
    char *v6;
    int v7;
    int v3;
    v1 = (int)0x398;
    v2 = (int)0x42c;
    v3 = (int)0x3d8;
    v4 = (int)0x3ec;
    v5 = (int)0;
    while (2 > v5) {
        v6 = (char *)v5;
        v7 = (int)((int)(v6) << 2);
        call_8c3827d8((void *)(*(Arg0_0_0_c **)((char *)((char *)*(Arg0_0_0 **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x0) + (v2)) + 0xc) + (*(int *)((char *)((char *)v7 + 0x0) + ((int)((void *)0x8c32658c))) << 4))));
        switch (v5) {
        case 1:
            *(int *)0x8c575570 |= 0x20000;
            call_8c397c90((void *)((void *)0x8c575570), 0.0f, o->f3c8);
            operation_8c161c78((void *)(o->f44c));
            draw_tree_a702((void *)(*(Arg0_0_0_8 **)((char *)((char *)*(Arg0_0_0 **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x0) + (v2)) + 0x8) + (*(int *)((char *)((char *)v7 + 0x0) + ((int)((void *)0x8c32658c))) << 4))), (void *)(*(Arg0_0_430_4 **)((char *)((char *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)))->f430 + 0x4) + (*(int *)((char *)&*(int *)((char *)((char *)g_8c326594 + 8) + (o->f3d0 << 4)) + (v7)) << 3))), ((S_x68736 *)((int)o + v3))->f00);
            set_transform_node_callback_wrapper_2_8c161ce4((void *)(o->f44c));
            *(int *)0x8c575570 &= -0x20001;
            break;
        default:
            if (*(int *)((char *)((char *)o + 0x0) + (v4)) != 0) {
                set_effect_color_state();
            }
            call_8c3addea((void *)(*(Arg0_0_0_8 **)((char *)((char *)*(Arg0_0_0 **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x0) + (v2)) + 0x8) + (*(int *)((char *)((char *)v7 + 0x0) + ((int)((void *)0x8c32658c))) << 4))), (void *)(*(Arg0_0_430_4 **)((char *)((char *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)))->f430 + 0x4) + (*(int *)((char *)&*(int *)((char *)((char *)g_8c326594 + 8) + (o->f3d0 << 4)) + (v7)) << 3))), ((S_x6656 *)((int)o + v3))->f00);
            if (*(int *)((char *)((char *)o + 0x0) + (v4)) != 0) {
                restore_effect_color_state();
            }
            break;
        }
        v5 = (int)(v5 + 1);
    }
    o->f3ec = 0;
}
