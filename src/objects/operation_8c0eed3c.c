typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_100 Arg0_100;
struct Object {
    char unknown0[0x100];
    Arg0_100 *f100;
    int f104;
    int f108;
};
extern void call_8c0ef1cc(void);
extern int operation_03d080(unsigned short);
void operation_8c0eed3c(Object *o)
{
    int t1;
    int t2;
    if (o->f104 != 1) {
        if (o->f104 == 2) {
            goto L_8c0eed6c;
        }
        if (o->f104 == 3) {
            goto L_8c0eed9e;
        }
    } else {
        call_8c0ef1cc();
        o->f108 |= 1;
        return;
L_8c0eed6c:;
        t1 = operation_03d080((unsigned short)(o->f100));
        if ((unsigned char)t1 == 1) {
            ((void (*)(Object *))call_8c0ef1cc)(o);
            o->f108 |= 1;
            return;
        }
        o->f108 = (unsigned int)o->f108 >> 1 << 1;
        return;
L_8c0eed9e:;
        t2 = operation_03d080((unsigned short)(o->f100));
        if ((unsigned char)t2 != 1) {
            return;
        }
        ((void (*)(Object *))call_8c0ef1cc)(o);
        o->f108 |= 1;
        return;
    }
    o->f108 = (unsigned int)o->f108 >> 1 << 1;
}
