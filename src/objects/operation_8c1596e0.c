typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x32];
    int f38;
    int f3c;
};
extern S_g8c44be84 *g_8c44be84;
extern int g_8c4d7ca0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int hierarchy_is_active(void *);
extern int operation_8c220ce0(void);
extern int operation_8c106760(Object *);
extern int operation_8c106798(Object *);
extern int allocate_block(void *, unsigned int);
extern void initialize_color_rise(int, void *, void *);
extern void operation_8c10664c(void *);
void operation_8c1596e0(Object *o)
{
    char *v34;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    v34 = (char *)o->f38;
    if (v34 != 0) {
        t1 = hierarchy_is_active((void *)v34);
        if (t1 == 1) {
            return;
        }
        o->f38 = 0;
    }
    t2 = operation_8c220ce0();
    if (t2 != 0) {
        t3 = operation_8c106760(o);
        if (t3 == 0) {
            t4 = operation_8c106798(o);
            if (t4 == 0) {
                return;
            }
        }
        switch (o->f3c) {
        case 0:
            break;
        case 1:
            t5 = allocate_block(g_8c4d97e0, (unsigned int)0x2c);
            if (t5 != 0) {
                initialize_color_rise(t5, g_8c44be84, (void *)((void *)0x8c1598bc));
            }
            g_8c4d7ca0 = 1;
            break;
        case 2:
            t6 = allocate_block(g_8c4d97e0, (unsigned int)0x2c);
            if (t6 != 0) {
                initialize_color_rise(t6, g_8c44be84, (void *)((void *)0x8c1598d8));
            }
            g_8c4d7ca0 = 1;
            break;
        case 3:
            t7 = allocate_block(g_8c4d97e0, (unsigned int)0x2c);
            if (t7 != 0) {
                initialize_color_rise(t7, g_8c44be84, (void *)((void *)0x8c223208));
            }
            g_8c4d7ca0 = 1;
        }
        operation_8c10664c((void *)o);
        o->f04 |= 1;
    }
}
