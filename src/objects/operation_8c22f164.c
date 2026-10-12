typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    float f68;
};
extern void call_8c19a0bc(int, int, int, float);
void operation_8c22f164(Object *o, int a1)
{
    call_8c19a0bc(a1, a1 + 0x10, 0, o->f68);
}
