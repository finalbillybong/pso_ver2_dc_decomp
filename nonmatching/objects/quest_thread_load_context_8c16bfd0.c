/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16bfd0
 * function: quest_thread_load_context_8c16bfd0
 * language: c
 * reference size: 264 bytes
 * compiled size: 264 bytes (+0.0%)
 * differing lines: 14 of 90 reference instruction lines
 * differing bytes: 25
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Object Object;
struct Object {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    unsigned char f14;
    char unknown15[0x7];
    int f1c;
    int f20;
    int f24;
    int f28;
    int f2c;
    char unknown30[0x40];
    unsigned char f70;
    unsigned char f71;
    short f72;
    short f74;
    char unknown76[0x2];
    int f78;
    int f7c;
    int f80;
};
extern int g_8c4db400;
extern int g_8c4db404;
extern int g_8c4db408;
extern int g_8c4db40c;
extern int g_8c4db414;
extern char g_8c4db418;
extern int g_8c4db41c;
extern int g_8c4db420;
extern int g_8c4db424;
extern int g_8c4db42c;
extern int g_8c4db430;
extern char g_8c4db4c0;
extern char g_8c4db4c1;
extern short g_8c4db4c2;
extern short g_8c4db4c4;
extern int g_8c4db4c8;
extern int g_8c4db4cc;
extern int g_8c4db4d0;
extern void memcpy_8c12b77c(void *, void *, int);
void quest_thread_load_context_8c16bfd0(Object *o)
{
    g_8c4db400 = o->f00;
    g_8c4db404 = o->f04;
    g_8c4db408 = o->f08;
    g_8c4db40c = o->f0c;
    g_8c4db414 = (int)(o->f10);
    g_8c4db418 = o->f14;
    g_8c4db41c = (int)(o->f1c);
    g_8c4db420 = (int)(o->f20);
    g_8c4db424 = (int)(o->f24);
    g_8c4db42c = (int)(o->f28);
    g_8c4db430 = (int)(o->f2c);
    memcpy_8c12b77c((void *)((void *)0x8c4db434), (void *)(((char *)o + 0x30)), 0x40);
    g_8c4db4c0 = o->f70;
    g_8c4db4c1 = o->f71;
    g_8c4db4c2 = o->f72;
    g_8c4db4c4 = o->f74;
    g_8c4db4c8 = (int)(o->f78);
    g_8c4db4cc = (int)(o->f7c);
    g_8c4db4d0 = (int)(o->f80);
}
