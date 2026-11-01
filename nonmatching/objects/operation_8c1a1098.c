/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a1098
 * function: operation_8c1a1098
 * language: c
 * reference size: 156 bytes
 * compiled size: 156 bytes (+0.0%)
 * differing lines: 2 of 60 reference instruction lines
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
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    int f00;
};
extern int g_8c306c34;
extern int g_8c467874;
extern int g_8c467878;
extern void create_effect_777c(void *, int);
extern void play_se_8c05fbf8(int, int, int, int);
extern void set_fields_8c0cfedc(void *);
void operation_8c1a1098(int a0)
{
    int v2;
    char *v3;
    S_vv4 *v4;
    int v5;
    int v12;
    int v1;
    create_effect_777c((void *)(a0 + 0x3c), 0x45);
    create_effect_777c((void *)(a0 + 0x3c), 0x46);
    play_se_8c05fbf8(0x30016, (int)(a0 + 0x3c), 0, 0);
    v1 = (int)0x384;
    v2 = (int)g_8c467874;
    v12 = (int)v2;
    goto L_8c1a10f8;
    v3 = (char *)v2;
L_8c1a10ca:;
    v4 = (S_vv4 *)*(S_g8c467240 **)((char *)0x8c467240 + ((int)(v3) << 2));
    if (v4 != 0 && (int)(v4) != a0) {
        v5 = (int)(v4->f00 == g_8c306c34);
        if (v5 != 0 && *(int *)((char *)&v4->f00 + (v1)) == 0) {
            set_fields_8c0cfedc((void *)v4);
        }
    }
    v12 = (int)(v3 + 1);
L_8c1a10f8:;
    v3 = (char *)v12;
    if ((g_8c467874 + g_8c467878) > v12) {
        goto L_8c1a10ca;
    }
}
