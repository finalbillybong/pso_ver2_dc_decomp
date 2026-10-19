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
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c1b2ec4(Object *o)
{
    o->f3f0 = 0.0f;
    call_8c05fbf8(0x30021, (void *)(((char *)o + 0x3c)), 0, 1);
    o->f3a0 = 0x96;
}
