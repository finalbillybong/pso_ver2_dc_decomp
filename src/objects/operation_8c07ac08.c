typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x30];
    int f68;
    char unknown6c[0x84];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0x8c];
    int f398;
    char unknown39c[0x8];
    int f3a4;
};
extern void call_8c01c5f0(void);
extern void call_8c07982c(void);
extern void call_8c079cc4(void);
extern void call_8c07a1dc(void);
extern void call_8c07a9a4(void);
extern void call_8c07a418(void);
extern void call_8c07ad7c(void);
extern void call_8c07aea4(void);
void operation_8c07ac08(Object *o)
{
    switch (o->f30a) {
    case 0:
        if (o->f398 == -1) {
            return;
        }
        if (o->f398 != 0) {
            if (o->f398 == 1) {
                return;
            }
            if (o->f398 == 2) {
                return;
            }
            return;
        }
        if (((o->f3a4 & 0x10000)) != 0) {
            o->f34 |= 0x4040000;
            o->f68 = 0x8000;
            o->f398 = 1;
        } else {
            o->ff0 = 0;
            o->f398 = 2;
        }
        o->f3a4 |= 0x400000;
        call_8c01c5f0();
        return;
    case 1:
        call_8c07982c();
        return;
    case 2:
        call_8c079cc4();
        return;
    case 4:
        call_8c07a1dc();
        return;
    case 3:
        call_8c07a9a4();
        return;
    case 5:
        call_8c07a418();
        return;
    case 6:
        call_8c07ad7c();
        return;
    case 8:
        call_8c07aea4();
        return;
    case 7:
        break;
    }
}
