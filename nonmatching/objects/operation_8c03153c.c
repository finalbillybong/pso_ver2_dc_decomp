/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03153c
 * function: operation_8c03153c
 * language: c
 * reference size: 156 bytes
 * compiled size: 156 bytes (+0.0%)
 * differing lines: 2 of 74 reference instruction lines
 * differing bytes: 2
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Entry {
    unsigned short f00;
    short f02;
    int f04[4];
} Entry;
extern short *g_8c44be30;
extern int call_8c18e768(int, int);
int operation_8c03153c(int a0, Entry *a1)
{
    short *p;
    short n;
    Entry *list;
    int v4;
    int k;
    n = 0;
    list = 0;
    p = g_8c44be30;
    v4 = -1;
    while (v4 != (k = *p)) {
        if ((k & 1) != 0) {
            n = p[2];
            p += 4;
            list = (Entry *)p;
            break;
        }
        if ((k & 2) != 0) {
            p = (short *)((char *)p + ((call_8c18e768(p[1], 2) + 2) << 1));
        } else {
            return 0;
        }
    }
    while (n > 0) {
        if (list->f00 == a1->f00) {
            *a1 = *list;
            return 1;
        }
        list++;
        n--;
    }
    return 0;
}
