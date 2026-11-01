/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13bf58
 * function: TBoss3VoloptP01_ctor_1_8c13bf58
 * language: c
 * reference size: 348 bytes
 * compiled size: 348 bytes (+0.0%)
 * differing lines: 94 of 131 reference instruction lines
 * differing bytes: 207
 * provenance: generator draft (mode switch2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    short f20;
    char unknown22[0xa];
    short f2c;
    short f2e;
    short f30;
    char unknown32[0xa];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x1c];
    int f84;
    char unknown88[0x34c];
    int f3d4;
    int f3d8;
};
struct Arg1 {
    char unknown0[0x2c];
    short f2c;
    short f2e;
};
extern void TObjEnemyCustom_ctor_8c0c2354(void *);
extern void call_8c18e044(void *, void *, int, int, int);
extern void call_8c13c0b4(Object *);
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TObjVoloptShutter_ctor_8c15af90(void *, int);
extern void operation_8c07de9c();
Object *TBoss3VoloptP01_ctor_1_8c13bf58(Object *o, Arg1 *a1, int a2, int a3, int a4)
{
    Object **home = &o;
    int v1;
    float t1;
    float t2;
    int t3;
    (void)home;
    TObjEnemyCustom_ctor_8c0c2354((void *)o);
    o->dispatch = (void *)0x8c26d3b8;
    call_8c18e044((void *)(((char *)o + 0x3dc)), operation_8c07de9c, 0, 8, 0xb);
    o->f3d8 = 0;
    o->tag = (int)(*(int *)0x8c3137a4);
    o->size = 0x434;
    o->f20 = a3;
    o->f30 = a4;
    o->f84 = 0;
    o->f2c = a1->f2c;
    o->f2e = a1->f2e;
    call_8c13c0b4(o);
    v1 = (int)(int)((float)(a2 * 0x3c) * 65536.0f / 360.0f);
    t1 = njCos_8c38c154(v1);
    o->f3c = *(float *)0x8c4d9b64 + t1 * 76.0f;
    t2 = njSin_8c37eb0c(v1);
    o->f44 = *(float *)0x8c4d9b6c + t2 * 76.0f;
    o->f40 = 0.0f;
    o->f64 = -0x4000 - v1;
    t3 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x38);
    if (t3 != 0) {
        TObjVoloptShutter_ctor_8c15af90((void *)t3, a2);
    }
    o->f3d4 = (int)(t3);
    return o;
}
