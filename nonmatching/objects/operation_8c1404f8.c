/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1404f8
 * function: operation_8c1404f8
 * language: c
 * reference size: 196 bytes
 * compiled size: 196 bytes (+0.0%)
 * differing lines: 2 of 83 reference instruction lines
 * differing bytes: 4
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
typedef struct Object Object;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_40 Arg0_40;
struct Object {
    char unknown0[0x3c];
    Arg0_3c *f3c;
    Arg0_40 *f40;
    char unknown44[0x20];
    int f64;
};
struct Arg0_40 {
    int f00;
};
struct Arg0_3c {
    char unknown0[0x3e];
    short f3e;
};
extern void call_8c09bc54(void *, void *);
extern int operation_8c034c7c(void *);
extern int get_field_8c1407a4(int, int, int, int);
extern int TObjAfsLoad_create_8c140848(void *, unsigned int, unsigned int);
extern int get_field_8c1407c4(int, int, int);
void operation_8c1404f8(Object *o)
{
    char *v3;
    int v2;
    int t1;
    int v1;
    int t2;
    int t3;
    int t4;
    int t5;
    if (((o->f40->f00 & 0x7f)) == 0) {
        call_8c09bc54((void *)(((char *)o->f3c + 0x48)), (void *)(((char *)o + 0x6c)));
        t1 = operation_8c034c7c((void *)(o->f3c));
        v1 = (int)0;
        while (3 > v1) {
            v2 = (int)(v1 << 2);
            v3 = (char *)*(int *)((char *)((char *)o + 0x6c) + (v2));
            t2 = get_field_8c1407a4((int)o, t1, (int)(o->f3c->f3e), (int)(v3));
            t3 = TObjAfsLoad_create_8c140848((void *)o, (unsigned int)0xd6, (unsigned int)t2);
            if ((*(int *)((char *)((char *)o + 0x78) + (v2)) = (int)(t3)) == 0) {
                return;
            }
            t4 = get_field_8c1407c4((int)o, t1, (int)(v3));
            t5 = TObjAfsLoad_create_8c140848((void *)o, (unsigned int)0xd6, (unsigned int)t4);
            *(int *)((char *)((char *)o + 0x84) + (v2)) = (int)(t5);
            v1 = (int)(v1 + 1);
        }
        o->f64 = 2;
    }
}
