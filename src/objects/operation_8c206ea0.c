typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct S_c8c021ef8 {
    char unknown0[0x44];
    float f44;
};
struct Object {
    char unknown0[0x4];
    short f04;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c100850(int);
void operation_8c206ea0(Object *o)
{
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0 && !(4000.0f > t1->f44)) {
        call_8c100850(3);
        o->f04 |= 1;
    }
}
