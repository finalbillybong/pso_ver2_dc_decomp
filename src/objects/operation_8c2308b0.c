typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_10 Arg0_30_10;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x35];
    char f69;
};
struct Arg0_30 {
    char unknown0[0x10];
    Arg0_30_10 *f10;
};
extern void set_fields_8c197cb0(void *, void *);
void operation_8c2308b0(Object *o)
{
    set_fields_8c197cb0((void *)(o->f30->f10), (void *)(*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (*(unsigned char *)((char *)0x8c2e1c13 + (o->f69)) << 2))));
}
