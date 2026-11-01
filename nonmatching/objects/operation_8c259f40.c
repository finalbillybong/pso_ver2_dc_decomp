/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c259f40
 * function: operation_8c259f40
 * language: c
 * reference size: 428 bytes
 * compiled size: 428 bytes (+0.0%)
 * differing lines: 26 of 173 reference instruction lines
 * differing bytes: 37
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_194 Arg0_194;
typedef struct S_x96720 S_x96720;
struct Object {
    char unknown0[0xe4];
    float fe4;
    char unknowne8[0x8];
    int ff0;
    char unknownf4[0x90];
    int f184;
    int f188;
    int f18c;
    char unknown190[0x4];
    Arg0_194 *f194;
};
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
struct S_x96720 {
    int f00;
};
extern S_g8c418248 *g_8c418248;
extern int g_8c44be04;
extern S_c8c021ef8 *lookup_low_id(int);
extern float distance_xz(void *, void *);
extern void call_8c18e720(int, void *);
extern void request_resource_release(void *);
extern int operation_8c029430(void);
extern void operation_8c0293a8(void);
extern void operation_8c0293ec(void);
void operation_8c259f40(Object *o)
{
    int v3;
    S_c8c021ef8 *t1;
    int v4;
    int v6;
    int v15;
    int v16;
    int v2;
    float t2;
    S_c8c021ef8 *t3;
    float t4;
    int t5;
    int t6;
    int k;
    int v1;
    v1 = (int)0x184;
    v3 = 0;
    v2 = (int)*(int *)((char *)((char *)o + 0x0) + (v1));
    *(int *)((char *)((char *)o + 0x0) + (v1)) = 0;
    o->f188 = 0;
    o->f18c = 0;
    k = 0x18c;
    while (4 > v3) {
        t1 = lookup_low_id(v3);
        if (t1 != 0) {
            v4 = (int)t1->f37c;
            if (v4 == o->ff0) {
                *(int *)((char *)o + k) = 1;
            }
            v6 = (int)0;
            if (v4 == g_8c44be04) {
                t2 = distance_xz((void *)(((char *)t1 + 0x3c)), (void *)(((char *)o + 0x3c)));
                if (!(t2 > (o->fe4 * o->fe4))) {
                    *(int *)((char *)o + 0x188) += 1;
                    v6 = (int)1;
                }
            }
            *(int *)((char *)((char *)o + 0x174) + (*(int *)((char *)((char *)o + 0x0) + (v1)) << 2)) = (int)(v6);
            call_8c18e720((int)(*(int *)((char *)((char *)o + 0x0) + (v1)) * 0x18 + (int)o + 0x114), (void *)(((char *)t1 + 0x7e4)));
            ((S_x96720 *)((int)o + v1))->f00 += 1;
        }
        v3 = (int)(v3 + 1);
    }
    v15 = (int)o->f184;
    v16 = (int)v15;
    while (4 > v16) {
        *(char *)((char *)((char *)o + 0x114) + (v16 * 0x18)) = 0;
        v16 = (int)(v16 + 1);
    }
    if (v2 != o->f184 && o->f194 != 0) {
        request_resource_release((void *)(o->f194));
        o->f194 = (Arg0_194 *)0;
    }
    t3 = lookup_low_id((int)g_8c418248);
    if (t3 != 0 && t3->f37c == g_8c44be04) {
        t4 = distance_xz((void *)(((char *)t3 + 0x3c)), (void *)(((char *)o + 0x3c)));
        if (!(t4 > ((o->fe4 + 25.0f) * (o->fe4 + 25.0f)))) {
            t5 = operation_8c029430();
            if (t5 == 0) {
                return;
            }
            operation_8c0293a8();
            return;
        }
        t6 = operation_8c029430();
        if (t6 == 0) {
            operation_8c0293ec();
        }
    }
}
