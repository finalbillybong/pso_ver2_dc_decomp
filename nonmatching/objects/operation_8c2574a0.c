/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2574a0
 * function: operation_8c2574a0
 * language: c
 * reference size: 512 bytes
 * compiled size: 512 bytes (+0.0%)
 * differing lines: 114 of 243 reference instruction lines
 * differing bytes: 117
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Pt {
    short x;
    short y;
} Pt;
typedef struct Object {
    char unknown0[0x1c];
    Pt prev;
    Pt body[32];
    char unknowna0[0];
} Object;
extern int call_8c18e8a0(int, int);
extern int rand(void);
void operation_8c2574a0(Object *o)
{
    int n;
    short dy;
    short hx;
    int blocked[3];
    int i;
    int j;
    int k;
    short dx;
    int last;
    int dir;
    Pt *row;
    Pt cur;
    int hit[3];
    short hy;
    dx = o->body[1].x - o->body[0].x;
    dy = o->body[1].y - o->body[0].y;
    *(float *)((char *)o + 0xa0) = 0.0f;
    for (i = 0x1f; i >= 1; i--) {
        *(Pt *)((char *)o->body + (i << 2)) = *(Pt *)((char *)&o->prev + (i << 2));
    }
    hx = o->body[0].x;
    dir = call_8c18e8a0(hx, 3);
    hy = o->body[0].y;
    row = (Pt *)((char *)0x8c33ffb8 + (((short)dir + (short)(hy & 1) * 3) * 3 << 2));
    n = 0;
    last = -1;
    for (i = 0; i < 3; i++) {
        k = i << 2;
        cur = *(Pt *)((char *)row + k);
        if (cur.x == dx && cur.y == dy) {
            *(int *)((char *)hit + k) = 1;
        } else {
            *(int *)((char *)hit + k) = 0;
        }
        cur.x += hx;
        cur.y += hy;
        if (cur.x < 0 || cur.x >= 0x16 || cur.y < 0 || cur.y >= 0x14) {
            *(int *)((char *)blocked + k) = 1;
            n++;
        } else {
            *(int *)((char *)blocked + k) = 0;
            last = i;
        }
    }
    switch (n) {
    case 2:
        j = last;
        break;
    case 1:
        for (j = 0; j < 3; j++) {
            if (*(int *)((char *)blocked + (j << 2)) == 0 && *(int *)((char *)hit + (j << 2)) == 0) {
                break;
            }
        }
        break;
    case 0:
        j = (int)((float)rand() / 32768.0f * 2.99f);
        for (k = 0; k < 3; k++) {
            if (*(int *)((char *)blocked + (j << 2)) == 0 && *(int *)((char *)hit + (j << 2)) == 0) {
                break;
            }
            j++;
            if (j >= 3) {
                j = 0;
            }
        }
        break;
    }
    j <<= 2;
    o->body[0].x += *(short *)((char *)row + j);
    o->body[0].y += *(short *)((char *)&row->y + j);
}
