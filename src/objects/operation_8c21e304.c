typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_78 Arg0_78;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x44];
    Arg0_78 *f78;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
extern void call_8c21e3c0(void *, void *);
void operation_8c21e304(Object *o, int a1)
{
    if ((int)(o->f78) != a1) {
        o->f78 = (Arg0_78 *)a1;
        call_8c21e3c0((void *)(o->f30->f00), (void *)(o->f78));
    }
}
