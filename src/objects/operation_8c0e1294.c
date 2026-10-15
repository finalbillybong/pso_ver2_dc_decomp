typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_0_20 Arg0_30_0_20;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x4e];
    unsigned char f82;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
struct Arg0_30_0 {
    char unknown0[0x20];
    Arg0_30_0_20 *f20;
};
static inline int icmp(const unsigned char *a, const unsigned char *b)
{
    unsigned char c1, c2;
    while ((c1 = *a++) == (c2 = *b++)) {
        if (c1 == 0) return 0;
    }
    return c1 - c2;
}
int operation_8c0e1294(Object *o, int a1)
{
    int t1;
    if ((o->f82) != 0) {
        return 0;
    }
    t1 = icmp((unsigned char *)o->f30->f00->f20, (unsigned char *)a1);
    if (t1 != 0) {
        return 0;
    }
    return 1;
}
