typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0744dc S_c8c0744dc;
typedef struct Object Object;
typedef struct Arg0_a8 Arg0_a8;
struct Object {
    char unknown0[0xa8];
    Arg0_a8 *fa8;
};
struct S_c8c0744dc {
    char unknown0[0xec];
    int fec;
};
extern S_c8c0744dc *find_record_8c0744dc(int);
int operation_8c1d78fc(Object *o)
{
    int v1;
    S_c8c0744dc *t1;
    if ((int)(o->fa8) == -1) {
        return 0;
    }
    t1 = find_record_8c0744dc((int)(o->fa8));
    if (t1 == 0) {
        return 0;
    }
    v1 = (int)(((t1->fec & 8)) != 0);
    return (int)(v1);
}
