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
    char unknown34[0x48];
    int f7c;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
extern void call_8c0e2c10(void *, int);
void operation_8c0e3598(Object *o)
{
    call_8c0e2c10(o->f30->f00, *(int *)0x8c418248 + o->f7c + 1 & 3);
}
