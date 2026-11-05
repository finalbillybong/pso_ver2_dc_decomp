/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c044e94
 * function: operation_8c044e94
 * language: c
 * reference size: 376 bytes
 * compiled size: 376 bytes (+0.0%)
 * differing lines: 12 of 156 reference instruction lines
 * differing bytes: 22
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, stack frame and spills; review found and fixed behaviour defects of
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
typedef struct Block_frame_18 {
    float f00;
    float f04;
    float f08;
} Block_frame_18;
struct Object {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x110];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x1a8];
    float f318;
    char unknown31c[0x4];
    float f320;
    Vector3 f324;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    Vector3 f18;
};
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern float errno_wrap_8c130334(float, float);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern void squared_distance_xz(void *, void *);
void operation_8c044e94(Object *o, float f0, Vector3 pos)
{
    Frame frame;
    float t1;
    int ang;
    *(Vector3 *)&o->f164 = pos;
    *(Vector3 *)&o->f158 = *(Vector3 *)&o->f324;
    (&frame)->f00 = *(Vector3 *)&o->f164;
    (&frame)->f0c = *(Vector3 *)&o->f158;
    (&frame)->f18 = (&frame)->f00;
    vector_sub_in_place_8c37f6f0(&(&frame)->f18, &(&frame)->f0c);
    if (1e-07f > ((&frame)->f18.x * (&frame)->f18.x + (&frame)->f18.z * (&frame)->f18.z)) {
        o->f320 = 0.0f;
        o->f318 = 0.0f;
    } else {
        t1 = errno_wrap_8c130334((&frame)->f18.x, (&frame)->f18.z);
        ang = (int)(t1 * 65536.0f / 6.28318405f);
        (&frame)->f18.y = 0.0f;
        (&frame)->f18.x = 0.0f;
        (&frame)->f18.z = f0;
        njPushMatrix_8c38ade4((void *)0x8c400500);
        njRotateY_8c37df90(0, ang);
        call_8c3be38c(0, &(&frame)->f18, &(&frame)->f18);
        njPopMatrix_8c38accc(1);
        o->f318 = (&frame)->f18.x;
        o->f320 = (&frame)->f18.z;
    }
    o->f3c += o->f318;
    o->f44 += o->f320;
    squared_distance_xz(&pos, &o->f3c);
}
