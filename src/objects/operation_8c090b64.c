typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
};
extern void call_8c059ea4(Object *, int);
void operation_8c090b64(Object *o)
{
    if (o->f30a != 0xd && o->f30a != 0xb) {
        call_8c059ea4(o, 0xd);
    }
}
