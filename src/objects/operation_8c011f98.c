typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Arg0_24 *f24;
    Arg0_28 *f28;
};
extern char g_8c2e2adc[];
extern void call_8c011ef8(void *, ...);
void operation_8c011f98(Object *o)
{
    call_8c011ef8((void *)((g_8c2e2adc + 0x4d)), (void *)(o->f20), (void *)(o->f24), (void *)(o->f28));
}
