/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c083070
 * function: operation_8c083070
 * language: c
 * reference size: 320 bytes
 * compiled size: 320 bytes (+0.0%)
 * differing lines: 18 of 112 reference instruction lines
 * differing bytes: 235
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
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_108 Arg0_108;
typedef struct Arg0_90 Arg0_90;
struct Object {
    char unknown0[0x88];
    int f88;
    char unknown8c[0x4];
    Arg0_90 *f90;
    char unknown94[0x60];
    char ff4;
    char unknownf5[0xf];
    Arg0_104 *f104;
    Arg0_108 *f108;
};
extern char g_8c2ff2ec[];
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
extern int call_8c18e8a0(int, int);
void operation_8c083070(Object *o)
{
    int k = 0x108;
    Object *self = o;
    int t1;
    int t2;
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x13001a, (void *)((g_8c2ff2ec + 0xdc)));
    debug_print_at_8c38cf80(0x13001b, (void *)((g_8c2ff2ec + 0xec)));
    debug_print_at_8c38cf80(0x13001c, (void *)((g_8c2ff2ec + 0xfc)));
    self->f104 = (Arg0_104 *)(unsigned char)self->f88;
    t1 = call_8c18e8a0((int)((self->f88 & 0xff00) >> 8), 0xa);
    *(int *)((char *)self + k) = t1;
    debug_print_at_8c38cf80(0x13001e, (void *)((g_8c2ff2ec + 0x10c)), self->f104, *(int *)((char *)self + k));
    t2 = call_8c18e8a0((int)(self->f90), 2);
    self->ff4 = t2;
    if (self->ff4 == 0) {
        debug_print_at_8c38cf80(0x130020, (void *)((g_8c2ff2ec + 0x123)));
    } else {
        njPrintColor_8c38c5b6(-0x10000);
        debug_print_at_8c38cf80(0x130020, (void *)((g_8c2ff2ec + 0x12e)));
    }
    njPrintColor_8c38c5b6(-0xf0f10);
}
