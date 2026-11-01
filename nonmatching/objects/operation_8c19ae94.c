/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19ae94
 * function: operation_8c19ae94
 * language: c
 * reference size: 448 bytes
 * compiled size: 444 bytes (-0.9%)
 * differing lines: 8 of 187 reference instruction lines
 * differing bytes: 320
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4dc480 S_g8c4dc480;
typedef struct Object Object;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
};
struct Object {
    char unknown0[0x20];
    float f20;
    float f24;
    char unknown28[0x38];
    int f60;
};
extern S_g8c4dc480 *g_8c4dc480;
extern char g_8c4dc488;
extern void call_8c380ab8(int, int);
extern void call_8c3827d8(void *);
extern int call_8c18e768(int, int);
extern int call_8c18e8a0(int, int);
extern void sq_select_8c38aeb4(int);
extern void sq_header_8c38af22(int, int);
extern void sq_quad_8c38b09e(Frame *, float);
extern void sq_flush_8c38af12(void);
void operation_8c19ae94(Object *o)
{
    int v2;
    int v1;
    Frame frame;
    int t2;
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 0xa);
    call_8c3827d8(g_8c4dc480);
    v2 = (int)0;
    v1 = (int)0xffffff;
    for (; (unsigned int)8 > (unsigned int)(unsigned char)v2; ) {
        int t1;
        int v3;
        v3 = (unsigned char)(unsigned char)v2;
        t1 = call_8c18e768(v3, 2);
        (&frame)->f00 = o->f20 + (float)(t1 * 0x5c);
        t2 = call_8c18e8a0(v3, 2);
        (&frame)->f04 = o->f24 + (float)(t2 * 0x57);
        (&frame)->f08 = (&frame)->f00 + 57.0f;
        (&frame)->f0c = (&frame)->f04 + 86.0f;
        if (*(int *)((char *)((char *)o + 0x64) + (v3 << 2)) != 0) {
            if (v3 != g_8c4dc488) {
                o->f60 = 0x55;
            } else {
                o->f60 = 0xff;
                (&frame)->f10 = 0.4453125f;
                (&frame)->f14 = 0.0f;
                (&frame)->f18 = 0.890625f;
                (&frame)->f1c = 0.671875f;
                sq_select_8c38aeb4(1);
                sq_header_8c38af22(0, (int)(o->f60 << 0x18 | v1));
                sq_quad_8c38b09e((Frame *)((&frame)), 0.2f);
                sq_flush_8c38af12();
            }
            (&frame)->f10 = 0.0f;
            (&frame)->f14 = 0.0f;
            (&frame)->f18 = 0.4453125f;
            (&frame)->f1c = 0.671875f;
            sq_select_8c38aeb4(1);
            sq_header_8c38af22(0, (o->f60 << 0x18 | v1));
            sq_quad_8c38b09e((Frame *)((&frame)), 0.2f);
            sq_flush_8c38af12();
        }
        v2 = 1 + v2;
    }
    call_8c380ab8(0, 8);
    call_8c380ab8(1, 6);
}
