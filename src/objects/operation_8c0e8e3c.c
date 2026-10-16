typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_58 Arg0_58;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    int f28;
    unsigned char f2c;
    char unknown2d[0x3];
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    int f50;
    unsigned char f54;
    char unknown55[0x3];
    Arg0_58 *f58;
};
struct Frame {
    Block8 f04;
    Block8 f0c;
};
extern void initialize_hierarchy_node(void *, void *);
extern int call_8c0e92e0(Object *);
extern void operation_8c01c250(int);
extern int call_8c0101dc(void *);
extern int operation_8c1f1850(void);
extern void select_mode3_8c1cc4e0(void);
extern int call_8c01018c(void *);
extern void initialize_channel_handles(void);
extern void select_available_channel(void);
extern void select_mode2_8c1cc4c8(void);
extern void select_mode19_8c1cc648(void);
extern int operation_8c19b054(void);
extern int call_8c37293e(int, int);
extern int allocate_block(void *, unsigned int);
extern void call_8c198294(int, Object *);
extern int create_fitted_pair_grid_view(void *, void *);
extern void call_8c05fbf8(int, int, int, int);
Object *operation_8c0e8e3c(Object *o)
{
    Frame frame;
    Object **home = &o;
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)(*(S_g8c44be88 **)0x8c44be88));
    o->dispatch = (void *)0x8c267f40;
    o->f50 = 0;
    o->f24 = 0;
    o->f28 = 0;
    o->f2c = 0xff;
    o->f54 = 0xff;
    o->f20 = 0;
    o->f30 = 192.0f;
    o->f34 = 376.0f;
    o->f38 = 448.0f;
    o->f3c = 404.0f;
    o->f40 = 0.0f;
    o->f44 = 0.765625f;
    o->f48 = 1.0f;
    o->f4c = 0.875f;
    t1 = call_8c0e92e0(o);
    o->f58 = (Arg0_58 *)t1;
    operation_8c01c250(2);
    if (*(int *)0x8c470324 != 0) {
        if (*(int *)0x8c470324 == 1) {
            goto L_8c0e8f60;
        }
    } else {
        t2 = call_8c0101dc((void *)(o->f58));
        v1 = (int)-1;
        if (t2 != v1) {
            t3 = call_8c0101dc((void *)(o->f58));
            if (t3 != -2) {
                t4 = operation_8c1f1850();
                if ((unsigned int)(unsigned char)t4 > (unsigned int)1) {
                    select_mode3_8c1cc4e0();
                    return o;
                }
                t5 = operation_8c1f1850();
                if ((unsigned char)t5 == 1) {
                    t6 = call_8c01018c((void *)((void *)0x8c319870));
                    if (t6 != -1) {
                        initialize_channel_handles();
                        select_available_channel();
                        select_mode2_8c1cc4c8();
                        return o;
                    }
                }
                initialize_channel_handles();
                select_available_channel();
                select_mode19_8c1cc648();
                return o;
L_8c0e8f60:;
                t7 = operation_8c19b054();
                t8 = call_8c37293e((int)((char)t7), 0);
                if (t8 >= (int)(o->f58)) {
                    select_mode19_8c1cc648();
                    return o;
                }
            }
        }
    }
    t9 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x40);
    if (t9 != 0) {
        call_8c198294(t9, o);
    }
    *(Block8 *)&(&frame)->f0c = *(Block8 *)&*(Block8 *)0x8c30833c;
    *(Block8 *)&(&frame)->f04 = *(Block8 *)&*(Block8 *)0x8c308344;
    t10 = create_fitted_pair_grid_view((void *)(&(&frame)->f0c), (void *)(&(&frame)->f04));
    o->f50 = (int)(t10);
    call_8c05fbf8(0x50006, 0, 0, 0);
    return o;
}
