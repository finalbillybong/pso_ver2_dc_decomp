typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x198];
    short f198;
    char unknown19a[0x170];
    short f30a;
    char unknown30c[0x24];
    short f330;
    char unknown332[0x28];
    short f35a;
    char unknown35c[0x80];
    int f3dc;
};
extern int call_8c18e768(int, int);
extern void reset_segments_8c05a124(void *);
extern void operation_8c059ea4(void *, int);
void operation_8c0d1bd4(Object *o)
{
    int t1;
    if (((o->f3dc & 4)) == 0) {
        t1 = call_8c18e768((int)(o->f198), 5);
        if (!(t1 > (o->f35a - o->f330))) {
            goto L_8c0d1c0e;
        }
    }
    reset_segments_8c05a124((void *)o);
    return;
L_8c0d1c0e:;
    if (o->f30a != 0xa) {
        operation_8c059ea4((void *)o, 0xa);
    }
}
