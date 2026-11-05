/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c036d04
 * function: TGameProtocol_dispatch_local_subcommand_8c036d04
 * language: c
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 2 of 76 reference instruction lines
 * differing bytes: 2
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * class header: src/include/classes/TGameProtocol.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2ed3dc S_L8c2ed3dc;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    unsigned char f01;
};
struct S_L8c2ed3dc {
    char unknown0[0x2];
    unsigned short f02;
    int f04;
};
struct Frame {
    char unknown0[0x80];
};
extern S_L8c2ed3dc g_8c2ed3dc;
extern char g_8c2ed878[];
extern int get_current_area_8c032b10(void);
extern void sprintf_8c12b048(Frame *, void *, ...);
extern void operation_8c011efc(Frame *);
void TGameProtocol_dispatch_local_subcommand_8c036d04(Object *o)
{
    Frame frame;
    int v4;
    unsigned short v2;
    int v1;
    int v3;
    int t1;
    v1 = (unsigned char)o->tag;
    v4 = 0;
    while (v3 = (int)(v4 << 3), v2 = *(unsigned short *)((char *)&g_8c2ed3dc + v3), (v2 & 0xffff) != 0) {
        if (v1 == (unsigned short)v2) {
            t1 = get_current_area_8c032b10();
            if (((*(unsigned short *)((char *)&g_8c2ed3dc.f02 + (v3)) & 0xffff & *(unsigned char *)((char *)((char *)t1 + 0x0) + ((int)((void *)0x8c2ed3c8))))) != 0) {
                sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c2ed878 + 0x40)), (int)(o->tag), (int)(o->f01));
                operation_8c011efc((Frame *)((&frame)));
                ((void (*)(Object *))(*(int *)((char *)&g_8c2ed3dc.f04 + (v3))))(o);
                return;
            }
        }
        v4++;
    }
}
