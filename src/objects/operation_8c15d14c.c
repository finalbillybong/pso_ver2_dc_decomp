typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0xd8];
    int f11c;
    int f120;
};
extern void call_8c15d1bc(Object *);
void operation_8c15d14c(Object *o)
{
    o->f120 = (int)((float)o->f120 + 1310.0f);
    call_8c15d1bc(o);
    if (o->f11c > 0) {
        o->f11c += -1;
        return;
    }
    o->f11c = 0;
    o->f40 += 1.0f;
}
