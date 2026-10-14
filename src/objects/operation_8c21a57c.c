typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3c Arg0_3c;
struct Object {
    char unknown0[0x3c];
    Arg0_3c *f3c;
};
extern void call_8c21c9c4(void *, void *);
void operation_8c21a57c(Object *o)
{
    call_8c21c9c4((void *)((void *)0x8c2e1800), (void *)(o->f3c));
}
