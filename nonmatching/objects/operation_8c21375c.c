/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21375c
 * function: operation_8c21375c
 * language: c
 * reference size: 420 bytes
 * compiled size: 436 bytes (+3.8%)
 * differing lines: 72 of 175 reference instruction lines
 * differing bytes: 314
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +16 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_74 Arg0_74;
typedef struct Arg0_7c Arg0_7c;
typedef struct S_vv16 S_vv16;
typedef struct S_vv32 S_vv32;
typedef struct S_vv35 S_vv35;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x58];
    Arg0_7c *f7c;
    char unknown80[0x8];
    int f88;
    int f8c;
    int f90;
    char unknown94[0x1c];
    int fb0;
    char unknownb4[0x8];
    int fbc;
    char unknownc0[0x6];
    short fc6;
};
struct S_vv16 {
    char unknown0[0x4];
    short f04;
};
struct S_vv32 {
    char unknown0[0x4];
    short f04;
};
struct S_vv35 {
    char unknown0[0x4];
    short f04;
};
extern float g_8c2e1608;
extern void operation_8c2163c4(void *);
extern void operation_8c2163b4(void *);
extern int operation_8c215dc4(int);
extern void operation_8c2154f0(void *, int, int);
extern int span_8c215d8c(void *);
extern void operation_8c215510(void *, int);
extern int operation_8c215dbc(int);
extern void set_fields_8c2163e0(void *);
extern void operation_8c2163bc(void *);
void operation_8c21375c(Object *o)
{
    int v48;
    int v1;
    S_vv16 *v16;
    int v17;
    S_vv32 *v32;
    S_vv35 *v35;
    int t1;
    int t2;
    int t3;
    int t4;
    v48 = (int)o->f20;
    if (v48 > 0) {
        v1 = (int)*(int *)((char *)&o->f20 + (v48 << 2));
        if (v1 != 0) {
            operation_8c2163c4((void *)v1);
            operation_8c2163b4((void *)v1);
            if (o->f7c != 0) {
                t1 = operation_8c215dc4(v1);
                operation_8c2154f0((void *)(o->f7c), t1, (int)((int)g_8c2e1608));
                t2 = span_8c215d8c((void *)v1);
                operation_8c215510((void *)(o->f7c), t2);
            }
            t3 = operation_8c215dbc(v1);
            o->f88 = (short)t3;
        }
    }
    if (((*(int *)((char *)0x8c335e48 + (*(int *)((char *)((char *)o + 0x40) + (v48 << 2)) << 3)) & 8)) != 0) {
        v16 = (S_vv16 *)*(Arg0_24 **)((char *)((char *)o + 0x24) + (o->f20 << 2));
        if (v16 == 0) {
            goto L_8c213818;
        }
        v16->f04 |= 1;
        *(int *)((char *)((char *)o + 0x24) + (o->f20 << 2)) = 0;
    } else {
        v17 = (int)*(int *)((char *)((char *)o + 0x24) + (o->f20 << 2));
        if (v17 != 0) {
            set_fields_8c2163e0((void *)v17);
            operation_8c2163bc((void *)v17);
        }
    }
L_8c213818:;
    v32 = (S_vv32 *)*(Arg0_28 **)((char *)((char *)o + 0x28) + (o->f20 << 2));
    if (v32 != 0) {
        v32->f04 |= 1;
        *(int *)((char *)((char *)o + 0x28) + (o->f20 << 2)) = 0;
    }
    o->f20 -= 1;
    if (((*(int *)((char *)0x8c335e48 + (*(int *)((char *)((char *)o + 0x40) + (v48 << 2)) << 3)) & 4)) != 0) {
        o->fbc -= 1;
        if (o->fbc >= 0) {
            v35 = (S_vv35 *)*(Arg0_74 **)((char *)((char *)o + 0x74) + (o->fbc << 2));
            if (v35 != 0) {
                v35->f04 |= 1;
                *(int *)((char *)((char *)o + 0x74) + (o->fbc << 2)) = 0;
            }
        }
    }
    o->f90 = (int)(o->f8c);
    o->f8c = (int)(o->f88);
    t4 = operation_8c215dbc((int)(*(Arg0_24 **)((char *)((char *)o + 0x24) + (o->f20 << 2))));
    o->f88 = (short)t4;
    o->fb0 = (int)(*(int *)((char *)((char *)o + 0x44) + (o->f20 << 2)));
    if (o->fb0 == 0xd) {
        o->fc6 = 4;
    }
}
