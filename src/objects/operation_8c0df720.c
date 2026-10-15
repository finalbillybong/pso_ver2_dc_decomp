typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x28];
    float f60;
    char unknown64[0x1d];
    unsigned char f81;
    char unknown82[0x1];
    char f83;
};
extern void operation_8c0dc610(void *, float);
void operation_8c0df720(Object *o, int a1)
{
    int v1;
    o->f60 = 0.0f;
    operation_8c0dc610((void *)o, -10000.0f);
    v1 = !(o->f34 & 1);
    if (v1 != 0) {
        o->f34 |= 1;
    }
    o->f81 &= -0x51;
    if (((a1 & 2)) != 0) {
        o->f81 |= 8;
    } else {
        o->f81 &= -9;
    }
    if (((a1 & 0x20)) != 0) {
        o->f81 |= 2;
        o->f81 |= 1;
        o->f34 |= 0x200;
        o->f83 = 4;
        return;
    }
    o->f81 &= -3;
}
