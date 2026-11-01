/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05f15c
 * function: operation_8c05f15c
 * language: c
 * reference size: 384 bytes
 * compiled size: 384 bytes (+0.0%)
 * differing lines: 148 of 153 reference instruction lines
 * differing bytes: 199
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, constant loading; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Rec {
    void *f00;
    int f04;
} Rec;
extern int operator_new_8c18de4c(int);
extern void set_record_8c37e9a8(void *, int, int, int, int);
extern void set_record_8c37e9b6(void *, int, int, int);
extern int call_8c378168(int);
extern int call_8c3781ac(int, int);
extern void call_8c378464(int, int, int *);
extern void call_8c118780(void *);
void operation_8c05f15c(void)
{
    int frame;
    short *dst;
    unsigned char *src;
    int i;
    int j;
    int k;
    unsigned int bits;
    unsigned int prev;
    unsigned int b;
    int a;
    int c;
    Rec *r;
    *(int *)0x8c4679c0 = operator_new_8c18de4c(0x800);
    set_record_8c37e9a8((void *)0x8c4679c4, *(int *)0x8c4679c0, 0x902, 0x20, 0x20);
    set_record_8c37e9b6((void *)0x8c4679f0, 0x8c4679c4, 0x18696, 0x40800000);
    r = (Rec *)0x8c4679fc;
    r->f00 = (void *)0x8c4679f0;
    r->f04 = 1;
    a = call_8c378168(0);
    c = call_8c3781ac(4, -0x710c);
    call_8c378464(4, -0x710c, &frame);
    prev = 0;
    src = (unsigned char *)(a + c);
    dst = *(short **)0x8c4679c0;
    for (i = 0; i < 0x80; i++) {
        *dst++ = 0xfccc;
    }
    for (i = 0; i < 0x18; i++) {
        for (j = 0; j < 4; j++) {
            *dst++ = 0xfccc;
        }
        bits = *src++ << 24;
        bits |= *src++ << 16;
        bits |= *src++ << 8;
        bits |= bits >> 1;
        b = bits | prev;
        prev = bits;
        for (k = 0; k < 0x18; k++) {
            if (b & 0x80000000) {
                *dst++ = 0;
            } else {
                *dst++ = 0xfccc;
            }
            b <<= 1;
        }
        for (j = 0; j < 4; j++) {
            *dst++ = 0xfccc;
        }
    }
    for (i = 0; i < 0x80; i++) {
        *dst++ = 0xfccc;
    }
    call_8c118780((void *)0x8c4679fc);
}
