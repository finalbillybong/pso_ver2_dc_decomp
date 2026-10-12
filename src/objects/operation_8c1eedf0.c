typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
};
extern void call_8c1e8e60(Object *, int, int);
void operation_8c1eedf0(Object *o)
{
    if (((o->f34 & 0x800)) == 0) {
        call_8c1e8e60(o, 0x12, 5);
    }
}
