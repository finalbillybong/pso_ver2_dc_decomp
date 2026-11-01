/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e3388
 * function: TWindowSimpleStatus_update_8c0e3388
 * language: c
 * reference size: 248 bytes
 * compiled size: 248 bytes (+0.0%)
 * differing lines: 34 of 92 reference instruction lines
 * differing bytes: 35
 * provenance: generator draft (mode bgotoext)
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
typedef struct Object Object;
struct Object {
    char unknown0[0x48];
    float f48;
    float f4c;
    char unknown50[0x2c];
    int f7c;
    int f80;
};
extern int g_8c418248;
extern void operation_8c0e35bc(void *);
extern void operation_8c0e3600(void *);
extern void operation_8c0e3598(void *);
extern void operation_8c0e30c8(void *, int, void *, int);
extern void call_8c0db30c(Object *);
extern void interpolate_view_parameters(void *);
extern void update_view_nodes(void *, void *);
extern int rand(void);
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(int);
void TWindowSimpleStatus_update_8c0e3388(Object *o)
{
    int v1;
    float v2;
    float t1;
    float t2;
    int t3;
    int t4;
    operation_8c0e35bc((void *)o);
    operation_8c0e3600((void *)o);
    operation_8c0e3598((void *)o);
    operation_8c0e30c8((void *)o, (int)((void *)0x8c285928), (void *)(((char *)o + 0x68)), (int)(g_8c418248 + (int)o->f7c + 1 & 3));
    call_8c0db30c(o);
    interpolate_view_parameters((void *)o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
    if (o->f80 != 0) {
        o->f80 -= 1;
        t3 = rand();
        v1 = (int)(int)((float)t3 / 32768.0f * 65536.0f);
        t4 = rand();
        v2 = (float)((float)t4 / 32768.0f * 5.0f);
        t1 = njCos_8c38c154(v1);
        o->f48 += v2 * t1;
        t2 = njSin_8c37eb0c(v1);
        o->f4c += v2 * t2;
    }
}
