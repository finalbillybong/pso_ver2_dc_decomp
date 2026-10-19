typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    Arg0_24 *f24;
    int f28;
};
struct Arg0_24 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
extern S_g8c44be84 *g_8c44be84;
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int operation_8c1571f4(void *);
extern int allocate_block(void *, unsigned int);
extern void initialize_color_rise(int, void *, void *);
extern int target_query_8c1a924c(Object *);
extern void operation_8c1a9280();
void operation_8c1a9100(Object *o)
{
    int t1;
    int t2;
    int t3;
    switch (o->f28) {
    case 2:
        break;
    case 0:
        o->f28 = 1;
    case 1:
        if (((o->f24->f80 & 0xffff & 4)) != 0) {
            if (g_8c46fe20 != 0) {
                g_8c46fe20->f20 &= -5;
            }
            if (g_8c46fe20 != 0) {
                g_8c46fe20->f20 &= -0x11;
            }
            o->f04 |= 1;
            o->f28 = 2;
            return;
        }
        if (((o->f24->f80 & 0xffff & 2)) != 0) {
            t1 = operation_8c1571f4((void *)(o->f24));
            if (t1 == 0) {
                t2 = allocate_block(g_8c4d97e0, (unsigned int)0x2c);
                if (t2 != 0) {
                    initialize_color_rise(t2, g_8c44be84, operation_8c1a9280);
                }
                o->f28 = 2;
            }
            if (t1 != 1) {
                return;
            }
            if (g_8c46fe20 != 0) {
                g_8c46fe20->f20 &= -0x11;
            }
            if (g_8c46fe20 != 0) {
                g_8c46fe20->f20 &= -5;
            }
            o->f04 |= 1;
            o->f28 = 2;
            return;
        }
        t3 = target_query_8c1a924c(o);
        if (t3 == 0) {
            if (g_8c46fe20 != 0) {
                g_8c46fe20->f20 &= -5;
            }
            if (g_8c46fe20 != 0) {
                g_8c46fe20->f20 &= -0x11;
            }
            o->f04 |= 1;
            o->f28 = 2;
        }
    }
}
