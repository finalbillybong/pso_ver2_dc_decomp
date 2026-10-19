typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x58];
    int f58;
};
extern void operation_8c1cc690(void);
extern int call_8c0e92e0(Object *);
extern void call_8c0e944c(Object *);
extern void operation_8c0e9730(void *);
void operation_8c0e90b8(Object *o)
{
    int t1;
    operation_8c1cc690();
    t1 = call_8c0e92e0(o);
    o->f58 = (int)(t1);
    call_8c0e944c(o);
    operation_8c0e9730((void *)o);
}
