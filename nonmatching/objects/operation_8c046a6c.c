/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c046a6c
 * function: operation_8c046a6c
 * language: c
 * reference size: 428 bytes
 * compiled size: 428 bytes (+0.0%)
 * differing lines: 8 of 175 reference instruction lines
 * differing bytes: 14
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0xa4];
    Arg0_dc *fdc;
    char unknowne0[0xc6];
    short f1a6;
    char unknown1a8[0x6];
    short f1ae;
    char unknown1b0[0x11c];
    int f2cc;
    float f2d0;
    int f2d4;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int create_effect(void *, int, int);
extern void bind_id(void *, unsigned short);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void call_8c178258(int, Object *, int, int);
extern void play_se_8c05fbf8(int, void *, int, int);
void operation_8c046a6c(Object *o, int a1)
{
    int v1;
    short v18;
    short v19;
    int t1;
    int t2;
    int t3;
    v1 = (int)o->f34;
    switch (v1 & 0x8000) {
    case 0:
        if (((v1 & 0x20)) != 0) {
            if (o->f2d4 > 0) {
                return;
            }
        }
        if (((v1 & 0x2000000)) == 0) {
            t1 = create_effect((void *)(((char *)o + 0x324)), 0x26, 0x50);
            if (t1 != 0) {
                bind_id((void *)t1, (unsigned short)(o->f20));
            }
            if (a1 != 0) {
                t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x37c);
                if (t2 == 0) {
                    goto L_8c046b0a;
                }
                call_8c178258(t2, o, a1, 0x96);
            } else {
                if (o->fdc != 0) {
                    t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x37c);
                    if (t3 != 0) {
                        call_8c178258(t3, o, (int)(o->fdc), 0x96);
                    }
                }
            }
L_8c046b0a:;
            play_se_8c05fbf8(0xf, (void *)(((char *)o + 0x3c)), 0, 0);
        }
        switch (o->f2cc) {
        case 2:
            o->f1ae += (int)((float)o->f1a6 * -o->f2d0);
            break;
        case 3:
            if ((unsigned int)o->f20 >= (unsigned int)0x1000) {
                o->f1ae += (int)((float)o->f1a6 * -o->f2d0);
            }
        }
        o->f2cc = 2;
        o->f2d0 = -0.3f;
        o->f2d4 = 0x96;
        o->f34 &= -0x3d;
        o->f34 |= 0x20;
        o->f1ae += (int)((float)o->f1a6 * -0.3f);
    }
}
