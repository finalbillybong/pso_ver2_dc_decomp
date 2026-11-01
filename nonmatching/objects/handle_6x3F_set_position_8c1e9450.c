/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e9450
 * function: handle_6x3F_set_position_8c1e9450
 * language: c
 * reference size: 216 bytes
 * compiled size: 216 bytes (+0.0%)
 * differing lines: 26 of 90 reference instruction lines
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    Vector3 f0c;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x314];
    int f37c;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c0c4f08(void *);
extern void operation_8c01d778(void *, short);
extern void operation_8c1e8e60(int, int, int);
void handle_6x3F_set_position_8c1e9450(Object *o)
{
    int v1;
    int v2;
    int v5;
    short v8;
    S_c8c021ef8 *t1;
    int t2;
    {
        Object *base = o;
        t1 = lookup_low_id((int)(base->f02));
        if (t1 != 0) {
            v1 = (int)0;
            t2 = g_8c4627c8;
            v8 = base->f02;
            v5 = (int)v1;
            if (t2 == 0) {
                v2 = (int)v1;
                if ((unsigned short)v8 == g_8c418248) {
                    v2 = (int)1;
                }
                v5 = (int)v2;
            }
            if (v5 == 0) {
                t2 = call_8c0c4f08((void *)(&base->f0c));
                if (t2 == 0) {
                    v1 = (int)1;
                }
            }
            if (v1 != 0) {
                *(Vector3 *)&t1->f3c = *(Vector3 *)&base->f0c;
                v8 = (short)base->f08;
                if (v8 >= 0) {
                    t1->f37c = (int)(v8);
                }
                if (base->f0a >= 0) {
                    operation_8c01d778((void *)t1, base->f0a);
                }
                t1->f64 = base->f06;
                if (base->f04 == 0 || base->f04 != 1) {
                    t1->f34 &= -0x100001;
                    goto L_8c1e94f0;
                }
                t1->f34 |= 0x100000;
L_8c1e94f0:;
                operation_8c1e8e60((int)t1, 1, 0);
            }
        }
    }
}
