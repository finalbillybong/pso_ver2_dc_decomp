/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03096c
 * function: operation_8c03096c
 * language: c
 * reference size: 352 bytes
 * compiled size: 352 bytes (+0.0%)
 * differing lines: 10 of 122 reference instruction lines
 * differing bytes: 5
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
typedef struct S_g8c44be04 S_g8c44be04;
typedef struct S_g8c44be0c S_g8c44be0c;
typedef struct S_g8c44be0c_c S_g8c44be0c_c;
typedef struct S_g8c4e1950 S_g8c4e1950;
typedef struct S_vv6_0 S_vv6_0;
struct S_g8c44be0c {
    char unknown0[0xc];
    S_g8c44be0c_c *f0c;
};
extern int operation_8c1a99c0(int);
extern void call_8c369eb8(void *);
extern void operation_8c030acc(int);
extern void operation_8c030b94(int);
extern void operation_8c030cc8(int);
extern void operation_8c030d3c(int);
extern void copy_resource_fields(void *, void *);
extern void operation_8c030c28(int);
extern void operation_8c030dc4(void);
extern int g_8c510ba4;
extern int g_8c44be08;
extern int g_8c44be24;
extern int g_8c44be28;
extern int g_8c44be2c;
extern int g_8c44be34;
extern int g_8c44be30;
extern int g_8c44be38;
extern int g_8c44be3c;
extern int g_8c44be40;
extern int g_8c44be48;
extern int g_8c44be44;
typedef struct Row12 { int f00; int f04; int f08; } Row12;
extern Row12 g_8c4e1950[];
typedef struct Row8 { int f00; int f04; } Row8;
void operation_8c03096c(void)
{
    int v6;
    int x;
    int v5;
    g_8c44be24 = 0;
    g_8c44be28 = 0;
    g_8c44be2c = 0;
    g_8c44be34 = 0;
    g_8c44be30 = 0;
    g_8c44be38 = 0;
    g_8c44be3c = 0;
    g_8c44be40 = 0;
    g_8c44be48 = 0;
    g_8c44be44 = 0;
    if (g_8c510ba4 != 0) {
        v6 = operation_8c1a99c0(g_8c4e1950[*(int *)0x8c44be04].f00);
        x = *(int *)((*(int *)0x8c44be04 * 0xc) + (char *)((char *)g_8c4e1950 + 4));
        g_8c44be08 = x;
        v5 = *(int *)((char *)((char *)v6 + 4) + (x << 3));
    } else {
        v6 = operation_8c1a99c0(*(int *)0x8c44be04);
        x = *(int *)((char *)0x8c4e18c0 + (*(int *)0x8c44be04 << 3));
        g_8c44be08 = x;
        v5 = *(int *)((char *)((char *)v6 + 4) + (x << 3));
    }
    call_8c369eb8((void *)((void *)0x8c2e8428));
    operation_8c030acc(v5);
    operation_8c030b94(v5);
    operation_8c030cc8(v5);
    operation_8c030d3c(v5);
    if (*(int *)0x8c44be0c != 0 && (*(S_g8c44be0c **)0x8c44be0c)->f0c != 0) {
        copy_resource_fields((void *)(*(S_vv6_0 **)((char *)((char *)v6 + 0x0) + (g_8c44be08 << 3))), (void *)((*(S_g8c44be0c **)0x8c44be0c)->f0c));
    }
    operation_8c030c28(v5);
    *(char *)0x8c44be18 = 1;
    operation_8c030dc4();
}
