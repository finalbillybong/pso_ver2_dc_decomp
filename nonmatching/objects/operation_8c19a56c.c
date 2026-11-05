/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19a56c
 * function: operation_8c19a56c
 * language: c
 * reference size: 344 bytes
 * compiled size: 344 bytes (+0.0%)
 * differing lines: 24 of 138 reference instruction lines
 * differing bytes: 15
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
typedef struct Frame Frame;
typedef struct S_g8c467184 S_g8c467184;
typedef struct S_g8c4dc460 S_g8c4dc460;
typedef struct Arg1 Arg1;
typedef struct S_vv19 S_vv19;
struct Arg1 {
    char f00;
};
struct S_vv19 {
    float f00;
    float f04;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    char unknownc[0x14];
};
extern S_g8c467184 *g_8c467184;
extern S_g8c4dc460 *g_8c4dc460;
extern float g_8c4dc464;
extern int g_8c4dc46c;
extern int g_8c4dc470;
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern int operation_8c087244(char);
extern int operation_8c087248(int);
extern void call_8c0871ac(int, Frame *);
extern void call_8c087120(int, Frame *);
extern int clip_rectangle_quad(void *, Frame *);
extern void scale_rectangle_fields(void *, Frame *);
extern void sq_quad_8c38b09e(Frame *, float);
extern void sq_flush_8c38af12(void);
int operation_8c19a56c(int a0, Arg1 *a1, int a2, float f0)
{
    Frame frame;
    int v24;
    char c;
    int g;
    float x;
    float y;
    v24 = 1;
    if (a1 == 0) {
        return v24;
    }
    if (a1->f00 == 0) {
        return v24;
    }
    x = ((S_vv19 *)a0)->f00;
    y = ((S_vv19 *)a0)->f04;
    sq_select_8c38aeb4(v24);
    call_8c3827d8((void *)g_8c467184);
    sq_header_8c38af22(0, a2);
    while (a1->f00 != 0) {
        c = a1->f00;
        a1 = (Arg1 *)((char *)a1 + 1);
        if ((unsigned char)c == 0x20) {
            x += 5.0f;
            f0 -= 5.0f;
            continue;
        }
        if (!(f0 > 0.0f)) {
            v24 = 0;
            continue;
        }
        g = operation_8c087244(c);
        a2 = operation_8c087248(g);
        (&frame)->f00 = x;
        (&frame)->f04 = y;
        if (g_8c4dc470 != 0) {
            call_8c0871ac(g, (&frame));
        } else {
            call_8c087120(g, (&frame));
        }
        if ((float)(unsigned char)a2 > f0) {
            (&frame)->f08 = (&frame)->f00 + f0;
            v24 = 0;
        }
        x += (float)(unsigned char)a2;
        f0 -= (float)(unsigned char)a2;
        if (g_8c4dc46c != 0) {
            if (clip_rectangle_quad((void *)g_8c4dc460, (&frame)) == 0) {
                continue;
            }
        }
        scale_rectangle_fields((void *)g_8c4dc460, (&frame));
        sq_quad_8c38b09e((&frame), g_8c4dc464);
    }
    sq_flush_8c38af12();
    return v24;
}
