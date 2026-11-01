/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1bc46c
 * function: operation_8c1bc46c
 * language: c
 * reference size: 228 bytes
 * compiled size: 228 bytes (+0.0%)
 * differing lines: 8 of 84 reference instruction lines
 * differing bytes: 9
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
typedef struct S_g8c4e2284 S_g8c4e2284;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
typedef struct Block_p0_3e0 {
    float f00;
    float f04;
    float f08;
} Block_p0_3e0;
struct Object {
    char unknown0[0x394];
    int f394;
    char unknown398[0xc];
    int f3a4;
    char unknown3a8[0x2c];
    int f3d4;
    char unknown3d8[0x8];
    Block_p0_3e0 f3e0;
};
struct S_vv2 {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern S_g8c4e2284 *g_8c4e2284;
extern int call_8c04a52c(Object *, int, float);
extern float object_random_fraction(void *);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
void operation_8c1bc46c(Object *o)
{
    char *v1;
    int v65;
    int v3;
    S_vv2 *v2;
    int t1;
    float t2;
    float t3;
    float t4;
    if (((o->f3d4 & 0x7f)) == 0) {
        v1 = (char *)o->f3a4;
        v65 = (int)0xffff;
        if ((int)(v1) == v65) {
            t1 = call_8c04a52c(o, 0, 287.5f);
            o->f3a4 = (unsigned short)t1;
            return;
        }
        o->f3a4 = (int)(v65);
        if (o->f394 != 0) {
            v2 = (S_vv2 *)g_8c4e2284;
            if (v2 != 0) {
                t4 = object_random_fraction((void *)o);
                v3 = (int)(t4 * 65536.0f);
                *(Vector3 *)&o->f3e0 = *(Vector3 *)&v2->f3c;
                o->f3e0.f04 = 0.0f;
                t2 = njSin_8c37eb0c(v3) * 110.0f;
                o->f3e0.f00 += t2;
                t3 = njCos_8c38c154(v3);
                o->f3e0.f08 += t3 * 110.0f;
            }
        }
    }
}
