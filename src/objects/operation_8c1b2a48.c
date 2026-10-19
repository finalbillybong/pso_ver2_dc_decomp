typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
    char unknown3a4[0x4c];
    float f3f0;
};
extern void operation_8c1b3278(void);
void operation_8c1b2a48(Object *o)
{
    o->f3f0 = 0.0f;
    operation_8c1b3278();
    o->f3a0 = 0x96;
}
