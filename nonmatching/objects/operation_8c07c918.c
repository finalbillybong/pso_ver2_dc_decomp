/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07c918
 * function: operation_8c07c918
 * language: c
 * reference size: 104 bytes
 * compiled size: 108 bytes (+3.8%)
 * differing lines: 16 of 39 reference instruction lines
 * differing bytes: 89
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern int rand(void);
extern void call_8c07c9c0(Object *, int, int, int);
Object *operation_8c07c918(Object *o, int a1, int a2, int a3)
{
    Object **home = &o;
    float pm3;
    float pm5;
    int t1;
    float pm4;
    float pm2;
    int pm6;
    float pm7;
    float pm8;
    void *pm9;
    float pm10;
    pm8 = 32768.0f;
    (void)home;
    pm9 = (void *)o;
    TObject_ctor_8c0330e4(pm9, (void *)a1);
    o->dispatch = (void *)0x8c2641e8;
    pm6 = rand();
    t1 = pm6;
    pm10 = (float)t1;
    pm3 = pm10;
    pm4 = pm8;
    pm7 = pm3 / pm4;
    pm2 = pm7;
    pm5 = 0.8f;
    t1 = (pm2) <= pm5;
    a1 = t1;
    call_8c07c9c0(o, a2, a3, (a1));
    return o;
}
