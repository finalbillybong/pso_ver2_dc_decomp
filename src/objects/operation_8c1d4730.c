typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x21];
    char f21;
};
extern void call_8c0de3cc(void);
void operation_8c1d4730(Object *o)
{
    if (((o->f21 & 1)) != 0) {
        call_8c0de3cc();
        o->f21 = (unsigned int)o->f21 >> 1 << 1;
    }
}
