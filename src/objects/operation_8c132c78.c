typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x88];
    int f88;
    char unknown8c[0x4];
    int f90;
    char unknown94[0x6c];
    int f100;
    int f104;
};
extern int operation_8c01c25c(void);
int operation_8c132c78(Object *o)
{
    int t1;
    o->f100 = (int)(o->f88);
    if (o->f100 > 0x100) {
        o->f104 = 0;
    } else {
        if (!(o->f100 >= 0)) {
            o->f104 = 1;
        } else {
            if (!(o->f90 >= 0)) {
                t1 = operation_8c01c25c();
                if (t1 == 0x10) {
                    o->f104 = 3;
                    goto L_8c132cc0;
                }
            }
            o->f104 = 2;
        }
    }
L_8c132cc0:;
    return (int)(o->f100);
}
