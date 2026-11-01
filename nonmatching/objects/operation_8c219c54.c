/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c219c54
 * function: operation_8c219c54
 * language: c
 * reference size: 368 bytes
 * compiled size: 364 bytes (-1.1%)
 * differing lines: 18 of 155 reference instruction lines
 * differing bytes: 127
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
typedef struct S_c8c1c7658 S_c8c1c7658;
typedef struct S_g8c505920 S_g8c505920;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg2 Arg2;
struct Arg2 {
    char f00;
    char f01;
    char f02;
};
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
};
struct Arg0_24 {
    char unknown0[0x2c];
    int f2c;
};
struct S_c8c1c7658 {
    char unknown0[0x8];
    short f08;
};
extern int g_8c50591c;
extern S_g8c505920 *g_8c505920;
extern void operation_1c7dd4(void *);
extern void operation_8c219bd8(void);
extern int next_random_state(void *);
extern int call_8c18e8a0(int, int);
extern int call_8c18e768(int, int);
extern S_c8c1c7658 *operation_8c1c7658(void *);
extern void operation_8c1c934c(Arg2 *, short);
void operation_8c219c54(Object *o, int a1, Arg2 *a2)
{
    unsigned int v1;
    int i;
    int cnt;
    unsigned int idx;
    unsigned int key;
    int t3;
    short d;
    char *v13;
    S_c8c1c7658 *t2;
    int t4;
    if (!((unsigned int)0xd > (unsigned int)(unsigned char)a1)) {
        return;
    }
    operation_1c7dd4((void *)a2);
    a2->f00 = 1;
    a2->f01 = 3;
    operation_8c219bd8();
    v1 = (unsigned char)*(unsigned char *)((char *)g_8c505920 + (unsigned char)a1);
    if (v1 != 0) {
        t4 = next_random_state((void *)o->f24->f2c);
        idx = (unsigned int)((float)(unsigned int)v1 * (float)(unsigned int)t4 / 4294967296.0f);
        cnt = 0;
        i = cnt;
        v13 = (char *)g_8c50591c;
        key = (unsigned char)a1;
        while (i != 0x84) {
            if ((unsigned char)*(unsigned char *)(v13 + i) == key) {
                if (cnt == idx) {
                    if (0x50 > i) {
                        t3 = (unsigned char)call_8c18e8a0(i, 5);
                        a2->f02 = call_8c18e768(i, 5);
                        t2 = operation_8c1c7658((void *)a2);
                        if (t2 == 0) {
                            return;
                        }
                        d = t2->f08;
                        switch (t3) {
                        case 0:
                            operation_8c1c934c(a2, d * -2);
                            break;
                        case 1:
                            operation_8c1c934c(a2, -d);
                            break;
                        case 3:
                            operation_8c1c934c(a2, d);
                            break;
                        case 4:
                            operation_8c1c934c(a2, d << 1);
                            break;
                        }
                        return;
                    }
                    if (!((unsigned int)0x84 > key)) {
                        return;
                    }
                    a2->f02 = i + -0x40;
                    return;
                }
                cnt++;
            }
            i++;
        }
    }
}
