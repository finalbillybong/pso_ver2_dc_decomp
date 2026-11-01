/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05fd7c
 * function: operation_8c05fd7c
 * language: c
 * reference size: 448 bytes
 * compiled size: 448 bytes (+0.0%)
 * differing lines: 18 of 191 reference instruction lines
 * differing bytes: 11
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Slot {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    char f1c;
} Slot;
extern int g_8c2fc704;
extern int g_8c4687f8;
extern int g_8c4687fc;
extern Slot g_8c468138[];
extern int prepare_emit_slot(int, int);
extern int choose_emit_slot(void);
extern void name_request_8c345478(void *);
extern void set_window_8c345864(void *, int, int);
extern void call_8c3456fc(void *, char, int);
extern void call_8c3452e0(void *, int, int, int);
int operation_8c05fd7c(int a0, int a1, int a2, int a3, int a4)
{
    int n;
    int i;
    int off;
    int r;
    int k;
    g_8c2fc704 = -1;
    if (g_8c4687f8 == 0) {
        return -1;
    }
    if (a0 == 0xf0000) {
        return -1;
    }
    n = a1;
    r = -1;
    if (n != 0) {
        for (i = 0; i < 0x36; i++) {
            if (*(int *)((char *)&g_8c468138->f00 + (i << 5)) & 0x400) {
                if (*(int *)((char *)&g_8c468138->f04 + (i << 5)) == a0) {
                    r = i;
                    break;
                }
            }
        }
    }
    if (r >= 0) {
        *(int *)((char *)&g_8c468138->f08 + (r << 5)) = a2;
        *(int *)((char *)&g_8c468138->f14 + (r << 5)) = a3;
        *(int *)((char *)&g_8c468138->f0c + (r << 5)) = 5;
        if (a2 == 0) {
            prepare_emit_slot(r, 1);
        }
        g_8c2fc704 = r;
        return r;
    }
    r = choose_emit_slot();
    g_8c2fc704 = r;
    if (r >= 0) {
        off = r << 5;
        *(int *)((char *)g_8c468138 + off) &= 1;
        if (a4 & 1) {
            *(int *)((char *)g_8c468138 + off) |= 0x2000;
        }
        *(int *)((char *)&g_8c468138->f08 + off) = a2;
        *(int *)((char *)&g_8c468138->f14 + off) = a3;
        if (prepare_emit_slot(r, 0) == 1) {
            k = r << 2;
            *(int *)((char *)&g_8c468138->f04 + off) = a0;
            *(int *)((char *)&g_8c468138->f10 + off) = n;
            *(int *)((char *)&g_8c468138->f0c + off) = 5;
            name_request_8c345478(*(void **)(k + 0x8c467a78));
            set_window_8c345864(*(void **)(k + 0x8c467a78), *(int *)((char *)&g_8c468138->f18 + off), 0);
            call_8c3456fc(*(void **)(k + 0x8c467a78), *(char *)((char *)&g_8c468138->f1c + off), 0);
            call_8c3452e0(*(void **)(k + 0x8c467a78), (short)(a0 >> 16), (unsigned short)a0, 0);
            *(int *)((char *)g_8c468138 + off) |= 0x1600;
            if (g_8c4687fc != 0) {
                *(int *)((char *)g_8c468138 + off) |= 0x800;
                g_8c4687fc = 0;
            }
        } else {
            return -1;
        }
    }
    return r;
}
