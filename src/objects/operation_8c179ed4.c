typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x138];
    unsigned char f138;
    char unknown139[0x3];
    Arg0_13c *f13c;
    char unknown140[0x2];
    short f142;
};
extern void call_8c075730(Object *, void *, int);
void operation_8c179ed4(Object *o)
{
    if (o->f138 == 3) {
        *(int *)0x8c4db980 = 0;
        call_8c075730(o, (void *)(o->f13c), (int)(o->f142));
        *(int *)0x8c4db980 = 1;
        call_8c075730(o, (void *)(o->f13c), 0x23);
    }
}
