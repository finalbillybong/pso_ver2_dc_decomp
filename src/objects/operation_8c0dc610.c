typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    float f20;
};
extern void call_8c0e25cc(void);
extern void call_8c0e24f8(Object *);
void operation_8c0dc610(Object *o, float f0)
{
    call_8c0e25cc();
    o->f20 = f0;
    call_8c0e24f8(o);
}
