typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x9c];
    unsigned char f9c;
    unsigned char f9d;
    char unknown9e[0x2];
    float fa0;
    float fa4;
};
extern char g_8c303680[];
extern void operation_8c011ef0(void *, ...);
void operation_8c0a531c(Object *o)
{
    operation_8c011ef0((void *)((void *)g_8c303680));
    operation_8c011ef0((void *)((g_8c303680 + 0x15)), o->f9c);
    operation_8c011ef0((void *)((g_8c303680 + 0x27)), o->f9d);
    operation_8c011ef0((void *)((g_8c303680 + 0x38)), o->fa0);
    operation_8c011ef0((void *)((g_8c303680 + 0x49)), o->fa4);
}
