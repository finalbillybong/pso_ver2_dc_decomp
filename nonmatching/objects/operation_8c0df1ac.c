/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0df1ac
 * function: operation_8c0df1ac
 * language: c
 * reference size: 564 bytes
 * compiled size: 564 bytes (+0.0%)
 * differing lines: 168 of 238 reference instruction lines
 * differing bytes: 343
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in stack
 *   frame and spills, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x5c];
    float f5c;
    char unknown60[0x21];
    unsigned char f81;
    char unknown82[0xe];
    float f90;
    char unknown94[0x4];
    float f98;
    float f9c;
};
struct Frame {
    float f00;
    float f04;
    int f08;
    int f0c;
    int f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    char unknown40[0x8];
};
extern int g_8c46ee80;
void operation_8c0df1ac(Object *o, int a1, int a2)
{
    Frame frame;
    float v1;
    float v2;
    int v3;
    float v4;
    float v5;
    float v6;
    float v7;
    float t1;
    float t2;
    float t3;
    float t4;
    float t5;
    float t6;
    float t7;
    if (((o->f81 & 0x20)) == 0) {
        return;
    }
    ((void (*)(Object *, void *, Frame *))0x8c0e0060)(o, &(&frame)->f3c, (&frame));
    v1 = (float)o->f98;
    v2 = (float)o->f9c;
    t5 = ((float (*)(float, float))0x8c130334)(v2 - (&frame)->f04, v1 - (&frame)->f00);
    v3 = (int)(int)(t5 * 65536.0f / 6.28318405f);
    t6 = ((float (*)(int, void *))0x8c38d7d8)(g_8c46ee80 + 0x90, &(&frame)->f3c);
    v4 = (float)(1000.0f / t6);
    t7 = ((float (*)(int))0x8c38c154)(v3);
    v5 = (float)(v4 * t7 + (&frame)->f00);
    t1 = ((float (*)(int))0x8c37eb0c)(v3);
    (&frame)->f14 = v5;
    (&frame)->f2c = (int)(&(&frame)->f14);
    (&frame)->f08 = a2;
    (&frame)->f30 = (int)(&(&frame)->f08);
    (&frame)->f0c = a2;
    (&frame)->f34 = 0;
    (&frame)->f10 = a2;
    (&frame)->f38 = 1;
    (&frame)->f18 = v4 * t1 + (&frame)->f04;
    t2 = ((float (*)(int))0x8c38c154)(v3 + 0x4000);
    (&frame)->f1c = o->f90 * (t2 * 12.0f) + v1;
    t2 = ((float (*)(int))0x8c37eb0c)(v3 + 0x4000);
    (&frame)->f20 = o->f90 * (t2 * 12.0f) + v2;
    t3 = ((float (*)(int))0x8c38c154)(v3 + -0x4000);
    (&frame)->f24 = o->f90 * (t3 * 12.0f) + v1;
    t4 = ((float (*)(int))0x8c37eb0c)(v3 + -0x4000);
    (&frame)->f28 = o->f90 * (t4 * 12.0f) + v2;
    ((void (*)(void *, int, int, float))0x8c391be0)(&(&frame)->f2c, 1, 0x20, o->f5c + 0.04485f);
    (&frame)->f0c = (&frame)->f08 = -0x1000000;
    (&frame)->f10 = -0x1000000;
    v6 = (float)o->f90;
    v7 = v6 * 3.0f;
    (&frame)->f1c += v7;
    v6 = v6 * 2.5f;
    (&frame)->f20 += v6;
    (&frame)->f24 += v7;
    (&frame)->f28 += v6;
    ((void (*)(void *, int, int, float))0x8c391be0)(&(&frame)->f2c, 1, 0x20, o->f5c + 0.01495f);
}
