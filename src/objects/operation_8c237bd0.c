typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
};
extern int operation_8c01c25c(void);
extern int current_effect_mode(void);
int operation_8c237bd0(Object *o)
{
    int t1;
    int t2;
    t1 = operation_8c01c25c();
    switch (t1) {
    case 16:
        t2 = current_effect_mode();
        if (t2 != 0xf) {
            goto L_8c237c10;
        }
        o->f04 |= 1;
        return 1;
    case 15:
        o->f04 |= 1;
        return 1;
    default:
        o->f04 |= 1;
        return 1;
L_8c237c10:;
        return 0;
    }
}
