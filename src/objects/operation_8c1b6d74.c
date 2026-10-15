typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x39c];
    int f39c;
};
extern void call_8c1ae010(Object *, int);
void operation_8c1b6d74(Object *o)
{
    if (!(--o->f39c >= 0)) {
        if (*(int *)0x8c4703c0 == 0) {
            call_8c1ae010(o, 0xa);
            return;
        }
        call_8c1ae010(o, 0xb);
    }
}
