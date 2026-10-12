typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
};
extern void call_8c1e8e60(Object *, short, int);
extern void set_fields_8c1e9590(void *);
extern int operation_1e9610(void *);
extern void operation_021f88(void *, int, short);
void operation_8c1e9528(Object *o)
{
    int t1;
    call_8c1e8e60(o, o->f30a, 6);
    set_fields_8c1e9590((void *)o);
    t1 = operation_1e9610((void *)o);
    operation_021f88((void *)o, 1, (short)t1);
}
