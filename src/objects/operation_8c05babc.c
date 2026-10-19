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
extern void call_8c102cd0(void *, int, int, int);
void operation_8c05babc(Object *o)
{
    if (((o->f34 & 0x40800)) == 0) {
        call_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    }
}
