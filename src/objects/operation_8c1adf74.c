typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1794c8 S_c8c1794c8;
typedef struct Object Object;
struct S_c8c1794c8 {
    char unknown0[0x18];
    int f18;
};
struct Object {
    char unknown0[0x3a8];
    int f3a8;
    int f3ac;
};
extern S_c8c1794c8 *record30_8c1794c8(int);
int operation_8c1adf74(Object *o)
{
    int v3;
    S_c8c1794c8 *t1;
    t1 = record30_8c1794c8(0x35);
    if (1 > t1->f18 || t1->f18 > 0x13) {
        v3 = (int)2;
    } else {
        v3 = (int)t1->f18;
    }
    if (o->f3a8 >= (v3 * o->f3ac)) {
        return 1;
    }
    return 0;
}
