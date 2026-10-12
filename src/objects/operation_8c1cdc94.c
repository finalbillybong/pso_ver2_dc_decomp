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
    short f84;
    short f86;
};
extern void call_8c19f91c(void *);
void operation_8c1cdc94(Object *o)
{
    unsigned int v1;
    o->f82 = 0;
    o->f84 = 0;
    v1 = (unsigned int)0;
    while ((unsigned int)o->f86 > v1) {
        call_8c19f91c(*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v1 << 2)));
        v1 = (unsigned int)(v1 + 1);
    }
}
