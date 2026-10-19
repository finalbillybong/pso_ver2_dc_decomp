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
    char unknown0[0x24];
    int f24;
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
extern void operation_8c0246d0(void *);
extern int lookup_low_id(int);
extern void operation_8c02afd8(void *);
void operation_8c10aa40(Object *o)
{
    int v6;
    int t1;
    if (o->f28 != 0) {
        operation_8c0246d0((void *)(o->f28));
    }
    v6 = (int)0;
    while (4 > v6) {
        t1 = lookup_low_id(v6);
        if (t1 != 0) {
            operation_8c02afd8((void *)t1);
        }
        v6 = (int)(v6 + 1);
    }
    if (g_8c46fe20 != 0) {
        g_8c46fe20->f20 |= 1;
        if (g_8c4d59d8 != 0) {
            g_8c4d59d8->f04 |= 0x10;
        }
    }
    o->f24 = 1;
}
