typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_68 Arg0_68;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x62];
    Arg0_68 *f68;
    int f6c;
};
extern int operation_8c21f354(void *);
extern void call_8c1a64e4(void *, int);
void operation_8c1a6480(Object *o)
{
    int t1;
    if (o->f6c == 0) {
        if (o->f68 != 0) {
            t1 = operation_8c21f354((void *)(o->f68));
            if (t1 != 0) {
                goto L_8c1a64ac;
            }
        }
        o->f04 |= 0x10;
        return;
    }
L_8c1a64ac:;
    o->f04 &= -0x11;
    call_8c1a64e4((void *)(((char *)o + 0x2c)), (int)((int)(o->f68) + 0x1c));
}
