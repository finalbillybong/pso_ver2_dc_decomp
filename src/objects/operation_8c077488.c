typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    int f24;
    int f28;
};
struct Arg0_20 {
    float f00;
    float f04;
    float f08;
    int f0c;
    float f10;
    float f14;
    float f18;
    int f1c;
};
struct Arg2 {
    float f00;
    float f04;
    float f08;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
extern void call_8c12b77c(void *, Arg0_20 *, int);
void operation_8c077488(Object *o, Arg1 *a1, Arg2 *a2)
{
    if (o->f20 != 0 && a1 != 0 && a2 != 0) {
        if (o->f24 == 0x20) {
            o->f24 -= 2;
        }
        if (o->f24 != 0) {
            call_8c12b77c((void *)(((char *)o->f20 + 0x20)), (Arg0_20 *)(o->f20), (int)(o->f24 << 4));
        }
        o->f20->f00 = a2->f00;
        o->f20->f04 = a2->f04;
        o->f20->f08 = a2->f08;
        o->f20->f0c = (int)(o->f28);
        o->f20->f10 = a1->f00;
        o->f20->f14 = a1->f04;
        o->f20->f18 = a1->f08;
        o->f20->f1c = o->f28 & 0x4fffffff;
        o->f24 += 2;
    }
}
