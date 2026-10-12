typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x394];
    int f394;
};
extern void call_8c15e92c(Object *, int);
void operation_8c15e8fc(Object *o)
{
    if (o->f394 != 0) {
        call_8c15e92c(o, 0);
    }
}
