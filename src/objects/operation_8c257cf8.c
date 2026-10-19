typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6c];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x10];
    int f88;
    int f8c;
    int f90;
    char unknown94[0x2c4];
    int f358;
    int f35c;
    int f360;
    int f364;
    int f368;
};
extern void operation_8c05426c(void *, int, int);
extern void operation_8c05428c(void *, int, int);
void operation_8c257cf8(Object *o)
{
    o->f358 = (int)o->f88 + 1;
    if (1 > o->f358) {
        o->f358 = 1;
    } else {
        if (o->f358 > 0x100) {
            o->f358 = 0x100;
        }
    }
    o->f35c = (int)(o->f8c);
    if (!(o->f35c >= 0)) {
        o->f35c = 0;
    }
    o->f360 = (int)(o->f90);
    if (!(o->f360 >= 0)) {
        o->f360 = 0;
    }
    o->f368 = (int)o->f6c;
    if (o->f368 < 0 || o->f368 >= 0x100) {
        o->f368 = -1;
    } else {
    }
    if (0.0f > o->f70) {
        operation_8c05426c((void *)o, 0, 0x10000000);
    } else {
        operation_8c05428c((void *)o, 0, 0x10000000);
    }
    if (o->f360 == 0) {
        o->f364 = (int)o->f74;
        if (o->f364 >= 0 && !(o->f364 >= 0x100)) {
            return;
        }
        o->f364 = -1;
        return;
    }
    o->f364 = -1;
}
