/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16847c
 * function: operation_8c16847c
 * language: c
 * reference size: 332 bytes
 * compiled size: 332 bytes (+0.0%)
 * differing lines: 88 of 138 reference instruction lines
 * differing bytes: 88
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, constant loading; review found and fixed
 *   behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x24];
    unsigned short f40;
    char unknown42[0xe];
    int f50;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c4db2f0[];
extern void operation_8c100b40(void);
extern void visit_object_links(void);
extern int lookup_low_id(int);
extern void release_render_mode(void);
extern void operation_8c0a21a4(void);
extern void operation_8c0a1b78(void *);
extern void operation_8c122410(int);
extern void TObject_dtor_8c03311c(void *, short);
extern void operation_8c122774(void *, void *);
Object *operation_8c16847c(Object *o, int a1)
{
    int i;
    int j;
    int k;
    int t1;
    if (o != 0) {
        o->dispatch = (void *)0x8c2700fc;
        if (o->f50 != 0) {
            operation_8c100b40();
            visit_object_links();
            t1 = lookup_low_id((int)g_8c418248);
            if (t1 != 0) {
                release_render_mode();
                operation_8c0a21a4();
                operation_8c0a1b78((void *)lookup_low_id((int)g_8c418248));
            }
        } else {
            operation_8c122410(0);
        }
        if (o->f40 != 0xffff && (unsigned int)4 > (unsigned int)o->f40) {
            for (i = 0; 4 > i; i++) {
                if ((unsigned int)4 > (unsigned int)*(int *)((char *)((char *)o + 0x64) + (i << 2))) {
                    for (j = 0; 4 > j; j++) {
                        k = j << 2;
                        *(int *)((char *)(*(int *)((char *)((char *)o + 0x64) + (i << 2)) * 0x24 + g_8c4db2f0) + k) = -1;
                        *(int *)((char *)((g_8c4db2f0 + 0x10) + *(int *)((char *)((char *)o + 0x64) + (i << 2)) * 0x24) + k) = 0xffff;
                    }
                    *(int *)((char *)(g_8c4db2f0 + 0x20) + (*(int *)((char *)((char *)o + 0x64) + (i << 2)) * 0x24)) = 0;
                }
            }
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            operation_8c122774(g_8c4d97e0, (void *)o);
        }
    }
    return o;
}
