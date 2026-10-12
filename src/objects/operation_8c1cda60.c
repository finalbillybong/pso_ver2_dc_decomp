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
    char unknown34[0x4e];
    short f82;
    char unknown84[0x2];
    short f86;
};
extern void call_8c19f19c(void *);
void operation_8c1cda60(Object *o)
{
    if (!(o->f82 >= o->f86)) {
        call_8c19f19c(*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f82 << 2)));
        o->f82 += 1;
    }
}
