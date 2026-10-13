typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x70];
    char f70;
};
extern void call_8c05fbf8(int, int, int, int);
void operation_8c22447c(Object *o)
{
    if (((o->f70 & 1)) == 0) {
        call_8c05fbf8(0x50016, 0, 0, 0);
        o->f70 |= 2;
    }
}
