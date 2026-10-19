typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    char f04;
};
struct S_c8c021ef8 {
    char unknown0[0x3be];
    char f3be;
};
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c1ec468(Object *o)
{
    int v1;
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((int)(o->f02));
    if (t1 != 0) {
        char c;
        t1->f3be = 0;
        c = o->f04;
        v1 = (int)(c >= 0);
        if (v1 != 0) {
            t1->f3be = c;
        }
    }
}
