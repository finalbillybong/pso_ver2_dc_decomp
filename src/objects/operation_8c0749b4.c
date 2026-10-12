typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xea];
    int ff0;
};
extern void call_8c07444c(void);
void operation_8c0749b4(Object *o)
{
    o->ff0 = 1;
    call_8c07444c();
    o->f04 |= 0x10;
}
