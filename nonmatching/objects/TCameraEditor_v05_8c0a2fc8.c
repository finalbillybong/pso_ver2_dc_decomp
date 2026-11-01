/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a2fc8
 * function: TCameraEditor_v05_8c0a2fc8
 * language: c
 * reference size: 100 bytes
 * compiled size: 100 bytes (+0.0%)
 * differing lines: 22 of 39 reference instruction lines
 * differing bytes: 23
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
struct Object {
    char unknown0[0x44];
    int f44;
    int f48;
    int f4c;
    char unknown50[0x4];
    int f54;
    float f58;
    float f5c;
    float f60;
    char unknown64[0x70];
    int fd4;
};
extern int g_8c46f080;
extern void operation_8c0a227c(int);
extern void initialize_view_motion_fields(void *);
void TCameraEditor_v05_8c0a2fc8(Object *o)
{
    operation_8c0a227c(6);
    o->f58 = 0.0f;
    o->f5c = 0.0f;
    o->f60 = -100.0f;
    o->f44 = 0;
    o->f54 = 0;
    o->fd4 = 0;
    *(int *)0x8c46f080 = 1;
    initialize_view_motion_fields((void *)o);
    o->f48 = 0;
    o->f4c = 0;
}
