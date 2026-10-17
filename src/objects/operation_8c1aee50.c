typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0x14];
    float f58;
    char unknown5c[0x88];
    int fe4;
};
extern void call_8c05fd7c(int, Object *, void *, int, int);
void operation_8c1aee50(Object *o)
{
    float v1;
    v1 = (float)o->f58;
    if (!((o->f40 - v1) > 0.0f)) {
        o->f40 = v1;
        o->fe4 = 0;
    } else {
        o->f40 -= 1.0f;
    }
    call_8c05fd7c(0x40007, o, (void *)(((char *)o + 0x3c)), 0, 0);
}
