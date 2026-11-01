/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c184e5c
 * function: handle_6x38_donate_to_photon_blast_8c184e5c
 * language: c
 * reference size: 420 bytes
 * compiled size: 412 bytes (-1.9%)
 * differing lines: 112 of 175 reference instruction lines
 * differing bytes: 332
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct S_x10800 S_x10800;
typedef struct S_x38896 S_x38896;
typedef struct S_x5168 S_x5168;
typedef struct S_x91568 S_x91568;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    unsigned short f04;
};
struct S_c8c021ef8 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x35a];
    int f37c;
    char unknown380[0xd4];
    unsigned short f454;
    char unknown456[0x2];
    float f458;
};
struct S_x38896 {
    char unknown0[0x2];
    short f02;
};
struct S_x10800 {
    char unknown0[0x2];
    short f02;
};
struct S_x91568 {
    char unknown0[0x48];
    int f48;
};
struct S_x5168 {
    char unknown0[0x48];
    int f48;
};
extern S_g8c418248 *g_8c418248;
extern S_c8c021ef8 *lookup_low_id(int);
extern int current_mode_active(void);
extern void operation_8c0ddb2c(short, short);
extern void operation_8c185064(void *);
void handle_6x38_donate_to_photon_blast_8c184e5c(Object *o)
{
    int v1;
    int v2;
    int v3;
    int v4;
    unsigned short v57;
    int v5;
    int v10;
    int v6;
    int v8;
    float v22;
    S_c8c021ef8 *t1;
    S_c8c021ef8 *t3;
    t1 = lookup_low_id((int)g_8c418248);
    t3 = lookup_low_id((int)(o->f02));
    if (t1 == 0 || current_mode_active() == 0 || t1->f37c != t3->f37c) {
        return;
    }
    v1 = (int)(((o->f04 & 0xc000)) == 0);
    if (v1 != 0) {
        v2 = (int)0xffff;
        v6 = (int)0x98;
        v8 = (int)(unsigned short)v2;
        v10 = (int)0;
        goto L_8c184f08;
        v3 = (int)0;
        v4 = (int)0x98;
        v5 = (int)(unsigned short)v2;
L_8c184eca:;
        v57 = (unsigned short)*(unsigned short *)((char *)((char *)((char *)(int *)((char *)t1 + 0x418) + (v3 << 2)) + 0x0) + (v4));
        if (o->f02 == (v57 & 0xffff)) {
            ((S_x38896 *)((char *)(int *)((char *)t1 + 0x418) + (v3 << 2) + v4))->f02 += 0xc;
            v10 = (int)v3;
        } else {
            if ((v57 & 0xffff) == v5) {
                *(short *)((char *)((char *)((char *)(int *)((char *)t1 + 0x418) + (v3 << 2)) + 0x0) + (v4)) = o->f02;
                ((S_x10800 *)((char *)(int *)((char *)t1 + 0x418) + (v3 << 2) + v4))->f02 += 0xc;
                v10 = (int)v3;
            } else {
                v6 = (int)v4;
                v8 = (int)v5;
                v10 = (int)(v3 + 1);
L_8c184f08:;
                if (4 > v10) {
                    v3 = (int)v10;
                    v4 = (int)v6;
                    v5 = (int)v8;
                    goto L_8c184eca;
                }
            }
        }
        operation_8c0ddb2c(o->f02, t1->f20);
        if (o->f04 == t1->f20) {
            v22 = (float)t1->f458;
            if (100.0f > v22) {
                if (!(100.0f > v22)) {
                    return;
                }
                t1->f458 = v22 + 12.0f;
                if (100.0f > t1->f458) {
                    return;
                }
                t1->f458 = 100.0f;
                operation_8c185064((void *)(((char *)t1 + 0x418)));
                ((S_x91568 *)((char *)(int *)((char *)t1 + 0x418) + ((t1->f454 & 0xffff) << 2)))->f48 |= -0x80000000;
                return;
            }
            if (400.0f > v22) {
                t1->f458 = v22 + 12.0f;
                if (!(400.0f > t1->f458)) {
                    t1->f458 = 400.0f;
                    ((S_x5168 *)((char *)(int *)((char *)t1 + 0x418) + ((t1->f454 & 0xffff) << 2)))->f48 |= -0x7ffffffd;
                }
            }
        }
    }
}
