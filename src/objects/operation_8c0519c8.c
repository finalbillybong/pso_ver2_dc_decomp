typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x390];
    short f390;
};
extern void call_8c09e6d0(void);
void operation_8c0519c8(Object *o)
{
    if (((o->f390 & 0x80)) == 0) {
        o->f390 |= 0x80;
        call_8c09e6d0();
    }
}
