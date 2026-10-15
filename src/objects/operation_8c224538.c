typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1a6604 S_c8c1a6604;
typedef struct S_c8c1a6610 S_c8c1a6610;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x71];
    char f71;
    short f72;
    short f74;
    char unknown76[0x6];
    int f7c;
    int f80;
    char unknown84[0x8];
    Arg1 *f8c;
    char unknown90[0xc];
    float f9c;
};
struct Arg1 {
    int f00;
};
struct S_c8c1a6604 {
    int f00;
};
struct S_c8c1a6610 {
    int f00;
};
extern S_c8c1a6604 *table_first_8c1a6604(void *, int);
extern S_c8c1a6610 *table_second_8c1a6610(void *, int);
extern int call_8c21f5b0(int, int);
extern void call_8c2242c8(Object *);
void operation_8c224538(Object *o, Arg1 *a1)
{
    int v3;
    char *v4;
    S_c8c1a6604 *t1;
    S_c8c1a6610 *t2;
    int t3;
    int t4;
    o->f8c = a1;
    o->f9c = 2.0f;
    if (a1->f00 == 1) {
        o->f72 = 0x14;
        o->f74 = 0x20;
    } else {
        o->f72 = 0x20;
        o->f74 = 0x20;
    }
    v3 = (int)0;
    while (4 > v3) {
        t1 = table_first_8c1a6604((void *)o, v3);
        t2 = table_second_8c1a6610((void *)o, v3);
        t1->f00 |= 2;
        t2->f00 |= 2;
        v3 = (int)(v3 + 1);
    }
    v4 = (char *)*(int *)0x8c5059a0;
    t3 = call_8c21f5b0((int)(v4), 0);
    o->f7c = (int)(t3);
    t4 = call_8c21f5b0((int)(v4), (int)((int)o->f7c + 1));
    o->f80 = (int)(t4);
    o->f71 = 0;
    call_8c2242c8(o);
}
