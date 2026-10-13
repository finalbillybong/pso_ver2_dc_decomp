typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3ac Arg0_3ac;
struct Object {
    char unknown0[0x3ac];
    Arg0_3ac *f3ac;
};
extern int call_8c18e768(int, void *);
int operation_8c1adfb8(Object *o)
{
    int t1;
    if ((int)(o->f3ac) > 0) {
        t1 = call_8c18e768(0x10000, (void *)(o->f3ac));
        return (int)(t1);
    }
    return 0;
}
