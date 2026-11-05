/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b0150
 * function: TAdGuideButton_render_8c1b0150
 * language: c
 * reference size: 440 bytes
 * compiled size: 440 bytes (+0.0%)
 * differing lines: 28 of 176 reference instruction lines
 * differing bytes: 57
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2
 *   (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2360 S_g8c4e2360;
typedef struct S_g8c4e2364 S_g8c4e2364;
typedef struct S_g8c4e2368 S_g8c4e2368;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned char f20;
};
struct S_g8c4e2368 {
    char f00;
};
extern S_g8c4e2360 *g_8c4e2360;
extern S_g8c4e2364 *g_8c4e2364;
extern S_g8c4e2368 *g_8c4e2368;
extern int g_8c4e2370;
extern float g_8c4e2374;
extern void call_8c380ab8(int, int);
extern void call_8c3827d8(void *);
extern void sq_select_8c38aeb4(int);
extern void sq_header_8c38af22(int, int);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_flush_8c38af12(void);
extern void operation_8c04b244(int, int, float, float, float);
void TAdGuideButton_render_8c1b0150(Object *o)
{
    int pm1;
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
    call_8c3827d8(g_8c4e2360);
    sq_select_8c38aeb4(1);
    sq_header_8c38af22(0, (int)(o->f20 << 0x18 | 0xffffff));
    sq_quad_8c38b09e((void *)(((char *)o + 0x24)), g_8c4e2374);
    if (g_8c4e2368->f00 != 0) {
        sq_quad_8c38b09e((void *)(((char *)o + 0x44)), g_8c4e2374);
    }
    sq_flush_8c38af12();
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 0xa);
    call_8c3827d8(g_8c4e2360);
    sq_select_8c38aeb4(1);
    sq_header_8c38af22(0, (int)(o->f20 << 0x18 | 0xffffff));
    if (g_8c4e2370 != 0) {
        sq_quad_8c38b09e((void *)(((char *)o + 0x64)), 0.5f);
        sq_quad_8c38b09e((void *)(((char *)o + 0x84)), 0.5f);
        sq_quad_8c38b09e((void *)(((char *)o + 0xa4)), 0.5f);
        sq_quad_8c38b09e((void *)(((char *)o + 0xc4)), 0.5f);
    }
    sq_flush_8c38af12();
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
    if (g_8c4e2368->f00 != 0) {
        int pm2;
        pm2 = (int)g_8c4e2364;
        operation_8c04b244(pm2, -1, 223.0f, 417.0f, g_8c4e2374);
        operation_8c04b244((int)g_8c4e2368, -1, 367.0f, 417.0f, g_8c4e2374);
        return;
    }
    pm1 = (int)g_8c4e2364;
    operation_8c04b244(pm1, -1, 525.0f, 420.0f, g_8c4e2374);
}
