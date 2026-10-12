typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x358];
    short f390;
};
extern void call_8c051ff4(Object *, void *, int);
void operation_8c051a4c(Object *o)
{
    if (((o->f390 & 0x60)) != 0) {
        o->f390 &= -0x61;
        call_8c051ff4(o, ((char *)o + 0x3c), 0);
        o->f34 |= 0x800000;
    }
}
