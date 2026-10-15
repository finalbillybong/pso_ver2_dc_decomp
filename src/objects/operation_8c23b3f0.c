typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x38];
    int f38;
    char unknown3c[0x100];
    Arg0_13c *f13c;
    char unknown140[0x94];
    int f1d4;
};
extern void call_8c075730(Object *, void *, int);
void operation_8c23b3f0(Object *o)
{
    char *v1;
    v1 = (char *)o->f38;
    call_8c075730(o, (void *)(o->f13c), 0x30);
    o->f38 = (int)(o->f1d4);
    call_8c075730(o, (void *)(o->f13c), 0x23);
    o->f38 = (int)(v1);
}
