typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
};
extern int call_8c045f04(void);
int operation_8c1a11ec(Object *o)
{
    int t1;
    if (o->f30a != 0) {
        t1 = call_8c045f04();
        return t1;
    }
    return 0;
}
