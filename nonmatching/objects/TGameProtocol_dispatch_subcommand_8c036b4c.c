/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c036b4c
 * function: TGameProtocol_dispatch_subcommand_8c036b4c
 * language: c
 * reference size: 236 bytes
 * compiled size: 236 bytes (+0.0%)
 * differing lines: 8 of 106 reference instruction lines
 * differing bytes: 8
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original
 * class header: src/include/classes/TGameProtocol.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame {
    char unknown0[0x80];
} Frame;
typedef struct Object {
    char unknown0[0x2c];
    short f2c;
    short f2e;
} Object;
typedef struct Rec {
    unsigned char f00;
    unsigned char f01;
    char unknown2[0x2];
    int f04;
} Rec;
typedef struct Ent {
    unsigned short key;
    unsigned short mask;
    void (*fn)(Rec *);
} Ent;
extern Ent g_8c2ed3dc[];
extern char g_8c2ed878[];
extern void sprintf_8c12b048(Frame *, void *, ...);
extern void operation_8c011efc(Frame *);
extern int get_current_area_8c032b10(void);
void TGameProtocol_dispatch_subcommand_8c036b4c(Object *o, int a1)
{
    Frame frame;
    Rec *rec;
    int i;
    unsigned char v4;
    int t1;
    short pos;
    unsigned short key;
    int off;
    while ((pos = o->f2e) < o->f2c) {
        rec = (Rec *)((char *)o + pos + 0x74);
        for (i = 0; ((key = *(unsigned short *)((char *)g_8c2ed3dc + (off = i << 3))) & 0xffff) != 0; i++) {
            v4 = (unsigned char)rec->f00;
            if (v4 == key) {
                sprintf_8c12b048(&frame, (void *)(g_8c2ed878 + 0x1b), v4, rec->f01);
                operation_8c011efc(&frame);
                t1 = get_current_area_8c032b10();
                if ((*(unsigned short *)((char *)&g_8c2ed3dc->mask + off) & 0xffff & *(unsigned char *)((char *)t1 + (int)(void *)0x8c2ed3c8)) != 0) {
                    (*(void (**)(Rec *))((char *)&g_8c2ed3dc->fn + off))(rec);
                }
                break;
            }
        }
        if (rec->f01 != 0) {
            o->f2e += rec->f01 << 2;
        } else {
            o->f2e += rec->f04;
        }
    }
}
