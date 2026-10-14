typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x13c];
    int f13c;
    char unknown140[0xf4];
    float f234;
};
extern void call_8c172c50(void *, float, float);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c240440(Object *o)
{
    int v1;
    int v3;
    v3 = (int)0;
    if (1.0f > o->f234) {
        o->f234 += 0.14f;
        v1 = (int)0;
        if (!(1.0f > o->f234)) {
            o->f234 = 1.0f;
            v1 = (int)1;
        }
        v3 = (int)v1;
    }
    call_8c172c50((void *)(((char *)o + 0x238)), -0.0400000103f, 1.0f);
    call_8c172c50((void *)(((char *)o + 0x23c)), 0.14f, 1.0f);
    if (v3 == 1) {
        call_8c05fbf8(0x10024, (int)((int)o->f13c + 0x3c), 0, 0);
    }
}
