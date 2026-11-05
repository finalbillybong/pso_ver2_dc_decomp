/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c197044
 * function: operation_8c197044
 * language: c
 * reference size: 392 bytes
 * compiled size: 388 bytes (-1.0%)
 * differing lines: 274 of 188 reference instruction lines
 * differing bytes: 360
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Object Object;
struct Object {
    char unknown0[0x650];
    int f650;
    char unknown654[0xc];
    int f660;
};
typedef struct Step {
    short dx;
    short dy;
} Step;
extern char g_8c31c25c[];
void operation_8c197044(Object *o)
{
    int cur;
    int y;
    int x;
    int k;
    int cnt;
    Step *t;
    int nx;
    int ny;
    cur = o->f650;
    o->f650 = cur ^ 1;
    o->f660 = 0;
    for (y = 0; y < 22; y++) {
        for (x = 0; x < 9; x++) {
            cnt = 0;
            t = (Step *)(g_8c31c25c + (y & 1) * 0x18);
            for (k = 0; k < 6; k++) {
                nx = (short)(x + t->dx);
                ny = (short)(y + t->dy);
                if (nx >= 0 && nx < 9 && ny >= 0 && ny < 22) {
                    if (*(int *)((char *)o + 0x20 + cur * 0x318 + ny * 0x24 + (nx << 2)) != 0) {
                        cnt++;
                    }
                }
                t++;
            }
            if (*(int *)((char *)o + 0x20 + cur * 0x318 + y * 0x24 + (x << 2)) != 0) {
                if (cnt <= 1 || cnt >= 4) {
                    *(int *)(o->f650 * 0x318 + ((char *)o + 0x20) + y * 0x24 + (x << 2)) = 0;
                } else {
                    o->f660++;
                    *(int *)(o->f650 * 0x318 + ((char *)o + 0x20) + y * 0x24 + (x << 2)) = 1;
                }
            } else {
                if (cnt >= 2 && cnt <= 3) {
                    o->f660++;
                    *(int *)(o->f650 * 0x318 + ((char *)o + 0x20) + y * 0x24 + (x << 2)) = 1;
                } else {
                    *(int *)(o->f650 * 0x318 + ((char *)o + 0x20) + y * 0x24 + (x << 2)) = 0;
                }
            }
        }
    }
}
