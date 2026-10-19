typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x74];
    float f74;
    char unknown78[0x18];
    int f90;
    char unknown94[0x2c0];
    int f354;
    int f358;
};
extern int operation_8c01c25c(void);
void operation_8c0fdbe0(Object *o)
{
    char *v1;
    int t1;
    o->f358 = (int)o->f74;
    v1 = (char *)o->f358;
    if (!((int)(v1) >= 0)) {
        o->f354 = 0;
        return;
    }
    if ((int)(v1) > 0) {
        o->f354 = 1;
        return;
    }
    t1 = operation_8c01c25c();
    if (t1 == 0xf) {
        o->f354 = 0;
        o->f90 = 0x1e;
        return;
    }
    o->f354 = 2;
}
