typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2e];
    int f34;
    char unknown38[0x4];
    int f3c;
};
extern S_g8c418a00 *g_8c418a00;
extern S_g8c44be84 *g_8c44be84;
extern int g_8c4d7ca0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4dc800;
extern int hierarchy_is_active(void *);
extern int operation_8c220ce0(void);
extern int operation_8c106760(Object *);
extern int operation_8c106798(Object *);
extern void operation_8c02f9c0(void *);
extern void operation_8c10664c(void *);
extern int allocate_block(void *, unsigned int);
extern void initialize_color_rise(int, void *, void *);
void operation_8c208a6c(Object *o)
{
    char *v14;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    v14 = (char *)o->f3c;
    if (v14 != 0) {
        t1 = hierarchy_is_active((void *)v14);
        if (t1 != 0) {
            return;
        }
        o->f3c = 0;
    }
    t2 = operation_8c220ce0();
    if (t2 != 0) {
        switch (o->f34) {
        case 0:
            t3 = operation_8c106760(o);
            if (t3 == 0) {
                t4 = operation_8c106798(o);
                if (t4 == 0) {
                    return;
                }
            }
            if (g_8c4dc800 == 0) {
                operation_8c02f9c0(g_8c418a00);
            }
            operation_8c10664c((void *)o);
            o->f04 |= 1;
            return;
        case 1:
            t5 = allocate_block(g_8c4d97e0, (unsigned int)0x2c);
            if (t5 != 0) {
                initialize_color_rise(t5, g_8c44be84, (void *)((void *)0x8c208d20));
            }
            g_8c4d7ca0 = 1;
            operation_8c10664c((void *)o);
            o->f04 |= 1;
            return;
        case 2:
            t6 = allocate_block(g_8c4d97e0, (unsigned int)0x2c);
            if (t6 != 0) {
                initialize_color_rise(t6, g_8c44be84, (void *)((void *)0x8c208d00));
            }
            g_8c4d7ca0 = 1;
            operation_8c10664c((void *)o);
            o->f04 |= 1;
        }
    }
}
