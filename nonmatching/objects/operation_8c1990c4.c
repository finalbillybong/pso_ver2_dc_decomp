/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1990c4
 * function: operation_8c1990c4
 * language: c
 * reference size: 384 bytes
 * compiled size: 384 bytes (+0.0%)
 * differing lines: 30 of 155 reference instruction lines
 * differing bytes: 31
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, stack frame and spills, instruction or operand order; review found and
 *   fixed behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg1 Arg1;
typedef struct S_vv13 S_vv13;
typedef struct S_vv14 S_vv14;
typedef struct S_vv4 S_vv4;
typedef struct S_vv42 S_vv42;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x50];
    int f84;
};
struct S_vv4 {
    unsigned short f00;
    short f02;
};
struct Arg1 {
    char unknown0[0x14];
    float f14;
    char unknown18[0x24];
    float f3c;
    char unknown40[0x4];
    float f44;
};
struct S_vv42 {
    int f00;
    int f04;
    int f08;
};
struct Frame {
    S_frame_0 *f00;
    char unknown4[0x4];
};
struct S_vv13 {
    char unknown0[0x8];
    float f08;
    float f0c;
    char unknown10[0x1c];
    int f2c;
};
struct S_vv14 {
    char unknown0[0x8];
    float f08;
    float f0c;
};
extern S_g8c418248 *g_8c418248;
extern int lookup_low_id(int);
extern int call_8c18e954(int, int);
extern int call_8c18e808(int, int);
extern int operation_8c1ac704(void *, short, short);
extern void operation_8c10393c(void *, short, short);
extern void operation_8c103ac8(void *, void *, short, short);
extern void draw_view_nodes(void *, void *, void *);
void operation_8c1990c4(Object *o, Arg1 *a1)
{
    S_c8c021ef8 *t1;
    int i;
    S_vv4 *p;
    unsigned short k;
    float x;
    float y;
    float yy;
    S_vv42 *q;
    S_vv13 *n0;
    S_vv14 *n1;
    void *n2;
    short id;
    short sub;
    t1 = (S_c8c021ef8 *)lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        i = 0;
        p = (S_vv4 *)o->f84;
        while ((k = p->f00) != 8) {
            if (k != 0) {
                x = (float)(unsigned int)call_8c18e954(i, 3) * 58.0f;
                y = (float)(unsigned int)call_8c18e808(i, 3) * 51.0f;
                yy = a1->f14 + y + 9.0f;
                if (!(yy + 47.0f < a1->f3c) && !(yy > a1->f44)) {
                    q = (S_vv42 *)o->f30;
                    n0 = (S_vv13 *)q->f00;
                    n1 = (S_vv14 *)q->f04;
                    n2 = (void *)q->f08;
                    n0->f08 = x + 6.0f;
                    n0->f0c = y + 11.0f;
                    n1->f08 = x + 3.0f;
                    n1->f0c = y + 9.0f;
                    id = p->f00;
                    sub = p->f02;
                    if (operation_8c1ac704(t1, id, sub) != 0) {
                        n0->f2c = -1;
                    } else {
                        n0->f2c = -0xbfbfc0;
                    }
                    operation_8c10393c((void *)n0, id, sub);
                    operation_8c103ac8(n2, (void *)n0, id, sub);
                    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)a1);
                }
            }
            i++;
            p++;
        }
    }
}
