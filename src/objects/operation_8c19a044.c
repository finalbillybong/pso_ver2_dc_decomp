typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    char dispatch;
};
extern void call_8c19a054(void);
void operation_8c19a044(Object *o, int a1)
{
    o->dispatch = a1;
    call_8c19a054();
}
