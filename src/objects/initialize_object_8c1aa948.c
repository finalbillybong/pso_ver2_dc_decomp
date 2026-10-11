typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    short tag;
    char unknown2[0x2];
    float f04;
    float f08;
    int f0c;
    short f10;
    short f12;
    int f14;
    int dispatch;
    int f1c;
};
void initialize_object_8c1aa948(Object *o, int a1, int a2, int a3)
{
    o->f10 = a2;
    o->f14 = a3;
    o->f12 = 0;
    o->dispatch = 0;
    o->f0c &= -0x20;
    o->f1c = 6;
    o->f04 = o->f08;
    if (o->tag != 0) {
        o->f04 = o->f04 * 1.25f;
    }
}
