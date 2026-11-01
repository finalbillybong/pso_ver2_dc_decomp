/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0216f4
 * function: TObjPlayer_update_8c0216f4
 * language: c
 * reference size: 332 bytes
 * compiled size: 332 bytes (+0.0%)
 * differing lines: 4 of 126 reference instruction lines
 * differing bytes: 4
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
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d0];
    short f308;
    short f30a;
    char unknown30c[0x4a4];
    int f7b0;
};
extern void operation_8c0221ac(void *);
extern void operation_8c02718c(void *);
extern void operation_8c024840(Object *);
extern void operation_8c0248bc(void *);
extern void operation_8c1e8e60(int, short, int);
extern void operation_8c01c5f0(Object *);
extern void update_object_center(void *);
extern void actor_elevated_position(void *, void *);
extern void transform_actor_records(void *);
extern void operation_8c05228c(Object *);
extern void operation_8c05237c(Object *);
extern void operation_8c0521a0(Object *);
extern void operation_8c027090(Object *);
extern void operation_8c02c728(void *);
extern void operation_8c026e7c(Object *);
void TObjPlayer_update_8c0216f4(Object *o)
{
    operation_8c0221ac((void *)o);
    operation_8c02718c((void *)o);
    operation_8c024840(o);
    operation_8c0248bc((void *)o);
    operation_8c1e8e60((int)o, o->f30a, 1);
    operation_8c01c5f0(o);
    update_object_center((void *)o);
    actor_elevated_position((void *)(((char *)o + 0x7d4)), (void *)o);
    if (((o->f34 & 0x800)) == 0) {
        if (o->f7b0 == 0) {
            if (o->f308 != 1) {
                if (o->f308 == 2) {
                    goto L_8c021778;
                }
                if (o->f308 == 3) {
                    goto L_8c021782;
                }
                if (o->f308 == 6) {
                    goto L_8c021778;
                }
                goto L_8c0217d8;
            }
            transform_actor_records((void *)o);
            operation_8c05228c(o);
            operation_8c05237c(o);
            goto L_8c0217d8;
L_8c021778:;
            transform_actor_records((void *)o);
            goto L_8c0217d8;
L_8c021782:;
            transform_actor_records((void *)o);
            operation_8c05228c(o);
            operation_8c05237c(o);
        } else {
            switch (o->f308) {
            case 1:
            case 3:
                operation_8c0521a0(o);
                operation_8c05228c(o);
                operation_8c05237c(o);
                break;
            case 2:
                operation_8c0521a0(o);
                break;
            case 6:
                transform_actor_records((void *)o);
            }
        }
    }
L_8c0217d8:;
    operation_8c027090(o);
    operation_8c02c728((void *)o);
    operation_8c026e7c(o);
}
