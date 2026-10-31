typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x4];
    int f20;
    int f24;
    int f28;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c44be84 *g_8c44be84;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *g_8c513320;
extern int get_current_area_8c032b10(void);
extern S_c8c122700 *heap_alloc_8c122700(void *, int);
extern void TObject_ctor_8c0330e4(S_c8c122700 *, void *);
extern int lookup_low_id(void *);
int operation_8c256a90(void)
{
    int t1;
    S_c8c122700 *t2;
    int t3;
    t1 = get_current_area_8c032b10();
    if (t1 != 0x10) {
        if (t1 != 0x11) {
            return 0;
        }
    }
    if (g_8c513320 != 0) {
        return 0;
    }
    t2 = heap_alloc_8c122700(g_8c4d97e0, 0x2c);
    if (t2 != 0) {
        S_c8c122700 *self = t2;
        S_c8c122700 **home = &self;
        (void)home;
        TObject_ctor_8c0330e4(t2, g_8c44be84);
        self->f18 = (void *)0x8c281850;
        self->f20 = 0x3de;
        self->f24 = 0x1e;
        t3 = lookup_low_id(g_8c418248);
        self->f28 = t3;
    }
    g_8c513320 = t2;
    return 1;
}
