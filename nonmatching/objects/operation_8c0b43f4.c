/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b43f4
 * function: operation_8c0b43f4
 * language: c
 * reference size: 256 bytes
 * compiled size: 256 bytes (+0.0%)
 * differing lines: 6 of 93 reference instruction lines
 * differing bytes: 20
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
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0xe8];
    short f10c;
    char unknown10e[0x2];
    int f110;
    int f114;
    char unknown118[0xc];
    int f124;
};
struct Arg0_20 {
    char unknown0[0x20];
    unsigned short f20;
};
extern int g_8c418248;
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void operation_8c0b4584(int, void *, int, void *);
extern void operation_8c0b4c40(void *, void *, int);
extern int get_current_area_8c032b10(void);
extern short operation_8c01d728(void *);
extern void initialize_effect_event(void *, unsigned short, short, void *, unsigned int);
extern void send_effect_event(void *);
void operation_8c0b43f4(Object *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    short t4;
    v1 = (unsigned short)o->f20->f20;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x44);
    if (t1 != 0) {
        operation_8c0b4584(t1, (void *)(((char *)o + 0x118)), v1, g_8c44bea0);
    }
    o->f114 = (int)(t1);
    o->f124 = 1;
    t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xe8);
    if (t2 != 0) {
        operation_8c0b4c40((void *)t2, (void *)(((char *)o + 0x118)), (int)o);
    }
    o->f110 = (int)(t2);
    if (g_8c418248 == o->f20->f20) {
        unsigned short v6;
        t3 = get_current_area_8c032b10();
        o->f10c = t3;
        v6 = o->f20->f20;
        t4 = operation_8c01d728((void *)(o->f20));
        initialize_effect_event((void *)(((char *)o->f20 + 0x7b8)), v6, o->f10c, (void *)(((char *)o + 0x118)), (unsigned int)t4);
        send_effect_event((void *)(((char *)o->f20 + 0x7b8)));
    }
}
