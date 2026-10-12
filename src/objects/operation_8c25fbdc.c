typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2c];
    int f2c;
};
extern void call_8c25fc00(void);
void operation_8c25fbdc(Object *o)
{
    call_8c25fc00();
    o->f2c += 0x444;
}
