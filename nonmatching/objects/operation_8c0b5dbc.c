/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b5dbc
 * function: operation_8c0b5dbc
 * language: c
 * reference size: 432 bytes
 * compiled size: 432 bytes (+0.0%)
 * differing lines: 4 of 197 reference instruction lines
 * differing bytes: 8
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
typedef struct S_L8c46f2c0 S_L8c46f2c0;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg3 Arg3;
typedef struct S_vv7 S_vv7;
struct Frame {
    Vector3 f00;
};
struct Object {
    char unknown0[0x24];
    Vector3 f24;
};
struct S_L8c46f2c0 {
    char unknown0[0x40];
    int f40;
    char unknown44[0x3c];
    int f80;
};
struct Arg1 {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct Arg3 {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_vv7 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
};
struct S_c8c053d84 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
};
extern int g_8c467870;
extern S_L8c46f2c0 g_8c46f2c0;
extern int operation_8c052648(void *, void *, float);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
void *operation_8c0b5dbc(Object *o, Arg1 *a1, int a2, Arg3 *a3)
{
    Frame frame;
    int v6;
    int v2;
    int v44;
    int v5;
    S_vv7 *v7;
    unsigned short v8;
    int v9;
    int v4;
    int v43;
    int v1;
    int v3;
    int t1;
    S_c8c053d84 *t2;
    int t3;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f24;
    v1 = (int)0;
    while (0x10 > v1) {
        v2 = (int)(v1 << 2);
        *(int *)((char *)&g_8c46f2c0 + (v2)) = 0;
        *(int *)((char *)&g_8c46f2c0.f40 + (v2)) = 0;
        v1 = (int)(v1 + 1);
    }
    (&g_8c46f2c0)->f80 = 0;
    if (a1 == 0) {
        return (void *)&g_8c46f2c0;
    }
    *(Vector3 *)&a1->f3c = *(Vector3 *)&(&frame)->f00;
    if ((unsigned int)4 > (unsigned int)a3->f20) {
        v4 = (int)0x20000000;
        v3 = (int)0x10000000;
        v5 = (int)g_8c467870;
        v6 = (int)0;
        while (v5 > v6) {
            v7 = (S_vv7 *)*(S_g8c467240 **)((char *)0x8c467240 + (v6 << 2));
            if (v7 != 0) {
                v8 = (unsigned short)v7->f20;
                if (v8 != a3->f20) {
                    v9 = (int)v7->f34;
                    if (((v9 & v4)) == 0 && ((v9 & v3)) == 0) {
                        goto L_8c0b5eae;
                    }
                    t1 = operation_8c052648((void *)a1, (void *)v7, 10000.0f);
                    if (t1 != 0) {
                        *(int *)((char *)&g_8c46f2c0.f40 + ((&g_8c46f2c0)->f80 << 2)) = (int)(t1);
                        *(S_vv7 **)((char *)&g_8c46f2c0 + ((&g_8c46f2c0)->f80 << 2)) = v7;
                        (&g_8c46f2c0)->f80 += 1;
                        if ((&g_8c46f2c0)->f80 >= 0x10) {
                            (&g_8c46f2c0)->f80 = 0xf;
                            goto L_8c0b5f30;
                        }
                    }
                }
            }
        L_8c0b5eae:
            ;
            v6 = (int)(v6 + 1);
        }
    } else {
        v44 = (int)0;
        v43 = (int)0x10000000;
        while (4 > v44) {
            t2 = lookup_object_by_id((unsigned short)v44);
            if (t2 != 0 && t2->f20 != a3->f20 && ((t2->f34 & v43)) != 0) {
                t3 = operation_8c052648((void *)a1, (void *)t2, 10000.0f);
                if (t3 != 0) {
                    *(int *)((char *)&g_8c46f2c0.f40 + ((&g_8c46f2c0)->f80 << 2)) = (int)(t3);
                    *(S_c8c053d84 **)((char *)&g_8c46f2c0 + ((&g_8c46f2c0)->f80 << 2)) = t2;
                    (&g_8c46f2c0)->f80 += 1;
                    if ((&g_8c46f2c0)->f80 >= 0x10) {
                        (&g_8c46f2c0)->f80 = 0xf;
                        goto L_8c0b5f30;
                    }
                }
            }
            v44 = (int)(v44 + 1);
        }
    }
L_8c0b5f30:
    ;
    return (void *)&g_8c46f2c0;
}
