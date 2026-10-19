typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xf8];
    int ff8;
};
extern void call_8c082be4(Object *);
extern void call_8c082a6c(Object *);
void operation_8c082bb4(Object *o)
{
    if (0x3c > o->ff8) {
        call_8c082be4(o);
        return;
    }
    call_8c082a6c(o);
}
