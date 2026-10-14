typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x390];
    int f390;
};
extern void call_8c1b4088(Object *, int);
void operation_8c1b3b24(Object *o)
{
    if (o->f390 != 3 && o->f390 != 4) {
        call_8c1b4088(o, 3);
    }
}
