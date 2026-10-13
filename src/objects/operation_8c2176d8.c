typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_48 Arg0_48;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
    Arg0_28 *f28;
    char unknown2c[0x1c];
    Arg0_48 *f48;
};
extern int operation_8c1cdc80(void *);
extern int call_8c20a5d0(void *);
extern void call_8c119764(void *, int, int);
void operation_8c2176d8(Object *o)
{
    int t1;
    int t2;
    if (o->f28 != 0) {
        t1 = operation_8c1cdc80((void *)(o->f24));
        if ((int)(o->f48) != (int)(t1)) {
            o->f48 = (Arg0_48 *)t1;
            t2 = call_8c20a5d0((void *)(o->f48));
            if (t2 != 0) {
                call_8c119764((void *)(o->f28), (int)(t2 + 0x20), 0x82);
            }
        }
    }
}
