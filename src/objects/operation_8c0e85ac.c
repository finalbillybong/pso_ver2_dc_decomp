typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xec];
    int fec;
    char unknownf0[0x4c];
    int f13c;
};
extern void call_8c05fbf8(int, int, int, int);
void operation_8c0e85ac(Object *o)
{
    if (((o->fec & 0x40)) == 0) {
        call_8c05fbf8(0xa, (int)((int)o->f13c + 0x3c), 0, 0);
    }
}
