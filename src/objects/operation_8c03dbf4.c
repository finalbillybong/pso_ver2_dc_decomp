typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    int f04;
    int f08;
    int f0c;
    char unknown10[0x408];
    int f418;
    char unknown41c[0xc];
    int f428;
    int f42c;
    int f430;
    int f434;
    int f438;
    int f43c;
};
void operation_8c03dbf4(Object *o)
{
    o->f42c = 0;
    o->f430 = 0;
    o->f434 = 0;
    o->f438 = 0;
    o->f43c = 0;
    o->f0c = 0;
    o->f08 = 0;
    o->f04 = 0;
    o->f418 = 0;
    o->f428 = 0;
    *(int *)0x8c462cec = 0;
}
