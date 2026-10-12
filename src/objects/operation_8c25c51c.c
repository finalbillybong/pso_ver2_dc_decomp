typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    int f28;
};
extern int call_8c25c6a8(void);
void operation_8c25c51c(Object *o)
{
    int t1;
    o->f24 = -1;
    o->f28 = 0;
    t1 = call_8c25c6a8();
    if (t1 != 0) {
        o->f20 = 1;
    }
}
