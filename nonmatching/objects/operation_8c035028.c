/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c035028
 * function: operation_8c035028
 * language: c
 * reference size: 264 bytes
 * compiled size: 264 bytes (+0.0%)
 * differing lines: 10 of 104 reference instruction lines
 * differing bytes: 6
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_20 S_vv1_20;
typedef struct S_vv1_20_0 S_vv1_20_0;
typedef struct S_vv1_24 S_vv1_24;
typedef struct S_vv1_24_0 S_vv1_24_0;
typedef struct S_vv1_28 S_vv1_28;
struct Object {
    char unknown0[0x822];
    short f822;
    short f824;
    char unknown826[0x1a];
    int f840;
    char unknown844[0x128];
    int f96c;
    char unknown970[0x128];
    int fa98;
    char unknowna9c[0x174];
    float fc10;
};
struct S_vv1 {
    char unknown0[0x20];
    S_vv1_20 *f20;
    S_vv1_24 *f24;
    S_vv1_28 *f28;
};
extern char g_8c2f5b38[];
extern void operation_8c034e20(void *);
extern float operation_8c0352d4(void *);
extern int operation_8c034c7c(void *);
extern void call_8c034b20(void *, void *, S_vv1 *, void *);
extern void TObjCMLoadPlDataReq_create_8c13fe54(int);
extern void operation_8c2607b8(int);
void operation_8c035028(Object *o)
{
    S_vv1 *v1;
    void *e;
    float t1;
    int t2;
    operation_8c034e20((void *)(((char *)o + 0x7e4)));
    t1 = operation_8c0352d4((void *)(((char *)o + 0x7e4)));
    o->fc10 = t1;
    v1 = (S_vv1 *)(operation_8c034c7c((void *)(((char *)o + 0x7e4))) * 0x2c + g_8c2f5b38);
    o->f840 = 0;
    if (v1->f20 != 0 && (e = *(void **)((char *)v1->f20 + (o->f824 << 2))) != 0) {
        call_8c034b20((void *)(&o->f840), (void *)(((char *)o + 0x7e4)), v1, e);
        o->f840 = 1;
    }
    o->f96c = 0;
    if (v1->f24 != 0 && (e = *(void **)((char *)v1->f24 + (o->f822 << 2))) != 0) {
        call_8c034b20((void *)(&o->f96c), (void *)(((char *)o + 0x7e4)), v1, e);
        o->f96c = 1;
    }
    call_8c034b20((void *)(&o->fa98), (void *)(((char *)o + 0x7e4)), v1, (void *)(v1->f28));
    o->fa98 = 1;
    TObjCMLoadPlDataReq_create_8c13fe54((int)o);
    operation_8c2607b8((int)o);
}
