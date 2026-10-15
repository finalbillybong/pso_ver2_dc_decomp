typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x70];
    float f70;
    char unknown74[0x14];
    int f88;
    char unknown8c[0x4];
    int f90;
    char unknown94[0xc];
    int fa0;
};
extern float call_8c12b570(float);
void operation_8c136fa4(Object *o)
{
    float v13;
    float t1;
    if (!(o->f88 >= 0)) {
        o->f88 = 0;
    } else {
        if (o->f88 >= 0x40) {
            o->f88 = 0x3f;
        }
    }
    if (!(o->f90 >= 0)) {
        o->f90 = 0;
    } else {
        if (o->f90 > 0xff) {
            o->f90 = 0xff;
        }
    }
    t1 = call_8c12b570(o->f70);
    o->fa0 = (int)t1;
    if (*(int *)0x8c4703c0 != 0) {
        if (*(int *)0x8c4703c0 == 1) {
            goto L_8c137004;
        }
        if (*(int *)0x8c4703c0 == 2) {
            goto L_8c13700a;
        }
        if (*(int *)0x8c4703c0 == 3) {
            goto L_8c137010;
        }
    }
    v13 = (float)1.0f;
    goto L_8c137014;
L_8c137004:;
    v13 = (float)1.5f;
    goto L_8c137014;
L_8c13700a:;
    v13 = (float)2.0f;
    goto L_8c137014;
L_8c137010:;
    v13 = (float)4.0f;
L_8c137014:;
    o->fa0 = (int)((float)o->fa0 * v13);
}
