typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_38c Arg0_38c;
struct Object {
    char unknown0[0x38c];
    Arg0_38c *f38c;
};
extern void call_8c24e644(int, void *);
void operation_8c0594b0(Object *o, int a1)
{
    call_8c24e644(a1, (void *)(o->f38c));
}
