typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x3a8];
    int f3a8;
};
struct Arg1 {
    int f00;
};
struct Arg2 {
    int f00;
};
extern float object_random_fraction(void *);
void operation_8c1b46d8(Object *o, Arg1 *a1, Arg2 *a2)
{
    int v1;
    float t1;
    float t2;
    t2 = object_random_fraction((void *)o);
    v1 = (int)((int)o->f3a8 + 1 + (int)(t2 * 2.97f));
    if (v1 >= 4) {
        v1 -= 4;
    }
    a1->f00 = (int)(v1);
    t1 = object_random_fraction((void *)o);
    if (!(t1 > 0.1f)) {
        a2->f00 = 0;
        return;
    }
    if (!(t1 > 0.900000036f)) {
        a2->f00 = 1;
        return;
    }
    a2->f00 = 2;
}
