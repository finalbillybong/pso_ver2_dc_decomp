/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09bce8
 * function: operation_8c09bce8
 * language: c
 * reference size: 684 bytes
 * compiled size: 672 bytes (-1.8%)
 * differing lines: 388 of 324 reference instruction lines
 * differing bytes: 557
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -12 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Buf {
    char unknown0[0x4];
    int **f04;
} Buf;
typedef struct Mesh {
    Buf *f00;
} Mesh;
typedef struct Blend {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
    Mesh *f10;
    Mesh *f14;
    Mesh *f18;
    Mesh *f1c;
} Blend;
extern Blend g_8c46b044;
extern float float_from_bits(int);
extern int float_to_bits(float);
extern float njScalor_8c37e480(Vector3 *);
extern void njUnitVector_8c37b630(Vector3 *);
int operation_8c09bce8(void)
{
    Vector3 v;
    int count;
    int type;
    Mesh *m;
    int i;
    int n;
    int rem;
    int k;
    int *dst;
    int *b;
    int *c;
    int *a;
    m = g_8c46b044.f10;
    for (i = 0; i < 3; i++) {
    }
    count = 1000;
    dst = *m->f00->f04;
    b = *g_8c46b044.f14->f00->f04;
    c = *g_8c46b044.f18->f00->f04;
    a = *g_8c46b044.f1c->f00->f04;
    while (count > 0) {
        switch ((unsigned char)*dst) {
        case 0x29:
            type = 3;
            break;
        case 0x2c:
            type = 4;
            break;
        case 0xff:
            type = -1;
            break;
        default:
            type = -2;
            break;
        }
        if (type < 0) break;
        n = (short)(dst[1] >> 16) & 0xffff;
        b += 2;
        c += 2;
        dst += 2;
        a += 2;
        while (n > 0) {
            for (k = 3; k > 0; k--) {
                *dst++ = float_to_bits(g_8c46b044.f04 * float_from_bits(*b++) + g_8c46b044.f08 * float_from_bits(*c++) + g_8c46b044.f0c * float_from_bits(*a++));
            }
            rem = type;
            if (rem >= 3) {
                v.x = g_8c46b044.f04 * float_from_bits(*b++) + g_8c46b044.f08 * float_from_bits(*c++) + g_8c46b044.f0c * float_from_bits(*a++);
                v.y = g_8c46b044.f04 * float_from_bits(*b++) + g_8c46b044.f08 * float_from_bits(*c++) + g_8c46b044.f0c * float_from_bits(*a++);
                v.z = g_8c46b044.f04 * float_from_bits(*b++) + g_8c46b044.f08 * float_from_bits(*c++) + g_8c46b044.f0c * float_from_bits(*a++);
                if (njScalor_8c37e480(&v) != 0.0f) {
                    njUnitVector_8c37b630(&v);
                }
                *dst++ = float_to_bits(v.x);
                *dst++ = float_to_bits(v.y);
                *dst++ = float_to_bits(v.z);
                rem -= 3;
            }
            if (rem >= 1) {
                *dst = (int)(g_8c46b044.f04 * (float)((short)(*b++ >> 16) & 0xffff) + g_8c46b044.f08 * (float)((short)(*c++ >> 16) & 0xffff) + g_8c46b044.f0c * (float)((short)(*a++ >> 16) & 0xffff)) << 16 | *dst & 0xffff;
                dst++;
                rem--;
            }
            if (rem > 0) {
                dst += rem;
                b += rem;
                c += rem;
                a += rem;
            }
            n--;
        }
        count--;
    }
    return 1;
}
