/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10ccc8
 * function: operation_8c10ccc8
 * language: c
 * reference size: 420 bytes
 * compiled size: 420 bytes (+0.0%)
 * differing lines: 158 of 178 reference instruction lines
 * differing bytes: 136
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
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv30 S_vv30;
typedef struct S_vv30_4 S_vv30_4;
typedef struct S_vv32 S_vv32;
typedef struct S_vv33 S_vv33;
struct Object {
    char unknown0[0x50];
    float f50;
    char unknown54[0x18];
    short f6c;
    char unknown6e[0xe];
    Arg0_7c *f7c;
    char unknown80[0x4];
    int f84;
    char unknown88[0x58];
    float fe0;
    float fe4;
    float fe8;
};
struct S_vv1 {
    int f00;
};
struct Arg0_7c {
    char unknown0[0x7c];
    int f7c;
    int f80;
    char unknown84[0xc];
    int f90;
    int f94;
};
struct S_vv30 {
    int f00;
};
struct S_vv32 {
    char unknown0[0x7c];
    int f7c;
    char unknown80[0x4];
    int f84;
};
struct S_c8c053d84 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
struct S_vv33 {
    float f00;
};
extern void operation_8c110278(void *, int);
extern int operation_8c10ed20(void *, int);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern float squared_distance_xz(void *, void *);
int operation_8c10ccc8(Object *o)
{
    int v31;
    int v3;
    int v29;
    S_vv1 *v1;
    S_vv30 *v30;
    S_vv32 *v32;
    int v45;
    int v46;
    S_vv33 *v33;
    int t1;
    S_c8c053d84 *t2;
    float t3;
    v1 = (S_vv1 *)o->f7c;
    if (v1->f00 >= 3) {
        o->f84 |= 0x2000;
        o->f6c += 1;
        if (o->f6c >= 0x64) {
            o->f6c = 0;
            v3 = (int)1;
        } else {
            v3 = (int)0;
        }
        if (v3 == 0) {
            goto L_8c10cd40;
        }
        if (((o->f7c->f90 & 8)) != 0) {
            operation_8c110278((void *)o, 1);
            goto L_8c10cd40;
        }
        operation_8c110278((void *)o, 0);
    } else {
        o->f84 &= -0x2001;
    }
L_8c10cd40:;
    if (v1->f00 != 0) {
        v29 = (int)0;
        v30 = (S_vv30 *)v1;
        while (v30->f00 > v29) {
            v31 = (int)(v29 * 0xc);
            t1 = operation_8c10ed20((void *)(o->f7c), (int)(*(S_vv30_4 **)((char *)((char *)v30 + 0x4) + (v31))));
            if (t1 != 0) {
                t2 = lookup_object_by_id((unsigned short)(*(S_vv30_4 **)((char *)((char *)v30 + 0x4) + (v31))));
                v32 = (S_vv32 *)o->f7c;
                v45 = (int)*(int *)((char *)((char *)v30 + 0x4) + (v31));
                v46 = (int)*(int *)((char *)((char *)v30 + 0x8) + (v31));
                o->f7c->f80 = (int)(o->f7c->f7c);
                v32->f7c = (int)(v45);
                v32->f84 = (int)(v46);
                o->fe0 = t2->f3c;
                v33 = (S_vv33 *)(o->f7c->f94 + 0x328);
                o->fe4 = v33->f00;
                o->fe8 = t2->f44;
                t3 = squared_distance_xz((void *)(&o->fe0), (void *)(o->f7c->f94 + 0x3c));
                if (((o->f50 + 10.0f) * (o->f50 + 10.0f)) > t3) {
                    o->f84 |= 0x1000;
                }
                o->f84 &= -0x41;
                return 1;
            }
            v29 = (int)(v29 + 1);
        }
        operation_8c110278((void *)o, 8);
        o->f84 |= 0x40;
    }
    return 0;
}
