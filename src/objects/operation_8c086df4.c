typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0a53e4 S_c8c0a53e4;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct S_c8c0a53e4 {
    char unknown0[0x2];
    unsigned short f02;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x22];
    Arg0_28 *f28;
};
struct Arg0_28 {
    int f00;
};
extern S_c8c0a53e4 *get_view_motion_parameters(void);
extern void call_8c0a21a4(void);
void operation_8c086df4(Object *o)
{
    S_c8c0a53e4 *t1;
    t1 = get_view_motion_parameters();
    if (((t1->f02 & 1)) == 0 && o->f28->f00 != 0) {
        return;
    }
    call_8c0a21a4();
    o->f04 |= 1;
}
