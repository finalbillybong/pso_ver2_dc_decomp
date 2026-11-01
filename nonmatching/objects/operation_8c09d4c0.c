/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09d4c0
 * function: operation_8c09d4c0
 * language: c
 * reference size: 140 bytes
 * compiled size: 140 bytes (+0.0%)
 * differing lines: 16 of 48 reference instruction lines
 * differing bytes: 11
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
typedef struct Frame Frame;
typedef struct S_g8c44be04 S_g8c44be04;
struct Frame {
    int f00;
    int f04;
    int f08;
};
extern S_g8c44be04 *g_8c44be04;
extern int g_8c46ec40;
extern int g_8c46ec44;
extern short g_8c46ec4c;
extern int g_8c46ed40;
extern int g_8c46ed44;
extern int g_8c46ed48;
extern int g_8c46ed4c;
extern int get_current_area_8c032b10(void);
extern int operation_8c1a9a00(int, void *);
extern void load_ad_dat_8c09d574(int, int, int);
void operation_8c09d4c0(void)
{
    Frame frame;
    int t1;
    int t2;
    g_8c46ec4c &= -9;
    g_8c46ed4c = g_8c46ed44 = g_8c46ed48 = g_8c46ed40 = 0;
    g_8c46ec4c &= -0x11;
    t1 = get_current_area_8c032b10();
    g_8c46ec40 = (int)(t1);
    g_8c46ec44 = (int)(g_8c44be04);
    t2 = operation_8c1a9a00((int)g_8c44be04, (void *)(&frame));
    if (t2 != 0) {
        load_ad_dat_8c09d574((int)((&frame)->f00), (int)((&frame)->f04), (int)((&frame)->f08));
        return;
    }
    g_8c46ec40 = -1;
}
