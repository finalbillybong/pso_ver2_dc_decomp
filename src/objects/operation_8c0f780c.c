typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    float f24;
    short f28;
};
extern void call_8c0e1940(void);
void operation_8c0f780c(Object *o)
{
    call_8c0e1940();
    o->f28 = (int)o->f24;
}
