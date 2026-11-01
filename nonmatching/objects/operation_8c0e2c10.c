/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e2c10
 * function: operation_8c0e2c10
 * language: c
 * reference size: 348 bytes
 * compiled size: 348 bytes (+0.0%)
 * differing lines: 4 of 133 reference instruction lines
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0x10];
    int f10;
    char unknown14[0xc];
};
struct S_c8c021ef8 {
    char unknown0[0x7b4];
    int f7b4;
};
extern int operation_8c168164(void *, int);
extern void normalize_rectangle_fields(void *, float, float);
extern int operation_239288(void *);
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c0e2c10(int a0, int a1)
{
    Frame frame;
    int v23;
    int v29;
    int v26;
    int v30;
    int v27;
    int v28;
    int v39;
    int t1;
    int t2;
    S_c8c021ef8 *t3;
    v23 = (int)-1;
    t1 = operation_8c168164((void *)(&frame), a1);
    if ((unsigned int)1 >= (unsigned int)(t1 + -1)) {
        v26 = (int)0;
        v27 = (int)v23;
        goto L_8c0e2c44;
L_8c0e2c3a:;
        v29 = (int)*(int *)((char *)((char *)v28 + 0x0) + ((int)(&(&frame)->f10)));
        if (v29 == a1) {
            goto L_8c0e2c50;
        }
        v26 = (int)(v26 + 1);
L_8c0e2c44:;
        v28 = (int)(v26 << 2);
        v30 = (int)*(int *)((char *)((char *)v28 + 0x0) + ((int)((&frame))));
        v23 = (int)v30;
        if (v23 != v27) {
            goto L_8c0e2c3a;
        }
    }
L_8c0e2c50:;
    switch (v23) {
    case 5:
        normalize_rectangle_fields((void *)a0, 0.0f, 173.0f);
        return;
    case 4:
        normalize_rectangle_fields((void *)a0, 34.0f, 173.0f);
        return;
    case 3:
        normalize_rectangle_fields((void *)a0, 68.0f, 173.0f);
        return;
    case 1:
        normalize_rectangle_fields((void *)a0, 102.0f, 173.0f);
        return;
    case 2:
        normalize_rectangle_fields((void *)a0, 136.0f, 173.0f);
        return;
    case 0:
        normalize_rectangle_fields((void *)a0, 170.0f, 173.0f);
        return;
    default:
        t2 = operation_239288((void *)((void *)0x8c41ce5c));
        v39 = (int)a1;
        if ((unsigned char)t2 == 1) {
            t3 = lookup_low_id(a1);
            v39 = (int)a1;
            if (t3 != 0) {
                v39 = (int)(t3->f7b4 + -1);
            }
        }
        normalize_rectangle_fields((void *)a0, (float)(unsigned int)v39 * 34.0f, 202.0f);
        return;
    }
}
