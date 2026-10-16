typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Frame {
    short f00;
    char unknown2[0x2];
    int f04;
};
struct Object {
    short tag;
};
struct Arg1 {
    int f00;
};
extern void target_info_8c1a8f10(void *, void *);
int operation_8c1a8ecc(Object *o, Arg1 *a1)
{
    Frame frame;
    short v1;
    target_info_8c1a8f10((void *)(&frame), (void *)(&(&frame)->f04));
    v1 = (short)(&frame)->f00;
    if ((short)v1 == o->tag && (&frame)->f04 == a1->f00) {
        return 0;
    }
    o->tag = v1;
    a1->f00 = (int)((&frame)->f04);
    return 1;
}
