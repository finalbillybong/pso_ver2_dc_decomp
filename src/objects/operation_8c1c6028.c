typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x38];
    Arg0_38 *f38;
    int f3c;
};
extern int find_record_8c0744dc(int);
extern void operation_8c0771a0(void *, int, int);
void operation_8c1c6028(Object *o)
{
    int t1;
    t1 = find_record_8c0744dc((int)(o->f38));
    if (t1 != 0) {
        operation_8c0771a0((void *)t1, (int)(((char *)o + 0x20)), (int)(((char *)o + 0x2c)));
    }
    o->f3c = 1;
}
