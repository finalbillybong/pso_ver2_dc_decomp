typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x330];
    short f330;
    char unknown332[0x28];
    short f35a;
};
extern int call_8c0121a0(void);
int operation_8c05b950(Object *o)
{
    int t1;
    t1 = call_8c0121a0();
    o->f35a = o->f330;
    return t1;
}
