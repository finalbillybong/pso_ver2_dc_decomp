typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x8e];
    float f180;
    char unknown184[0x186];
    short f30a;
};
extern void call_8c01c5f0(Object *);
extern int call_8c18e954(int, int);
extern void operation_8c129a08(void *, int, int);
void operation_8c1296f4(Object *o)
{
    int t1;
    call_8c01c5f0(o);
    t1 = call_8c18e954((int)((unsigned int)o->f180), 0xf);
    if (t1 == 0) {
        operation_8c129a08((void *)o, (int)(((char *)o + 0x360)), 0x7d);
    }
    if (!(60.0f > o->f180)) {
        o->f30a = 2;
        o->ff0 = o->f30a;
        o->f180 = -1.0f;
    }
}
