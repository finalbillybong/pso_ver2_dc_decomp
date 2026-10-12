typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x2a6];
    int f398;
};
extern void call_8c01c5f0(void);
void operation_8c13b174(Object *o)
{
    if (o->f398 != -1) {
        if (o->f398 != 0) {
            if (o->f398 == 1) {
                goto L_8c13b198;
            }
            return;
        }
        o->ff0 = 4;
        o->f398 = 1;
L_8c13b198:;
        call_8c01c5f0();
    }
}
