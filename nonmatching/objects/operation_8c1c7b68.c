/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c7b68
 * function: operation_8c1c7b68
 * language: c
 * reference size: 480 bytes
 * compiled size: 528 bytes (+10.0%)
 * differing lines: 158 of 201 reference instruction lines
 * differing bytes: 486
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in code
 *   generation (unclassified); review found and fixed behaviour defects of the generator draft;
 *   not proven equivalent to the original; compiled size differs from the reference by +48 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1c7658 S_c8c1c7658;
typedef struct S_g8c328ea0 S_g8c328ea0;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_20 S_g8c467180_20;
typedef struct Object Object;
struct S_c8c1c7658 {
    int f00;
    short f04;
    short f06;
};
struct Object {
    unsigned char tag;
    unsigned char f01;
    unsigned char f02;
    char unknown3[0x1];
    unsigned char f04;
};
struct S_g8c467180 {
    char unknown0[0x20];
    S_g8c467180_20 *f20;
};
struct S_g8c467180_20 {
    char unknown0[0x4e0];
    int f4e0;
    char unknown4e4[0x2d8];
    int f7bc;
    int f7c0;
    int f7c4;
};
extern int g_8c30b600;
extern S_g8c467180 *g_8c467180;
extern int g_8c467188;
extern char g_8c328ef4[];
extern S_c8c1c7658 *operation_8c1c7658(void *);
extern int operation_8c1c7ffc(Object *);
extern int operation_8c2580cc(int);
extern int operation_8c1c9354(void *);
extern void strncpy_8c12b154(int, int, int);
extern void sprintf_8c12b048(int, ...);
int operation_8c1c7b68(Object *o)
{
    int t3;
    int v3;
    int t4;
    int v9;
    unsigned char v10;
    int v8;
    int v1;
    int v12;
    int v7;
    int t2;
    int v6;
    S_c8c1c7658 *t1;
    int t5;
    t1 = operation_8c1c7658((void *)o);
    if (t1 == 0) {
    } else {
        v1 = (int)t1->f00;
        if (v1 == 0x161) {
            return (int)(g_8c30b600);
        }
        if ((o->tag) == 0) {
            t2 = operation_8c1c7ffc(o);
            if (t2 != 0) {
                if ((o->tag) == 0 && ((o->f04 & 0x80)) != 0) {
                    v3 = (int)0;
                } else {
                    v3 = (int)1;
                }
                if (v3 == 0) {
                    return (int)(g_8c467180->f20->f4e0);
                }
            }
            return (int)(*(int *)((char *)((char *)g_8c467180->f20 + 0x0) + (v1 << 2)));
        }
        if (o->tag == 1 && o->f01 == 3) {
            if (0x204 > v1) {
                if (t1 == 0) {
                    goto L_8c1c7ce4;
                }
                if (t1->f04 == 0x16) {
                    goto L_8c1c7ce4;
                }
                t3 = operation_8c2580cc(0);
                t4 = operation_8c2580cc(1);
                if (t3 == 0) {
                    goto L_8c1c7ce4;
                }
                if (t4 == 0) {
                    goto L_8c1c7ce4;
                }
                t5 = operation_8c1c9354((void *)o);
                v6 = (int)(t1->f06 + t5);
                v9 = (int)*(short *)((char *)((char *)*(S_g8c328ea0 **)((char *)0x8c328ea0 + (g_8c467188 << 2)) + 0x2) + ((short)(t1->f04 * 3) << 1));
                v8 = (int)*(short *)((char *)((char *)*(S_g8c328ea0 **)((char *)0x8c328ea0 + (g_8c467188 << 2)) + 0x4) + ((short)(t1->f04 * 3) << 1));
                v7 = (int)*(int *)((char *)((char *)g_8c467180->f20 + 0x0) + (*(short *)((char *)((char *)*(S_g8c328ea0 **)((char *)0x8c328ea0 + (g_8c467188 << 2)) + 0x0) + ((short)(t1->f04 * 3) << 1)) << 2));
                strncpy_8c12b154(t4, v7, 0x200);
                *(char *)((char *)((char *)t4 + 0x0) + (v9)) = 0;
                if (g_8c467188 == 0) {
                    v10 = (unsigned char)o->f02;
                    switch (v10) {
                    case 30:
                        v7 = g_8c467180->f20->f7bc;
                        break;
                    case 31:
                        v7 = g_8c467180->f20->f7c0;
                        break;
                    case 32:
                        v7 = g_8c467180->f20->f7c4;
                        break;
                    }
                }
                v12 = (int)(v7 + v8);
                sprintf_8c12b048(t3, (void *)((g_8c328ef4 + 0x38)), t4, (short)v6, v12);
                return (int)(t3);
            }
            return (int)(*(int *)((char *)((char *)g_8c467180->f20 + 0x0) + (v1 << 2)));
        }
        return (int)(*(int *)((char *)((char *)g_8c467180->f20 + 0x0) + (v1 << 2)));
    }
L_8c1c7ce4:;
    return (int)(g_8c30b600);
}
