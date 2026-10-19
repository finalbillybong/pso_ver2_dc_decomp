typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x22];
    Arg0_28 *f28;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d59d8 *g_8c4d59d8;
extern int operation_8c220ce0(void);
extern int operation_8c106760(Object *);
extern int operation_8c106798(Object *);
extern void operation_8c024720(void *);
extern int lookup_low_id(int);
extern void operation_8c02aff0(void *);
void operation_8c10ad64(Object *o)
{
    int v4;
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = operation_8c220ce0();
    if (t1 != 0) {
        t2 = operation_8c106760(o);
        if (t2 == 0) {
            t3 = operation_8c106798(o);
            if (t3 == 0) {
                return;
            }
        }
        if (o->f28 != 0) {
            operation_8c024720((void *)(o->f28));
        }
        v4 = (int)0;
        while (4 > v4) {
            t4 = lookup_low_id(v4);
            if (t4 != 0) {
                operation_8c02aff0((void *)t4);
            }
            v4 = (int)(v4 + 1);
        }
        if (g_8c46fe20 != 0) {
            g_8c46fe20->f20 = (unsigned int)g_8c46fe20->f20 >> 1 << 1;
            if (g_8c4d59d8 != 0) {
                g_8c4d59d8->f04 &= -0x11;
            }
        }
        o->f04 |= 1;
    }
}
