typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_78 Arg0_78;
struct Object {
    char unknown0[0x70];
    short f70;
    short f72;
    short f74;
    char unknown76[0x2];
    Arg0_78 *f78;
};
struct Arg0_78 {
    char unknown0[0x90];
    int f90;
};
extern void call_8c10e728(void *);
extern void call_8c10e8fc(void *);
extern void call_8c110278(Object *, int);
extern int call_8c10e884(Arg0_78 *, float);
void operation_8c10db2c(Object *o)
{
    int t1;
    call_8c10e728((void *)o->f78);
    call_8c10e8fc((void *)o->f78);
    if (((o->f78->f90 & 2)) != 0) {
        if (o->f74 == 0) {
            call_8c110278(o, 9);
        }
        o->f74 += 1;
    } else {
        o->f74 = 0;
    }
    t1 = call_8c10e884(o->f78, 30.0f);
    if (t1 != 0) {
        if (((o->f78->f90 & 8)) != 0) {
            if (o->f72 == 0) {
                call_8c110278(o, 0xc);
            }
            o->f70 += 1;
            if (!(o->f72 >= 0x2bc)) {
                return;
            }
            o->f72 = 0;
            return;
        }
        o->f72 = 0;
    }
}
