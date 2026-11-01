/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03063c
 * function: operation_8c03063c
 * language: c
 * reference size: 180 bytes
 * compiled size: 180 bytes (+0.0%)
 * differing lines: 26 of 86 reference instruction lines
 * differing bytes: 26
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_10 Arg0_10;
struct Object {
    int tag;
    int f04;
    char unknown8[0x8];
    Arg0_10 *f10;
    int f14;
    int dispatch;
    int f1c;
};
extern void call_8c38b6f4(int, int, int, int);
void operation_8c03063c(Object *o)
{
    unsigned char *ta;
    unsigned char *tb;
    char *src;
    short *dst;
    int i;
    int j;
    int w;
    int k;
    int idx;
    int x;
    int y;
    unsigned char a;
    unsigned char b;
    ta = (unsigned char *)o->dispatch;
    tb = ta + o->tag * o->f04;
    dst = (short *)(o->f14 + 0x20);
    src = (char *)o->f10 + 0x20;
    for (i = 0; o->tag > i; i++) {
        for (j = 0; (w = o->f04) > j; j++) {
            k = o->f1c + j;
            if (k >= w) {
                k -= w;
            }
            idx = i * w + k;
            a = (unsigned char)ta[idx];
            b = (unsigned char)tb[idx];
            x = a + j;
            if ((unsigned short)x >= w) {
                x -= w;
            }
            y = b + i;
            if ((unsigned short)y >= o->tag) {
                y -= o->tag;
            }
            *(short *)((char *)dst + (j << 1)) = *(volatile unsigned short *)(src + ((unsigned short)y * w + (unsigned short)x << 1)) & 0xffff;
        }
        dst = (short *)((char *)dst + (w << 1));
    }
    call_8c38b6f4(0, (int)(o->f14 + 0x20), 0x40000000, 0);
}
