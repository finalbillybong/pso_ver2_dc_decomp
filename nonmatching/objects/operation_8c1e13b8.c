/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e13b8
 * function: operation_8c1e13b8
 * language: c
 * reference size: 364 bytes
 * compiled size: 364 bytes (+0.0%)
 * differing lines: 40 of 153 reference instruction lines
 * differing bytes: 42
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0xa4];
    int fa4;
    int fa8;
};
struct Arg1 {
    char unknown0[0x10];
    float f10;
    char unknown14[0x4];
    float f18;
    char unknown1c[0x18];
    float f34;
};
struct S_vv3 {
    char f00;
    unsigned char f01;
};
struct Frame {
    float f00;
    float f04;
    char unknown8[0x18];
};
struct Arg2 {
    float f00;
    float f04;
};
extern void operation_8c04b418(int);
extern void sq_header_8c38af22(int, int);
extern int operation_8c04b794(int);
extern int call_8c04b428(int, Frame *, int);
extern void operation_8c04b9dc(int, void *);
extern void scale_rectangle_fields(void *, void *);
extern void sq_quad_8c38b09e(Frame *, float);
void operation_8c1e13b8(Object *o, Arg1 *a1, Arg2 *a2)
{
    Frame frame;
    int c;
    int t2;
    char *p;
    char n;
    float v11;
    float v2;
    p = (char *)o->fa4;
    if (p != 0) {
        v2 = -1.0f / (a1->f34 + 0.0897f);
        while (*p != 0) {
            operation_8c04b418((int)p == o->fa8 ? 1 : 2);
            sq_header_8c38af22(0, -1);
            n = p[1];
            p += 3;
            while ((unsigned char)n-- != 0) {
                c = *p;
                p++;
                if (((unsigned short)c & 0xe0) == 0x80 || ((unsigned short)c & 0xe0) == 0xe0) {
                    c = (unsigned short)c << 8 | (*p & 0xff);
                    p++;
                    n--;
                }
                t2 = call_8c04b428(operation_8c04b794(c), (Frame *)((&frame)), -1);
                v11 = a1->f10;
                if ((a2->f00 + (float)(unsigned char)t2) > (v11 + a1->f18)) {
                    a2->f00 = v11;
                    a2->f04 += 20.0f;
                }
                if ((unsigned short)c == 0x20) {
                    a2->f00 += (float)(unsigned char)t2;
                } else {
                    (&frame)->f00 = a2->f00;
                    (&frame)->f04 = a2->f04;
                    operation_8c04b9dc(t2, (void *)(&frame));
                    scale_rectangle_fields((void *)a1, (void *)(&frame));
                    sq_quad_8c38b09e((Frame *)((&frame)), v2);
                    a2->f00 += (float)(unsigned char)t2;
                }
            }
        }
    }
}
