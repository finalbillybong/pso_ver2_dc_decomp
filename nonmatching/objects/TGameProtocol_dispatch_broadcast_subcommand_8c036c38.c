/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c036c38
 * function: TGameProtocol_dispatch_broadcast_subcommand_8c036c38
 * language: c
 * reference size: 204 bytes
 * compiled size: 204 bytes (+0.0%)
 * differing lines: 18 of 89 reference instruction lines
 * differing bytes: 13
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TGameProtocol.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Rec {
    unsigned char type;
    char len;
    char unknown2[0x2];
    int size;
} Rec;
typedef struct Frame {
    char unknown0[0x80];
} Frame;
typedef struct Handler {
    unsigned short type;
    unsigned short mask;
    int f04;
} Handler;
extern Handler g_8c2ed3dc;
extern char g_8c2ed878[];
extern void sprintf_8c12b048(Frame *, void *, ...);
extern void operation_8c011efc(Frame *);
extern int get_current_area_8c032b10(void);
void TGameProtocol_dispatch_broadcast_subcommand_8c036c38(Rec *p, int remaining)
{
    int rem = remaining;
    Frame frame;
    Rec *cur;
    char len;
    int i;
    int off;
    unsigned short type;
    unsigned char t;
    while (rem > 0) {
        len = p->len;
        cur = p;
        if ((unsigned char)len != 0) {
            p = (Rec *)((char *)p + ((unsigned char)len << 2));
            rem -= (unsigned char)len << 2;
        } else {
            p = (Rec *)((char *)p + p->size);
            rem -= cur->size;
        }
        for (i = 0; ((type = *(unsigned short *)((char *)&g_8c2ed3dc + (off = i << 3))) & 0xffff) != 0; i++) {
            t = cur->type;
            if (t == (unsigned short)type) {
                sprintf_8c12b048(&frame, g_8c2ed878 + 0x2c, t, (unsigned char)len);
                operation_8c011efc(&frame);
                if ((*(unsigned short *)((char *)&g_8c2ed3dc.mask + off) & 0xffff & *(unsigned char *)((char *)get_current_area_8c032b10() + (int)(void *)0x8c2ed3c8)) != 0) {
                    ((int (*)(Rec *))(*(int *)((char *)&g_8c2ed3dc.f04 + off)))(cur);
                }
                break;
            }
        }
    }
}
