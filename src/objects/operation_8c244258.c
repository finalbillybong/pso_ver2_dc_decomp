typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_54 S_g8c46fe20_54;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x32];
    S_g8c46fe20_54 *f54;
};
struct S_g8c46fe20_54 {
    char unknown0[0x22];
    short f22;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
};
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x4];
    int f20;
};
extern char g_8c33ab28[];
extern void call_8c36e944(int);
extern void call_8c36e874(void);
extern int call_8c36e998(void);
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c02688c(int);
extern void clear_pair_8c244878(void *);
extern int current_effect_mode(void);
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c12b154(void *, int, int);
void operation_8c244258(Object *o)
{
    int v39;
    int v61;
    int t1;
    S_c8c021ef8 *t2;
    S_c8c021ef8 *t3;
    int t4;
    S_c8c122700 *t5;
    call_8c36e944(4);
    call_8c36e874();
    t1 = call_8c36e998();
    o->f34 = t1;
    t2 = lookup_low_id((int)((unsigned short)*(int *)0x8c418248));
    if (t2 != 0) {
        call_8c02688c((int)t2);
    }
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 &= -0x21;
    }
    if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f54 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f54->f22 &= -9;
    }
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 = (unsigned int)(*(S_g8c46fe20 **)0x8c46fe20)->f20 >> 1 << 1;
        if (*(int *)0x8c4d59d8 != 0) {
            (*(S_g8c4d59d8 **)0x8c4d59d8)->f04 &= -0x11;
        }
    }
    t3 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
    if (t3 != 0) {
        t3->f34 &= -0x20001;
    }
    clear_pair_8c244878((void *)o);
    t4 = current_effect_mode();
    if (t4 == 0x10) {
        v39 = (int)(g_8c33ab28 + 0x2e0);
    } else {
        v39 = (int)(g_8c33ab28 + 0x2ea);
    }
    t5 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x44);
    if (t5 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t5;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_hierarchy_node((void *)t5, (void *)o);
        self->f18 = (void *)0x8c27ccc0;
        self->f20 = 0x2d;
        call_8c12b154((void *)(((char *)self + 0x24)), v39, 0x20);
    }
    v61 = (int)0;
    while (8 > v61) {
        *(char *)((char *)((char *)o + 0x268) + (v61)) = 1;
        if (*(short *)((char *)0x8c510ce8 + (v61 << 1)) == 0) {
            *(char *)((char *)((char *)o + 0x268) + (v61)) = 0;
        }
        v61 = (int)(v61 + 1);
    }
    o->f64 = *(int *)0x8c510ccc;
}
