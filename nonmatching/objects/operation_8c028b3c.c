/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c028b3c
 * function: operation_8c028b3c
 * language: c
 * reference size: 336 bytes
 * compiled size: 332 bytes (-1.2%)
 * differing lines: 6 of 139 reference instruction lines
 * differing bytes: 223
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_338 Arg0_338;
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0x338];
    Arg0_338 *f338;
    char unknown33c[0x7c];
    Arg0_3b8 *f3b8;
    char unknown3bc[0x128];
    int f4e4;
    char unknown4e8[0x1f0];
    int f6d8;
};
struct Arg0_338 {
    char unknown0[0x8];
    int f08;
};
struct S_vv5 {
    int f00;
};
struct Arg0_3b8 {
    char unknown0[0x440];
    unsigned short f440;
};
extern int operation_8c027070(void *, int);
extern int mask_any(void *, unsigned int);
extern int select_member_8c026104(void *, int);
extern int operation_8c028c8c(void *);
extern int lookup_object_by_id(unsigned short);
extern int call_8c028860(Object *, int, int);
extern void operation_8c0dda80(int);
int operation_8c028b3c(Object *o)
{
    int v1;
    int v2;
    int v3;
    S_vv5 *v5;
    int v13;
    int v22;
    int v21;
    int v29;
    int v32;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    v1 = (int)o->f338->f08;
    if (((v1 & 4)) != 0) {
        v2 = (int)(((o->f6d8 & 2)) != 0);
        if (v2 == 0) {
            if (o->f3b8 != 0) {
                t1 = operation_8c027070((void *)o, v2);
                t2 = mask_any((void *)t1, (unsigned int)1);
                if (t2 != 0) {
                    v3 = (int)(o->f4e4 == 0);
                    if (v3 != 0) {
                        v5 = (S_vv5 *)((char *)o + 0x4c0);
                        goto L_8c028b9a;
                    }
                    v5 = (S_vv5 *)&o->f4e4;
                } else {
                    v5 = (S_vv5 *)((char *)o + 0x4c0);
                }
L_8c028b9a:;
                t3 = select_member_8c026104((void *)v5, (int)(v5->f00));
                t4 = operation_8c028c8c((void *)(t3 + 0));
                if ((unsigned short)(unsigned char)t4 != 0) {
                    v13 = (int)1;
                    goto L_8c028bb8;
                }
            }
            v13 = (int)0;
L_8c028bb8:;
            if (v13 != 0) {
                t8 = lookup_object_by_id((unsigned short)(o->f3b8->f440));
                v22 = (int)0;
                v21 = (int)t8;
            } else {
                v21 = (int)0;
                v22 = (int)1;
            }
            t5 = call_8c028860(o, v22, v21);
            if (t5 == 0) {
                goto L_8c028c4a;
            }
            operation_8c0dda80(1);
            return 1;
        }
    }
    if (((v1 & 0x400)) != 0) {
        v29 = (int)(((o->f6d8 & 4)) != 0);
        if (v29 == 0) {
            t6 = call_8c028860(o, 2, 0);
            if (t6 == 0) {
                goto L_8c028c4a;
            }
            operation_8c0dda80(2);
            return 1;
        }
    }
    if (((v1 & 2)) != 0) {
        v32 = (int)(((o->f6d8 & 8)) != 0);
        if (v32 == 0) {
            t7 = call_8c028860(o, 3, 0);
            if (t7 != 0) {
                operation_8c0dda80(3);
                return 1;
            }
        }
    }
L_8c028c4a:;
    return 0;
}
