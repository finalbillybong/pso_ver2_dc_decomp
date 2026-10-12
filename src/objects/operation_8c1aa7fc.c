typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    short tag;
    short f02;
    float f04;
    char unknown8[0x8];
    short f10;
    short f12;
    int f14;
    int dispatch;
    int f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
};
extern void call_8c1aab30(void *);
void operation_8c1aa7fc(Object *o)
{
    o->tag = o->f02;
    o->f04 = 1.0f;
    o->f12 = 0;
    o->f10 = 0;
    o->f14 = 0;
    o->dispatch = 0;
    o->f1c = 0;
    o->f20 = 20.0f;
    o->f24 = 1.0f;
    o->f28 = 1.0f;
    o->f2c = 0.0f;
    call_8c1aab30(((char *)o + 0x30));
}
