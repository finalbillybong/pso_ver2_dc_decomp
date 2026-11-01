/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c238d00
 * function: operation_8c238d00
 * language: c
 * reference size: 204 bytes
 * compiled size: 204 bytes (+0.0%)
 * differing lines: 4 of 88 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0_1c S_L8c339ca0_1c;
typedef struct Frame Frame;
typedef struct S_vv1 S_vv1;
typedef struct S_vv3 S_vv3;
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
};
struct S_vv1 {
    char unknown0[0x2];
    short f02;
    char unknown4[0xb];
    char f0f;
};
struct S_vv3 {
    char unknown0[0x18];
    int f18;
};
extern int g_8c4db9e4;
extern char g_8c339ca0[];
extern void operation_8c238500(void *, void *, int);
extern int strncmp(Frame *, void *, int);
extern void strncpy_8c12b154(void *, void *, int);
extern int get_field_8c247ed8(int);
void operation_8c238d00(void)
{
    Frame frame;
    S_vv3 *v3;
    S_vv1 *v1;
    int v2;
    int v5;
    int t1;
    int t2;
    int t3;
    v1 = (S_vv1 *)(g_8c4db9e4 + 0x11c4);
    if (*(char *)(g_8c339ca0 + 0x54) != 0) {
        if (*(int *)(g_8c339ca0 + 0x20) > 0) {
            operation_8c238500((void *)(&(&frame)->f0c), (void *)((int)v1 + 4), 0xc);
            v5 = (int)0;
            goto L_8c238d7e;
            v2 = (int)0;
L_8c238d38:;
            v3 = (S_vv3 *)((int)(v2 * 0x1c + g_8c339ca0) + 0x60);
            operation_8c238500((void *)(&frame), (void *)v3, 0xc);
            t1 = strncmp((Frame *)((&frame)), (void *)(&(&frame)->f0c), 0xc);
            if (t1 == 0) {
                strncpy_8c12b154((void *)((int)v1 + 4), (void *)((int)v3 + 0xc), 0xb);
                v1->f0f = 0;
                t2 = get_field_8c247ed8((int)(v3->f18));
                v1->f02 = t2;
                return;
            }
            v5 = (int)(v2 + 1);
L_8c238d7e:;
            v2 = (int)v5;
            if (*(int *)(g_8c339ca0 + 0x20) > v5) {
                goto L_8c238d38;
            }
        }
        strncpy_8c12b154((void *)((int)v1 + 4), (void *)((g_8c339ca0 + 0x54)), 0xb);
        v1->f0f = 0;
        t3 = get_field_8c247ed8((int)(*(S_L8c339ca0_1c **)(g_8c339ca0 + 0x1c)));
        v1->f02 = t3;
    }
}
