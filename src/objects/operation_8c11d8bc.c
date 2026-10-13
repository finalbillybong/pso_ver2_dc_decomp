typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    int fe4;
};
extern void call_8c11d944(void);
extern void call_8c11d9c8(void);
void operation_8c11d8bc(Object *o)
{
    if (o->fe4 != 0) {
        if (o->fe4 != 1) {
            return;
        }
    } else {
        call_8c11d944();
        return;
    }
    call_8c11d9c8();
}
