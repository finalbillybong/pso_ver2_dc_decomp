typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30];
    int f30;
};
extern void call_8c05fbf8(int, int, int, int);
extern void call_8c098d98(Object *);
void operation_8c098430(Object *o)
{
    call_8c05fbf8(0x50001, 0, 0, 0);
    o->f30 = 1;
    call_8c098d98(o);
}
