typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0a53e4 S_c8c0a53e4;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x12e];
    int f134;
};
struct S_c8c0a53e4 {
    char unknown0[0x2];
    unsigned short f02;
};
extern void call_8c13f0ac(float);
extern S_c8c0a53e4 *get_view_motion_parameters(void);
extern int call_8c0a1b68(void);
void operation_8c13eb5c(Object *o)
{
    S_c8c0a53e4 *t1;
    int t2;
    if (o->f134 != 0) {
        if (o->f134 != 1) {
            return;
        }
    } else {
        call_8c13f0ac(1.0f);
        return;
    }
    t1 = get_view_motion_parameters();
    if (((t1->f02 & 1)) == 0) {
        t2 = call_8c0a1b68();
        if ((unsigned short)t2 == 2) {
            return;
        }
    }
    o->f04 |= 1;
}
