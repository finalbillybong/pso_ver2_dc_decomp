typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x34];
    unsigned short f68;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
extern void call_8c0e2c10(void *, int);
void operation_8c0fc9a0(Object *o)
{
    call_8c0e2c10((void *)(o->f30->f00), (int)(o->f68));
}
