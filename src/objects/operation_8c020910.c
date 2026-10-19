typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Block_p0_3c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3c;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    Vector3 f48;
    char unknown54[0x5dc];
    float f630;
    float f634;
};
struct Arg1 {
    char unknown0[0x8];
    Vector3 f08;
};
extern void update_object_center(void *);
void operation_8c020910(Object *o, Arg1 *a1)
{
    *(Vector3 *)&o->f3c = *(Vector3 *)&a1->f08;
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
    update_object_center((void *)o);
    {
        float z = o->f3c.f08;
        o->f630 = o->f3c.f00;
        o->f634 = z;
    }
}
