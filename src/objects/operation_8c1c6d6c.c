typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x70];
    float f70;
    char unknown74[0x30];
    char fa4;
    char unknowna5[0x1];
    char fa6;
    char fa7;
};
extern void call_8c1c6dc4(Object *, int);
void operation_8c1c6d6c(Object *o)
{
    int v1;
    if (o->f70 > 0.0f) {
        v1 = (int)0;
        while (4 > v1) {
            call_8c1c6dc4(o, v1);
            v1 = (int)(v1 + 1);
        }
        return;
    }
    o->fa7 = 0;
    o->fa6 = 0;
    o->fa4 = 0;
    call_8c1c6dc4(o, 1);
}
