typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x130];
    int f130;
};
struct Arg1 {
    char f00;
    char f01;
    char f02;
};
void operation_8c074ea0(Object *o, Arg1 *a1)
{
    int v1;
    if (a1 != 0) {
        v1 = (int)(o->f130 ^ (int)(&o->f130));
        a1->f02 = v1 & 0xff;
        v1 = (int)((unsigned int)v1 >> 8);
        a1->f01 = v1 & 0xff;
        v1 = (int)((unsigned int)v1 >> 8);
        a1->f00 = v1 & 0xff;
    }
}
