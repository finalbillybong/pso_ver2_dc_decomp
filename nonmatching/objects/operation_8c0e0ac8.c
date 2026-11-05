/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e0ac8
 * function: operation_8c0e0ac8
 * language: c
 * reference size: 1044 bytes
 * compiled size: 1036 bytes (-0.8%)
 * differing lines: 437 of 435 reference instruction lines
 * differing bytes: 858
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Vec2 {
    float x;
    float y;
} Vec2;
typedef struct Object {
    char unknown0[0x40];
    float f40;
    float f44;
    char unknown48[0x8];
    float f50;
    float f54;
    char unknown58[0x48];
    float fa0;
    float fa4;
} Object;
extern void call_8c0e0060(Object *, Vector3 *, int);
extern float call_8c38d7d8(int, Vector3 *);
extern float errno_wrap_8c130334(float, float);
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(int);
extern void call_8c0dfa54(Object *, int, Vec2 *);
extern int operation_8c0dc92c(Object *, Vec2 *, float *);
extern int rand(void);
static inline int place(Object *o, Vec2 *d, Vec2 *a2, float k, int ang, float s)
{
    int clip;
    d->x += k * njCos_8c38c154(ang);
    d->y += k * njSin_8c37eb0c(ang);
    a2->x = o->fa0 + d->x - o->f40 * 0.5f;
    a2->y = o->fa4 + d->y - o->f44 * 0.5f;
    clip = 0;
    if (*(float *)0x8c4e2ba8 + 20.0f > a2->x) {
        a2->x = *(float *)0x8c4e2ba8 + 20.0f;
        clip = 1;
    }
    if (a2->x > *(float *)0x8c4e2bb0 - 20.0f - o->f50 * s) {
        a2->x = *(float *)0x8c4e2bb0 - 20.0f - o->f50 * s;
        clip = 1;
    }
    if (*(float *)0x8c4e2bac + 40.0f > a2->y) {
        a2->y = *(float *)0x8c4e2bac + 40.0f;
        clip = 1;
    }
    if (a2->y > *(float *)0x8c4e2bb4 - 40.0f - o->f54 * s) {
        a2->y = *(float *)0x8c4e2bb4 - 40.0f - o->f54 * s;
        clip = 1;
    }
    return clip;
}
int operation_8c0e0ac8(Object *o, Vec2 *a1, Vec2 *a2)
{
    Vec2 d;
    Vector3 pos;
    float k;
    float x;
    float y;
    int ang;
    call_8c0e0060(o, &pos, 0);
    k = 1000.0f / call_8c38d7d8(*(int *)0x8c46ee80 + 0x90, &pos);
    x = a1->x + o->f50 * 0.5f - o->fa0;
    y = a1->y + o->f54 * 0.5f - o->fa4;
    ang = (int)(errno_wrap_8c130334(y, x) * 65536.0f / 6.28318405f);
    d.x = x - k * njCos_8c38c154(ang);
    d.y = y - k * njSin_8c37eb0c(ang);
    d.x = d.x / (o->f50 + 19.0f);
    d.y = d.y / (o->f54 + 13.0f);
    call_8c0dfa54(o, (int)(errno_wrap_8c130334(d.y, d.x) * 65536.0f / 6.28318405f) + 0x8000, &d);
    ang = (int)(errno_wrap_8c130334(d.y, d.x) * 65536.0f / 6.28318405f);
    if (place(o, &d, a2, k, ang, 1.0f) != 0) return 0;
    if (operation_8c0dc92c(o, a2, &o->f40) == 0) return 1;
    call_8c0dfa54(o, (int)((float)ang + ((float)rand() / 32768.0f * 32768.0f - 16384.0f)), &d);
    ang = (int)(errno_wrap_8c130334(d.y, d.x) * 65536.0f / 6.28318405f);
    if (place(o, &d, a2, k, ang, 1.0f) != 0) return 0;
    return operation_8c0dc92c(o, a2, &o->f40) == 0;
}
