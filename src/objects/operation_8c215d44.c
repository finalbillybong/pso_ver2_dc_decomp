typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    float f00;
    float f04;
};
struct Object {
    char unknown0[0x48];
    float f48;
    float f4c;
    char unknown50[0x24];
    int f74;
};
void operation_8c215d44(Object *o, Arg1 *a1)
{
    a1->f00 = o->f48;
    a1->f04 = (float)o->f74 **(float *)0x8c2e153c + o->f4c;
}
