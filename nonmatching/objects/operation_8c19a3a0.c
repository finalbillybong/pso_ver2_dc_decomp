/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19a3a0
 * function: operation_8c19a3a0
 * language: c
 * reference size: 460 bytes
 * compiled size: 444 bytes (-3.5%)
 * differing lines: 124 of 192 reference instruction lines
 * differing bytes: 425
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -16 bytes
 * runtime: DIVERGED on menu to registration screen; offline start: new character to Pioneer 2
 *   (call 9 returns 1 where the original returns 0); known incorrect
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c04ba30 S_c8c04ba30;
typedef struct Frame Frame;
typedef struct S_g8c4dc460 S_g8c4dc460;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv11 S_vv11;
struct Frame {
    int f04;
    int f08;
    float f0c;
    float f10;
    char unknown14[0x14];
};
struct Arg1 {
    char f00;
};
struct Object {
    float tag;
};
struct S_c8c04ba30 {
    unsigned char f00;
    unsigned char f01;
};
struct S_vv11 {
    char f00;
};
extern int g_8c467188;
extern S_g8c4dc460 *g_8c4dc460;
extern float g_8c4dc464;
extern float g_8c4dc468;
extern int g_8c4dc46c;
extern int g_8c4dc470;
extern void operation_8c04b3b8(int);
extern S_c8c04ba30 *call_8c04ba30(int, void *, Frame *);
extern int operation_8c04b794(int);
extern int call_8c04b428(int, void *, int);
extern void operation_8c04b9dc(int, void *);
extern int clip_rectangle_quad(void *, void *);
extern void scale_rectangle_fields(void *, void *);
extern void sq_quad_8c38b09e(void *, float);
extern void call_8c04b3e4(void);
int operation_8c19a3a0(Object *o, Arg1 *a1, int a2, float f0)
{
    Frame frame;
    int *home2 = &a2;
    int t3;
    int v4;
    unsigned char v5;
    float v2;
    int v14;
    int v20;
    int v10;
    float v15;
    float v18;
    float v19;
    int v3;
    int v7;
    S_vv11 *v11;
    int t2;
    S_c8c04ba30 *t1;
    int t4;
    (void)home2;
    (&frame)->f04 = 0;
    v20 = (int)1;
    if (a1 == 0) {
        return 1;
    }
    if (a1->f00 == 0) {
        return 1;
    }
    if (g_8c467188 == 0) {
        (&frame)->f04 = 1;
    }
    v2 = (float)o->tag;
    operation_8c04b3b8(0);
    v11 = (S_vv11 *)a1;
    goto L_8c19a4f8;
    v3 = (int)a1;
    v4 = (int)1;
    for (;;) {
        t1 = call_8c04ba30(v3, (void *)(&(&frame)->f04), (Frame *)((&frame)));
        v11 = (S_vv11 *)t1;
        v20 = (int)v4;
        if (t1->f00 != 0) {
            v5 = (unsigned char)t1->f00;
            if ((unsigned short)v5 == 0xa) {
                if (g_8c4dc470 != 0) {
                    v11 = (S_vv11 *)&t1->f01;
                    v20 = (int)v4;
                    goto L_8c19a4f8;
                }
                v11 = (S_vv11 *)&t1->f01;
                v20 = (int)v4;
            } else {
                if ((unsigned short)v5 == 0x20) {
                    v11 = (S_vv11 *)&t1->f01;
                    v20 = (int)v4;
                    v2 = (float)(v2 + 9.0f);
                } else {
                    v10 = (int)v5;
                    v11 = (S_vv11 *)&t1->f01;
                    if ((&frame)->f04 != 0) {
                        if (((unsigned short)v5 & 0xe0) != 0x80 && ((unsigned short)v5 & 0xe0) != 0xe0) {
                            v10 = (int)v5;
                            v11 = (S_vv11 *)&t1->f01;
                            goto L_8c19a45c;
                        }
                        v7 = (int)((char *)t1 + 0x2);
                        v10 = (int)((unsigned short)v5 << 8 | t1->f01);
                        v11 = (S_vv11 *)v7;
                    }
L_8c19a45c:;
                    if (!(f0 > 0.0f)) {
                        v14 = (int)0;
                        v20 = (int)v14;
                    } else {
                        t2 = operation_8c04b794(v10);
                        t3 = call_8c04b428(t2, (void *)(&(&frame)->f08), a2);
                        if ((v2 + (float)(unsigned char)t3) > g_8c4dc468) {
                            v15 = (float)o->tag;
                            v2 = (float)v15;
                        }
                        (&frame)->f0c = v18;
                        operation_8c04b9dc(t3, (void *)(&(&frame)->f08));
                        v20 = (int)v4;
                        if ((float)(unsigned char)t3 > f0) {
                            v20 = (int)0;
                            (&frame)->f10 = v19 + f0;
                        }
                        v2 = (float)(v19 + (float)(unsigned char)t3);
                        if (g_8c4dc46c != 0) {
                            t4 = clip_rectangle_quad(g_8c4dc460, (void *)(&(&frame)->f08));
                            if (t4 == 0) {
                                goto L_8c19a4f8;
                            }
                        }
                        scale_rectangle_fields(g_8c4dc460, (void *)(&(&frame)->f08));
                        sq_quad_8c38b09e((void *)(&(&frame)->f08), g_8c4dc464);
                    }
                }
            }
        }
L_8c19a4f8:;
        if (v11->f00 == 0) {
            v3 = (int)v11;
            v4 = (int)v20;
            break;
        }
        v3 = (int)v11;
        v4 = (int)v20;
    }
    call_8c04b3e4();
    return (int)(v4);
}
