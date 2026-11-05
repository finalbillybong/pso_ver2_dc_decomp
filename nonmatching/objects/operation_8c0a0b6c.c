/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a0b6c
 * function: operation_8c0a0b6c
 * language: c
 * reference size: 436 bytes
 * compiled size: 440 bytes (+0.9%)
 * differing lines: 102 of 184 reference instruction lines
 * differing bytes: 318
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2; offline start: Pioneer 2 office walk and NPC dialogue (emulator A/B:
 *   RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct Object Object;
typedef struct S_vv16 S_vv16;
struct S_L8c46efc8 {
    char unknown0[0x8];
    int f08;
};
struct S_g8c46ee80 {
    char unknown0[0x90];
    float f90;
    float f94;
    float f98;
    float f9c;
    float fa0;
    float fa4;
    char unknowna8[0x10];
    float fb8;
    float fbc;
    float fc0;
    float fc4;
    float fc8;
    float fcc;
    float fd0;
    float fd4;
};
struct Object {
    char unknown0[0x40];
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    int f58;
    float f5c;
    float f60;
};
struct S_vv16 {
    char unknown0[0xb4];
    int fb4;
};
extern S_g8c46ee80 *g_8c46ee80;
extern S_L8c46efc8 g_8c46efc8;
void operation_8c0a0b6c(Object *o)
{
    S_vv16 *v16;
    if ((((&g_8c46efc8)->f08 & 4)) != 0 || (((&g_8c46efc8)->f08 & 8)) != 0) {
        g_8c46ee80->fb8 = o->f40;
        g_8c46ee80->fbc = o->f44;
        g_8c46ee80->fc0 = o->f48;
        g_8c46ee80->fc4 = o->f4c;
        g_8c46ee80->fc8 = o->f50;
        g_8c46ee80->fcc = o->f54;
        g_8c46ee80->f90 = g_8c46ee80->fb8;
        g_8c46ee80->f94 = g_8c46ee80->fbc;
        g_8c46ee80->f98 = g_8c46ee80->fc0;
        g_8c46ee80->f9c = g_8c46ee80->fc4;
        g_8c46ee80->fa0 = g_8c46ee80->fc8;
        g_8c46ee80->fa4 = g_8c46ee80->fcc;
    } else {
        g_8c46ee80->fb8 = o->f40;
        g_8c46ee80->fbc = o->f44;
        g_8c46ee80->fc0 = o->f48;
        g_8c46ee80->fc4 = o->f4c;
        g_8c46ee80->fc8 = o->f50;
        g_8c46ee80->fcc = o->f54;
    }
    g_8c46ee80->fd0 = o->f5c;
    g_8c46ee80->fd4 = o->f60;
    v16 = (S_vv16 *)g_8c46ee80;
    if (v16->fb4 != o->f58) {
        (&g_8c46efc8)->f08 |= 0x40;
        v16->fb4 = (int)(o->f58);
    }
}
