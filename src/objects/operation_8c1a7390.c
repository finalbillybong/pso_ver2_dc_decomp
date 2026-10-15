typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x768];
    int f768;
};
extern int operation_02c350(void *);
float operation_8c1a7390(Object *o)
{
    int t1;
    t1 = operation_02c350((void *)o);
    return (float)*(char *)((char *)((char *)((short)t1 * 3 + 0x8c288588) + 0x0) + (o->f768));
}
