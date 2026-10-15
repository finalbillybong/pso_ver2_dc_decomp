typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c287e90 S_L8c287e90;
typedef struct Object Object;
struct Object {
    char unknown0[0x818];
    int f818;
};
struct S_L8c287e90 {
    char unknown0[0x4];
    float f04;
};
extern S_L8c287e90 g_8c287e90;
extern int operation_8c026634(void *);
float operation_8c1a70f4(Object *o)
{
    int t1;
    if (((o->f818 & 0x10)) != 0) {
        return 0.0f;
    }
    t1 = operation_8c026634((void *)o);
    return *(float *)((char *)&g_8c287e90.f04 + (t1 << 3));
}
