typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x84];
    int f84;
};
extern void call_8c09eb1c(Object *, int);
int operation_8c09e6d0(Object *o)
{
    if (o->f84 != 0) {
        call_8c09eb1c(o, 8);
        return 1;
    }
    return 0;
}
