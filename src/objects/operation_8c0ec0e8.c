typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_154 Arg0_154;
struct Object {
    char unknown0[0x154];
    Arg0_154 *f154;
};
extern void request_resource_release(void *);
extern void call_8c199b14(void);
extern void call_8c1b0308(void);
void operation_8c0ec0e8(Object *o)
{
    request_resource_release(o->f154);
    o->f154 = (Arg0_154 *)0;
    call_8c199b14();
    call_8c1b0308();
}
