typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x198];
    short f198;
    short f19a;
    char unknown19c[0x194];
    short f330;
    short f332;
};
extern float operation_8c1a70d4(int);
extern float operation_8c1a70f4(void *);
extern void call_8c0439bc(Object *, int, int, int, float, float);
void operation_8c025570(Object *o)
{
    short v14;
    short v2;
    short v10;
    float t1;
    float t2;
    t1 = operation_8c1a70d4((int)o);
    t2 = operation_8c1a70f4((void *)o);
    call_8c0439bc(o, 0, 0, 0, t1, t2);
    v14 = (short)o->f330;
    if (!(v14 >= 0)) {
        o->f330 = 0;
    } else {
        v2 = (short)o->f198;
        if (v14 > (short)v2) {
            o->f330 = v2;
        }
    }
    v14 = (short)o->f332;
    if (!(v14 >= 0)) {
        o->f332 = 0;
    } else {
        v10 = (short)o->f19a;
        if (v14 > (short)v10) {
            o->f332 = v10;
        }
    }
}
