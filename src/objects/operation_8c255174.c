typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x38];
    int f38;
    char unknown3c[0x198];
    int f1d4;
};
extern void call_8c255408(Object *, int);
void operation_8c255174(Object *o)
{
    char *v1;
    call_8c255408(o, 0x13);
    v1 = (char *)o->f38;
    o->f38 = (int)(o->f1d4);
    call_8c255408(o, 0xa);
    o->f38 = (int)(v1);
}
