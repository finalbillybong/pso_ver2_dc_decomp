typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1a6604 S_c8c1a6604;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
struct Object {
    char unknown0[0x71];
    char f71;
    char unknown72[0xa];
    Arg0_7c *f7c;
};
struct Frame {
    float f00;
    float f04;
};
struct S_c8c1a6604 {
    char unknown0[0x8];
    float f08;
    float f0c;
};
extern S_c8c1a6604 *table_first_8c1a6604(void *, int);
extern void call_8c2201d0(int, Frame *, float, float);
void operation_8c2244bc(Object *o, int a1)
{
    Frame frame;
    S_c8c1a6604 *t1;
    if (o->f71 != 0) {
        if (o->f71 != 1 && (o->f71 == 2 || o->f71 != 3)) {
            return;
        }
        t1 = table_first_8c1a6604((void *)o, (int)o->f7c);
        (&frame)->f00 = t1->f08 - 3.0f;
        (&frame)->f04 = t1->f0c - 3.0f;
        call_8c2201d0(a1, (&frame), 38.0f, 0.1f);
    }
}
