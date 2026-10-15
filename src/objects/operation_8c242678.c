typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
    int f28;
};
extern void call_8c2440a4(Object *);
void operation_8c242678(Object *o)
{
    if (o->f24 == -1 || o->f24 != 0) {
        return;
    }
    call_8c2440a4(o);
    o->f28 = 1;
}
