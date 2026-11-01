/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01988c
 * function: operation_8c01988c
 * language: c++
 * reference size: 432 bytes
 * compiled size: 432 bytes (+0.0%)
 * differing lines: 30 of 143 reference instruction lines
 * differing bytes: 80
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
typedef struct S_L8c41825c S_L8c41825c;
typedef struct Frame Frame;
typedef struct Object Object;
class S_c8c021ef8;
struct Frame {
    char unknown0[0x80];
};
struct Object {
    char unknown0[0x104];
    char f104;
    char f105;
    char f106;
    char f107;
    char f108;
    char f109;
    char f10a;
    char f10b;
    int f10c;
};
struct S_L8c41825c {
    char unknown0[0x4];
    int f04;
};
class S_c8c021ef8 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_c8c021ef8Data {

} S_c8c021ef8Data;
extern int g_8c418000;
extern int g_8c418248;
extern int g_8c418258;
extern int g_8c41bce0;
extern int g_8c41bce8;
extern int g_8c41bcf0;
extern int g_8c41cd20;
extern int g_8c4703c0;
extern int g_8c510ba8;
extern int g_8c510e50;
extern S_L8c41825c g_8c41825c;
extern "C" char g_8c2e3014[];
extern "C" void memcpy_8c12b77c(void *, void *, int);
extern "C" void operation_8c017ab0(void);
extern "C" void sprintf_8c12b048(Frame *, void *, ...);
extern "C" void operation_8c011efc(Frame *);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void clear_global_8c1bded0(void);
extern "C" void operation_8c0e7720(void *, int, int);
extern "C" void set_global_8c01c1d0(void);
extern "C" void operation_8c01988c(Object *o)
{
    Frame frame;
    int v1;
    int v6;
    S_c8c021ef8 *t1;
    memcpy_8c12b77c((void *)((void *)0x8c41c740), (void *)(((char *)o + 0x84)), 0x80);
    operation_8c017ab0();
    sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0xf1)), o->f104);
    operation_8c011efc((Frame *)((&frame)));
    g_8c418248 = o->f104;
    g_8c418258 = o->f105;
    g_8c41bce8 = o->f106;
    g_8c41cd20 = o->f108;
    g_8c510ba8 = o->f10b;
    g_8c4703c0 = o->f107;
    g_8c41bcf0 = o->f109;
    g_8c418000 = (int)(o->f10c);
    (&g_8c41825c)->f04 = o->f10a;
    g_8c510e50 = (int)(o->f10c);
    v1 = (int)0;
    while (0xc > v1) {
        t1 = lookup_low_id(v1);
        if (t1 != 0) {
            if (t1 != 0) {
                t1->v0(1);
            }
            sprintf_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0xff)), v1);
            operation_8c011efc((Frame *)((&frame)));
        }
        v1 = (int)(v1 + 1);
    }
    v6 = (int)0;
    while (4 > v6) {
        *(int *)((char *)0x8c41c730 + (v6 << 2)) = 0;
        v6 = (int)(v6 + 1);
    }
    clear_global_8c1bded0();
    g_8c41bce0 = 4;
    operation_8c0e7720((void *)((void *)0x8c46fec0), 0, 0);
    set_global_8c01c1d0();
}
