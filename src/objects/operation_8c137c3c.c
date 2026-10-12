typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
};
extern int call_8c011214(int, int, int);
void operation_8c137c3c(Object *o)
{
    int t1;
    t1 = call_8c011214((int)((char *)o + 0x48), (int)((char *)o + 0x3c), 0x40000100);
    if (t1 != 0) {
        o->f04 |= 1;
    }
}
