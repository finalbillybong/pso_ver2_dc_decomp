typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_108 Arg0_108;
struct Object {
    char unknown0[0x100];
    int f100;
    int f104;
    Arg0_108 *f108;
};
extern int call_8c0eea7c(float);
extern int operation_03d080(unsigned short);
int operation_8c0f1500(Object *o)
{
    int t1;
    int t2;
    if (o->f100 != 1) {
        if (o->f100 == 2) {
            goto L_8c0f1534;
        }
    } else {
        t1 = call_8c0eea7c(4900.0f);
        if (t1 != 0) {
            o->f104 = 1;
        } else {
            o->f104 = 0;
            goto L_8c0f1552;
L_8c0f1534:;
            t2 = operation_03d080((unsigned short)(o->f108));
            if ((unsigned char)t2 == 1) {
                o->f104 = 1;
            } else {
                o->f104 = 0;
            }
        }
    }
L_8c0f1552:;
    return (int)(o->f104);
}
