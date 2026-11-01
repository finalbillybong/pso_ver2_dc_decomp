/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a4ec0
 * function: operation_8c0a4ec0
 * language: c
 * reference size: 140 bytes
 * compiled size: 140 bytes (+0.0%)
 * differing lines: 12 of 57 reference instruction lines
 * differing bytes: 7
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
typedef struct S_g8c303864 S_g8c303864;
typedef struct S_g8c303864_0 S_g8c303864_0;
extern int get_current_area_8c032b10(void);
extern int game_malloc_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
typedef struct Entry8 {
    void *f00;
    int f04;
} Entry8;
typedef struct Row8 {
    Entry8 *list;
    unsigned int count;
} Row8;
void operation_8c0a4ec0(void)
{
    Row8 *row;
    unsigned int n;
    unsigned int i;
    int id;
    int t;
    row = (Row8 *)((char *)0x8c303864 + (get_current_area_8c032b10() << 3));
    if (row->list != 0) {
        n = row->count;
        if (!(n >= 8)) {
            id = 0x440;
            for (i = 0; i < n; i++) {
                t = game_malloc_8c011ecc(id);
                if (t != 0) {
                    call_8c03d610(t, 1, *(void **)((char *)row->list + (i << 3)), 0, 0, 0);
                }
                *(int *)((char *)0x8c46f0c8 + (i << 2)) = t;
            }
        }
    }
}
