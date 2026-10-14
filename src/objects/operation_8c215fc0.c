typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c336040 S_L8c336040;
typedef struct Object Object;
struct S_L8c336040 {
    char unknown0[0x4];
    int f04;
};
struct Object {
    char unknown0[0x80];
    int f80;
    char unknown84[0x10];
    int f94;
};
extern S_L8c336040 g_8c336040;
extern void call_8c0e196c(void *, void *);
extern void call_8c215de0(Object *);
void operation_8c215fc0(Object *o)
{
    (&g_8c336040)->f04 = (int)(o->f80);
    call_8c0e196c((void *)(((char *)o + 0x2c)), (void *)((void *)&g_8c336040));
    call_8c215de0(o);
    o->f94 = 1;
}
