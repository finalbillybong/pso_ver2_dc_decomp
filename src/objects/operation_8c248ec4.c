typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
};
void TItemShootBasyoSen2_v05_8c248ec4(Object *o)
{
    o->f34 += 0x3333;
}
