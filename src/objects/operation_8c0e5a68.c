typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb4];
    int fec;
    short ff0;
    char unknownf2[0x218];
    short f30a;
    short f30c;
    char unknown30e[0x9e];
    int f3ac;
};
extern void operation_8c05426c(void *, int, int);
extern void call_8c05fbf8(int, void *, int, int);
extern void operation_8c05428c(void *, int, int);
extern void call_8c01c5f0(Object *);
void operation_8c0e5a68(Object *o)
{
    if (o->f30c != 0) {
        if (o->f30c == 1) {
            goto L_8c0e5ac2;
        }
        if (o->f30c == 2) {
            goto L_8c0e5aec;
        }
    }
    if (o->f3ac != 1) {
        o->f30c = 2;
    } else {
        o->f30c = 1;
        o->ff0 = 0xb;
        operation_8c05426c((void *)o, 0, 0x14000000);
        o->f34 |= 0x4000000;
        call_8c05fbf8(0x30032, (void *)(((char *)o + 0x3c)), 0, 0);
        goto L_8c0e5af2;
L_8c0e5ac2:;
        if (o->fec != 0x20) {
            o->f30c = 2;
            o->f3ac = 0;
            o->ff0 = 0;
            operation_8c05428c((void *)o, 0, 0x14000000);
            o->f34 &= -0x4000001;
            goto L_8c0e5af2;
L_8c0e5aec:;
            o->f30a = 1;
        }
    }
L_8c0e5af2:;
    call_8c01c5f0(o);
}
