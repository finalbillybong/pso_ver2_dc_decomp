typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
};
struct Object {
    char unknown0[0x1a4];
    int f1a4;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c026700(int, int);
void operation_8c1e8b30(Object *o, int a1)
{
    S_c8c021ef8 *t1;
    t1 = lookup_low_id(a1);
    if (t1 != 0) {
        call_8c026700((int)t1, -1);
        t1->f34 |= 0x20000;
        o->f1a4 = 0x12c;
    }
}
