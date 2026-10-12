typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x21];
    char f21;
    char unknown22[0x2];
    Arg0_24 *f24;
    Arg0_28 *f28;
};
extern int operation_8c1571f4(void *);
extern int operation_8c1d03b4(void *);
extern void call_8c1a9838(Object *);
extern void call_8c191504(int);
void operation_8c1a98e4(Object *o)
{
    int t1;
    int t2;
    t1 = operation_8c1571f4(o->f24);
    t2 = operation_8c1d03b4(o->f28);
    if (t1 == 4 && o->f21 != t2) {
        o->f21 = t2;
        call_8c1a9838(o);
        if (o->f21 == 0) {
            call_8c191504(1);
        }
    }
}
