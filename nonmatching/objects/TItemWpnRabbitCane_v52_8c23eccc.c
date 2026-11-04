/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c23eccc
 * function: TItemWpnRabbitCane_v52_8c23eccc
 * language: c
 * reference size: 316 bytes
 * compiled size: 316 bytes (+0.0%)
 * differing lines: 26 of 105 reference instruction lines
 * differing bytes: 28
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order, constant loading;
 *   review found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * class header: src/include/classes/TItemWpnRabbitCane.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_13c_118 Arg0_13c_118;
typedef struct Arg0_1c8 Arg0_1c8;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x8];
    int f34;
    Arg0_38 *f38;
    char unknown3c[0xb0];
    int fec;
    char unknownf0[0x4c];
    Arg0_13c *f13c;
    char unknown140[0x2];
    short f142;
    char unknown144[0x84];
    Arg0_1c8 *f1c8;
    char unknown1cc[0x3c];
    short f208;
    char unknown20a[0x2a];
    float f234;
};
struct Arg0_13c {
    char unknown0[0x118];
    Arg0_13c_118 *f118;
};
extern int g_8c4689f0;
extern Object *g_8c469a40;
extern short g_8c2fd6e4;
extern void apply_resource_3827d8(void *);
extern void set_transform_node_callback(void *);
extern void set_fields_8c0751cc(void);
extern float operation_8c074dbc(void *);
extern void operation_8c075274(float);
extern void njPushMatrix_8c38ade4(void *);
extern void draw_tree_a702(void *, void *, float);
extern void njPopMatrixEx_8c38ad10(void);
extern void operation_8c074c98(void);
extern void operation_8c074d14(void);
extern void operation_8c075300(void);
extern void set_fields_8c075220(void);
extern void call_8c076fc8(Object *, int);
extern void operation_8c075df0();
void TItemWpnRabbitCane_v52_8c23eccc(Object *o)
{
    float t1;
    {
        Object *base = o;
        if (((base->f34 & 0x8000000)) == 0 && ((base->fec & 0x40)) == 0 && base->f1c8 != 0 && base->f38 != 0) {
            apply_resource_3827d8((void *)(base->f28));
            g_8c4689f0 = 0;
            g_8c469a40 = base;
            g_8c2fd6e4 = base->f208;
            set_transform_node_callback(operation_8c075df0);
            set_fields_8c0751cc();
            *(int *)0x8c575570 &= -0x11;
            t1 = operation_8c074dbc((void *)base);
            operation_8c075274(t1);
            njPushMatrix_8c38ade4((void *)(&*(int *)((char *)((char *)base->f13c->f118 + 0x0) + (base->f142 << 6))));
            draw_tree_a702((void *)(base->f38), (void *)(base->f1c8), base->f234);
            njPopMatrixEx_8c38ad10();
            operation_8c074c98();
            operation_8c074d14();
            operation_8c075300();
            set_fields_8c075220();
            g_8c4689f0 = 0;
            set_transform_node_callback(0);
            g_8c469a40 = 0;
            g_8c2fd6e4 = -1;
            call_8c076fc8(base, 1);
        }
    }
}
