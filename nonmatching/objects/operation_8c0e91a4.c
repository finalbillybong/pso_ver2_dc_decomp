/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e91a4
 * function: operation_8c0e91a4
 * language: c
 * reference size: 304 bytes
 * compiled size: 308 bytes (+1.3%)
 * differing lines: 26 of 122 reference instruction lines
 * differing bytes: 224
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order, constant loading;
 *   review found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_40 S_g8c467180_40;
typedef struct S_g8c467180_40_0 S_g8c467180_40_0;
typedef struct S_g8c467180_40_4 S_g8c467180_40_4;
typedef struct S_g8c470320 S_g8c470320;
typedef struct Object Object;
struct Object {
    char unknown0[0x2c];
    unsigned char f2c;
    char unknown2d[0x23];
    int f50;
    unsigned char f54;
    unsigned char f55;
};
struct S_g8c467180 {
    char unknown0[0x40];
    S_g8c467180_40 *f40;
};
struct S_g8c467180_40 {
    S_g8c467180_40_0 *f00;
    S_g8c467180_40_4 *f04;
};
extern S_g8c467180 *g_8c467180;
extern S_g8c470320 *g_8c470320;
extern int g_8c4dbb08;
extern int g_8c4dbb0c;
extern void sprintf_8c12b048(void *, void *, ...);
extern void operation_8c119764(int, int, int);
extern void call_8c380ab8(int, int);
extern void call_8c3827d8(void *);
extern void sq_select_8c38aeb4(int);
extern void sq_header_8c38af22(int, int);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_flush_8c38af12(void);
void operation_8c0e91a4(Object *o)
{
    unsigned char v1;
    int v2;
    v1 = (unsigned char)o->f54;
    v2 = (int)(g_8c4dbb08 + g_8c4dbb0c);
    if (v1 != (unsigned char)o->f55) {
        switch (v1) {
        case 0:
            sprintf_8c12b048((void *)(((char *)o + 0x5c)), (void *)(g_8c467180->f40->f00), v2);
            if (o->f50 == 0) {
                goto L_8c0e9238;
            }
            operation_8c119764((int)(o->f50), (int)(((char *)o + 0x5c)), 1);
            break;
        case 1:
            sprintf_8c12b048((void *)(((char *)o + 0x250)), (void *)(g_8c467180->f40->f04), v2);
            if (o->f50 != 0) {
                operation_8c119764((int)(o->f50), (int)(((char *)o + 0x250)), 1);
            }
        }
    }
L_8c0e9238:;
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 0xa);
    call_8c3827d8(g_8c470320);
    sq_select_8c38aeb4(1);
    sq_header_8c38af22(0, (int)(o->f2c << 0x18 | 0xffffff));
    sq_quad_8c38b09e((void *)(((char *)o + 0x30)), 0.1f);
    sq_flush_8c38af12();
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
}
