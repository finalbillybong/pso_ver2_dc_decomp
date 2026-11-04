/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0eb0ec
 * function: operation_8c0eb0ec
 * language: c
 * reference size: 1236 bytes
 * compiled size: 1234 bytes (-0.2%)
 * differing lines: 294 of 453 reference instruction lines
 * differing bytes: 100
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, instruction or operand order, constant loading; review found and fixed
 *   behaviour defects of the generator draft; not proven equivalent to the original; compiled size
 *   differs from the reference by -2 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_8c S_g8c467180_8c;
typedef struct S_g8c470360 S_g8c470360;
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
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
};
struct S_g8c467180 {
    char unknown0[0x8c];
    S_g8c467180_8c *f8c;
};
struct S_g8c467180_8c {
    char unknown0[0x1c];
    int f1c;
    char unknown20[0x4];
    int f24;
    char unknown28[0x28];
    int f50;
    int f54;
    int f58;
    char unknown5c[0x14];
    int f70;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern int g_8c461c00;
extern S_g8c467180 *g_8c467180;
extern S_g8c470360 *g_8c470360;
extern char g_8c470365;
extern S_L8c41cba0 g_8c41cba0;
extern void call_8c01daf0(void);
extern void operation_8c01dea8(void);
extern void call_8c36a880(void);
extern int call_8c36a868(void);
extern void operation_8c04b230(float, float, int, int);
extern void call_8c380ab8(int, int);
extern void call_8c3827d8(void *);
extern void sq_select_8c38aeb4(int);
extern void sq_header_8c38af22(int, int);
extern void sq_quad_8c38b09e(Frame *, float);
extern void sq_flush_8c38af12(void);
extern int operation_8c01d8a8(void *, int);
extern void time_hierarchy_update(void *);
extern void time_hierarchy_visit(void *);
extern void TObject_debug_describe_8c033330(void *);
extern void hierarchy_output_cycle(void *);
extern void process_file_task_queue(void);
extern void call_8c05f9e4(void);
extern void operation_8c17e194(void);
extern void wait_vsync_and_flip_8c380516(void);
int operation_8c0eb0ec(int a0)
{
    Frame frame;
    unsigned int count;
    int color;
    int p20;
    int p40;
    int keys;
    int m200;
    int m400;
    int st;
    g_8c470365 = a0;
    (&frame)->f00 = 0.0f;
    p20 = (int)&(&frame)->f20;
    p40 = (int)&(&frame)->f40;
    (&frame)->f04 = 326.0f;
    keys = (int)((char *)((&g_8c41cba0)) + 0x110);
    count = 0;
    (&frame)->f08 = 639.0f;
    (&frame)->f0c = 375.0f;
    (&frame)->f10 = 0.50390625f;
    color = -0x1000000;
    (&frame)->f14 = 0.65625f;
    m400 = 0x400;
    m200 = 0x200;
    (&frame)->f18 = 0.62890625f;
    (&frame)->f1c = 0.84765625f;
    (&frame)->f20 = 0.0f;
    (&frame)->f24 = 375.0f;
    (&frame)->f28 = 639.0f;
    (&frame)->f2c = 424.0f;
    (&frame)->f30 = 0.71875f;
    (&frame)->f34 = 0.65625f;
    (&frame)->f38 = 0.84375f;
    (&frame)->f3c = 0.84765625f;
    (&frame)->f40 = 496.0f;
    (&frame)->f44 = 419.0f;
    (&frame)->f48 = 516.0f;
    (&frame)->f4c = 439.0f;
    (&frame)->f50 = 0.63671875f;
    (&frame)->f54 = 0.65625f;
    (&frame)->f58 = 0.71484375f;
    (&frame)->f5c = 0.734375f;
    for (;;) {
        call_8c01daf0();
        operation_8c01dea8();
        call_8c36a880();
        switch (call_8c36a868()) {
        case 6:
        case 7:
        case 9:
            return -1;
        }
        st = g_8c470365;
        if (st == 0xd) {
            break;
        }
        if (st == 0xc || st == 0) {
            if (++count > 0x5a) {
                break;
            }
        } else {
            if (g_8c461c00 != 0) {
                switch (st) {
                case 8:
                operation_8c04b230(23.0f, 336.0f, (int)(g_8c467180->f8c->f24), color);
                operation_8c04b230(23.0f, 356.0f, (int)(g_8c467180->f8c->f50), color);
                    break;
                case 9:
                operation_8c04b230(23.0f, 336.0f, (int)(g_8c467180->f8c->f24), color);
                operation_8c04b230(23.0f, 356.0f, (int)(g_8c467180->f8c->f54), color);
                    break;
                case 10:
                operation_8c04b230(23.0f, 336.0f, (int)(g_8c467180->f8c->f24), color);
                operation_8c04b230(23.0f, 356.0f, (int)(g_8c467180->f8c->f58), color);
                    break;
                case 11:
                operation_8c04b230(23.0f, 336.0f, (int)(g_8c467180->f8c->f24), color);
                operation_8c04b230(23.0f, 356.0f, (int)(g_8c467180->f8c->f70), color);
                    break;
                default:
                operation_8c04b230(23.0f, 336.0f, (int)(g_8c467180->f8c->f24), color);
                    break;
                }
            operation_8c04b230(525.0f, 420.0f, (int)(g_8c467180->f8c->f1c), -1);
            call_8c380ab8(0, 8);
            call_8c380ab8(1, 0xa);
            call_8c3827d8(g_8c470360);
            sq_select_8c38aeb4(1);
            sq_header_8c38af22(0, -1);
            sq_quad_8c38b09e((Frame *)((&frame)), 0.1f);
            sq_quad_8c38b09e((Frame *)p20, 0.1f);
            sq_quad_8c38b09e((Frame *)p40, 1.0f);
            sq_flush_8c38af12();
            call_8c380ab8(0, 8);
            call_8c380ab8(1, 6);
            }
            if ((((&g_8c41cba0)->f28 & 4)) != 0 || operation_8c01d8a8((void *)keys, 4) != 0
                || (((&g_8c41cba0)->f28 & 2)) != 0 || operation_8c01d8a8((void *)keys, 2) != 0
                || (((&g_8c41cba0)->f28 & m400)) != 0 || operation_8c01d8a8((void *)keys, m400) != 0
                || (((&g_8c41cba0)->f28 & m200)) != 0 || operation_8c01d8a8((void *)keys, m200) != 0
                || (((&g_8c41cba0)->f28 & 8)) != 0 || operation_8c01d8a8((void *)keys, 8) != 0) {
                break;
            }
        }
        time_hierarchy_update((void *)((void *)0x8c44bec8));
        time_hierarchy_visit((void *)((void *)0x8c44bec8));
        TObject_debug_describe_8c033330((void *)((void *)0x8c44bec8));
        hierarchy_output_cycle((void *)((void *)0x8c44bec8));
        process_file_task_queue();
        call_8c05f9e4();
        operation_8c17e194();
        wait_vsync_and_flip_8c380516();
    }
    return 0;
}
