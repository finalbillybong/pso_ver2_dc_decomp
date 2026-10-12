typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x5];
    unsigned char f05;
};
extern int call_8c1c9358(void);
unsigned char operation_8c1c74dc(Object *o)
{
    int t1;
    t1 = call_8c1c9358();
    return (t1 != 0) ? o->f05 : 1;
}
