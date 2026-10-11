typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x88];
    int f88;
    int f8c;
};
void operation_8c1a169c(Object *o)
{
    if (o->f88 == 0) {
        if (o->f8c != 0) {
            goto L_8c1a16cc;
        }
        o->f8c = 1;
    } else {
        if ((unsigned int)o->f88 > (unsigned int)5) {
            o->f88 = 1;
        }
        o->f8c = *(int *)((char *)0x8c31d004 + (o->f88 << 2));
    }
L_8c1a16cc:;
    o->f8c |= 0x20000000;
}
