typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x2a6];
    int f398;
};
extern void call_8c1543e4(void);
extern void call_8c01c5f0(Object *);
void operation_8c15297c(Object *o)
{
    if (o->f398 != -1) {
        if (o->f398 != 0) {
            if (o->f398 == 1) {
                goto L_8c1529b0;
            }
            return;
        }
        o->f34 &= -0x40001;
        o->ff0 = 0;
        call_8c1543e4();
        o->f398 = 1;
L_8c1529b0:;
        call_8c01c5f0(o);
    }
}
