/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2820a0
 * function: operation_8c2820a0
 * language: c
 * reference size: 280 bytes
 * compiled size: 280 bytes (+0.0%)
 * differing lines: 174 of 110 reference instruction lines
 * differing bytes: 182
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
extern Vector3 g_8c300d68;
extern Vector3 g_8c300d74;
extern Vector3 g_8c300d80;
extern Vector3 g_8c300d8c;
extern Vector3 g_8c300d98;
extern Vector3 g_8c300da4;
extern Vector3 g_8c300db0;
extern Vector3 g_8c300dbc;
extern Vector3 g_8c300dc8;
extern Vector3 g_8c300dd4;
typedef struct Entry {
    int f00;
    int f04;
    Vector3 f08;
} Entry;
extern Entry g_8c300de0[];
void operation_8c2820a0(void)
{
    g_8c300de0[0].f08 = g_8c300d68;
    g_8c300de0[1].f08 = g_8c300d74;
    g_8c300de0[2].f08 = g_8c300d80;
    g_8c300de0[3].f08 = g_8c300d8c;
    g_8c300de0[4].f08 = g_8c300d98;
    g_8c300de0[5].f08 = g_8c300da4;
    g_8c300de0[6].f08 = g_8c300db0;
    g_8c300de0[7].f08 = g_8c300dbc;
    g_8c300de0[8].f08 = g_8c300dc8;
    g_8c300de0[9].f08 = g_8c300dd4;
}
