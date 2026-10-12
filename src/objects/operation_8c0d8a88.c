typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3e0];
    int f3e0;
};
extern void call_8c0d7590(void);
void operation_8c0d8a88(Object *o)
{
    if (((o->f3e0 & 0x100)) == 0) {
        call_8c0d7590();
    }
}
