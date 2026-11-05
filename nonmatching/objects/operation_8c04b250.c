/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04b250
 * function: operation_8c04b250
 * language: c
 * reference size: 360 bytes
 * compiled size: 364 bytes (+1.1%)
 * differing lines: 16 of 154 reference instruction lines
 * differing bytes: 106
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +4 bytes
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2
 *   (emulator A/B: RAM, trace and first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c04ba30 S_c8c04ba30;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv14 S_vv14;
struct Frame {
    int f00;
    float f04;
    float f08;
    char unknownc[0x18];
};
struct Object {
    char tag;
};
struct S_c8c04ba30 {
    char f00;
    char f01;
};
struct S_vv14 {
    char f00;
};
extern int g_8c467188;
extern void restore_child_blend(void);
extern void operation_8c04b3b8(int);
extern S_c8c04ba30 *call_8c04ba30(char *, Frame *, int);
extern int operation_8c04b794(int);
extern int call_8c04b428(int, void *, int);
extern void operation_8c04b9dc(int, void *);
extern void sq_quad_8c38b09e(void *, float);
extern void call_8c04b3e4(void);
void operation_8c04b250(char *s, int a1, int a2, float f0, float f1, float f2)
{
    Frame frame;
    char *p;
    char c;
    char lo;
    char hi;
    int t1;
    int t2;
    frame.f00 = 0;
    if (*s != 0) {
        if (g_8c467188 == 0) {
            frame.f00 = 1;
        }
        frame.f04 = f0;
        frame.f08 = f1;
        restore_child_blend();
        operation_8c04b3b8(0);
        a2 &= 1;
        while (*s != 0) {
            p = (char *)call_8c04ba30(s, &frame, 0);
            c = *p;
            s = p;
            if (c != 0) {
                s = p + 1;
                if ((unsigned char)c == 0xa) {
                    if (a2 != 0) {
                        frame.f04 += 9.0f;
                    } else {
                        frame.f04 = f0;
                        frame.f08 += 20.0f;
                    }
                } else if ((unsigned char)c == 0x20) {
                    frame.f04 += 9.0f;
                } else {
                    if (frame.f00 != 0 && (((unsigned char)c & 0xe0) == 0x80 || ((unsigned char)c & 0xe0) == 0xe0)) {
                        lo = *s++;
                        hi = c;
                    } else {
                        lo = c;
                        hi = 0;
                    }
                    t1 = operation_8c04b794((unsigned short)(unsigned char)hi << 8 | (unsigned char)lo);
                    t2 = call_8c04b428(t1, (void *)&frame.f04, a1);
                    operation_8c04b9dc(t2, (void *)&frame.f04);
                    sq_quad_8c38b09e((void *)&frame.f04, f2);
                    frame.f04 += (float)(unsigned char)t2;
                }
            }
        }
        call_8c04b3e4();
    }
}
