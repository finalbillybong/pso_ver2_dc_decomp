typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    char f6a;
    char f6b;
};
extern void call_8c05fbf8(int, int, int, int);
void operation_8c1bdaa4(Object *o)
{
    call_8c05fbf8(0x50000, 0, 0, 0);
    o->f6b += -1;
    if (!(o->f6b >= 0)) {
        if (((o->f68 & 1)) != 0) {
            o->f6b = 0;
            return;
        }
        o->f6b = o->f6a + -1;
    }
}
