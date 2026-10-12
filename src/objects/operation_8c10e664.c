typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6e];
    short f6e;
    char unknown70[0x14];
    int f84;
    char unknown88[0x8];
    char f90;
};
extern float squared_distance_xz(void *, void *);
extern void operation_8c110278(void *, int);
int operation_8c10e664(Object *o)
{
    float t1;
    t1 = squared_distance_xz(((char *)o + 0xb0), ((char *)o + 0xd4));
    if (!(t1 > 100.0f)) {
        return 0;
    }
    if (o->f90 > 0x1e) {
        o->f90 = 0x1e;
        o->f84 |= 0x4000;
        if (o->f6e == 0) {
            operation_8c110278((void *)o, 7);
        }
        o->f6e += 1;
        if (o->f6e >= 0x12c) {
            o->f6e = 0;
        }
        return 0;
    }
    if (o->f90 == 0 && ((o->f84 & 0x4000)) != 0) {
        o->f6e = 0;
        operation_8c110278((void *)o, 0x18);
        o->f84 &= -0x4001;
    }
    return 1;
}
