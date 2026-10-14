typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x138];
    unsigned char f138;
    char unknown139[0x8];
    unsigned char f141;
};
extern void call_8c0750e8(Object *, int, int);
void operation_8c24d66c(Object *o)
{
    call_8c0750e8(o, (int)(o->f141), (int)(o->f138));
}
