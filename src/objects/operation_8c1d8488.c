typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    int fe4;
    char unknowne8[0x4];
    int fec;
};
void operation_8c1d8488(Object *o)
{
    if (*(int *)((char *)0x8c4e2edc + (o->fe4 << 2)) != 0) {
        o->fec += 2;
        if (o->fec >= 0xff) {
            o->fec -= 0xff;
        }
    }
}
