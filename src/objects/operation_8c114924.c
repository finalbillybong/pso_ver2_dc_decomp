typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    float dispatch;
};
extern void apply_base_blend(void *);
extern void call_8c37b566(int);
void operation_8c114924(Object *o)
{
    apply_base_blend((void *)o);
    if (1.0f > o->dispatch) {
        call_8c37b566(0x2100);
        return;
    }
    call_8c37b566(0xc00);
}
