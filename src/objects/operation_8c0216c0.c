typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
};
extern void set_field_8c052174(void *);
extern void call_8c053f54(int);
void operation_8c0216c0(Object *o)
{
    set_field_8c052174((void *)o);
    call_8c053f54((int)o);
    *(int *)((char *)0x8c41ce2c + (o->f20 << 2)) = 0;
}
