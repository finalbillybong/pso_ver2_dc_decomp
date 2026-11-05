/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c045200
 * function: operation_8c045200
 * language: c
 * reference size: 644 bytes
 * compiled size: 644 bytes (+0.0%)
 * differing lines: 144 of 280 reference instruction lines
 * differing bytes: 330
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, instruction or operand
 *   order, constant loading; review found and fixed behaviour defects of the generator draft; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Rec {
    Vector3 p;
    float r;
    char unknown10[0x8];
    int flags;
    char unknown1c[0x10];
} Rec;
typedef struct Range {
    char unknown0[0x8];
    float r;
    int angle;
} Range;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    short id;
    char unknown22[0x12];
    int f34;
    char unknown38[0x4];
    Vector3 pos;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x74];
    Rec *recs;
    int nrecs;
    char unknowne4[0x250];
    Object *target;
    char unknown338[0x4];
    Range *range;
};
extern int hierarchy_is_active(void *);
extern int lookup_object_by_id(unsigned short);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern void call_8c3bdf60(void *, void *);
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern float errno_wrap_8c130334(float, float);
extern int angle_difference(int, int);
int operation_8c045200(Object *o)
{
    int k;
    Object *t;
    Vector3 b;
    Vector3 a;
    int m;
    int i;
    int k2;
    int off;
    float d;
    float r;
    int ang;
    Vector3 v;
    Vector3 c;
    Vector3 *p;
    if (o->target != 0) {
        if (o->range != 0) {
            if (hierarchy_is_active(o->target) != 0) {
                if (lookup_object_by_id(o->target->id) != 0) {
                    k = 0x334;
                    t = *(Object **)((char *)o + k);
                    if ((t->f34 & 0x800) == 0) {
                        if (t->recs != 0) {
                            a = t->pos;
                            m = 0x4000000;
                            i = 0;
                            k2 = 0x33c;
                            for (; i < (t = *(Object **)((char *)o + k))->nrecs; i++) {
                                off = i * 0x2c;
                                if ((*(int *)((char *)&t->recs->flags + off) & m) == 0) {
                                    b = *(Vector3 *)((char *)t->recs + off);
                                    njPushMatrix_8c38ade4((void *)0x8c400500);
                                    njRotateY_8c37df90(0, (*(Object **)((char *)o + k))->f64);
                                    call_8c3be38c(0, &b, &b);
                                    njPopMatrix_8c38accc(1);
                                    call_8c3bdf60(&b, &a);
                                    vector_sub_in_place_8c37f6f0(&b, &o->pos);
                                    d = b.x * b.x + b.z * b.z;
                                    r = (*(Range **)((char *)o + k2))->r + *(float *)((char *)&(*(Object **)((char *)o + k))->recs->r + off);
                                    r = r * r;
                                    ang = angle_difference(o->f64, (int)(errno_wrap_8c130334(b.x, b.z) * 65536.0f / 6.28318405f));
                                    if (r > d && (*(Range **)((char *)o + k2))->angle > ang) {
                                        return 1;
                                    }
                                }
                            }
                        } else {
                            p = &v;
                            if (t != 0) {
                                c = t->pos;
                                vector_sub_in_place_8c37f6f0(&c, &o->pos);
                                c.y = 0.01f;
                                d = c.x * c.x + c.z * c.z;
                                if (p != 0) {
                                    *p = c;
                                }
                            } else {
                                d = 100000000.0f;
                            }
                            ang = angle_difference(o->f64, (int)(errno_wrap_8c130334(v.x, v.z) * 65536.0f / 6.28318405f));
                            if (o->target->recs != 0) {
                                r = o->range->r + o->target->recs->r;
                                r = r * r;
                            } else {
                                r = o->range->r;
                                r = r * r;
                            }
                            if (!(d > r) && o->range->angle >= ang) {
                                return 1;
                            }
                        }
                    } else {
                        *(Object **)((char *)o + k) = 0;
                    }
                }
            }
        }
    }
    return 0;
}
