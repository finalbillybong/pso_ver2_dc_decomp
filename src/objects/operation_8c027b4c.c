typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a1];
    char f3a1;
};
extern void call_8c027b60(char, Object *, int);
void operation_8c027b4c(Object *o)
{
    call_8c027b60(o->f3a1, o, 0);
}
