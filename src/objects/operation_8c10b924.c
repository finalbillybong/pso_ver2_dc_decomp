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
extern void call_8c0eeb58(void);
extern void operation_8c10b9d0(int);
void operation_8c10b924(Object *o)
{
    call_8c0eeb58();
    operation_8c10b9d0((int)o);
    o->fe4 = 2;
}
