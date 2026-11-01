/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c087e78
 * function: operation_8c087e78
 * language: c
 * reference size: 344 bytes
 * compiled size: 340 bytes (-1.2%)
 * differing lines: 106 of 163 reference instruction lines
 * differing bytes: 194
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_74 Arg0_74;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x34];
    Vector3 f34;
    float f40;
    float f44;
    float f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    char unknown60[0x14];
    Arg0_74 *f74;
};
struct S_vv1 {
    Vector3 f00;
    float f0c;
    float f10;
    float f14;
    int f18;
    int f1c;
    int f20;
    int f24;
    int f28;
    int f2c;
    float f30;
    int f34;
};
extern int game_malloc_buffer_8c011e9c(int);
extern int rand(void);
int operation_8c087e78(Object *o)
{
    S_vv1 *v1;
    float v3;
    float v4;
    int v9;
    int v2;
    int v8;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    t1 = game_malloc_buffer_8c011e9c((int)(o->f58 * 0x38));
    o->f74 = (Arg0_74 *)t1;
    if (o->f74 == 0) {
        return 0;
    }
    v8 = (int)0;
    v9 = (int)o->f74;
    goto L_8c087fa2;
    v1 = (S_vv1 *)o->f74;
    v2 = (int)0;
L_8c087eac:;
    *(Vector3 *)&v1->f00 = *(Vector3 *)&o->f34;
    v3 = (float)o->f40;
    t2 = rand();
    v1->f0c = v3 * ((float)t2 / 32768.0f) - v3 * 0.5f;
    t3 = rand();
    v1->f10 = o->f44 * ((float)t3 / 32768.0f);
    v4 = (float)o->f48;
    t4 = rand();
    v1->f14 = v4 * ((float)t4 / 32768.0f) - v4 * 0.5f;
    v1->f18 = 0;
    v1->f1c = 0;
    v1->f20 = 0;
    t5 = rand();
    v1->f24 = (int)((float)o->f4c * ((float)t5 / 32768.0f));
    t6 = rand();
    v1->f28 = (int)((float)o->f50 * ((float)t6 / 32768.0f));
    t7 = rand();
    v1->f2c = (int)((float)o->f54 * ((float)t7 / 32768.0f));
    v1->f30 = 1.0f;
    v1->f34 = (int)(o->f5c);
    v8 = (int)(v2 + 1);
    v9 = (int)((int)v1 + 0x38);
L_8c087fa2:;
    if (o->f58 > v8) {
        v1 = (S_vv1 *)v9;
        v2 = (int)v8;
        goto L_8c087eac;
    }
    return 1;
}
