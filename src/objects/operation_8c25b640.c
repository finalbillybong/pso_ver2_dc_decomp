typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    int f28;
    char unknown2c[0x8];
    Arg0_34 *f34;
};
extern int operation_8c051d18(void *);
extern void call_8c18de08(int);
void operation_8c25b640(Object *o)
{
    int t1;
    if (o->f20 != 1 && o->f20 != 3) {
        return;
    }
    t1 = operation_8c051d18((void *)(o->f34));
    o->f28 = 0;
    while (*(char *)((char *)((char *)t1 + 0x0) + (o->f28)) != 0) {
        o->f28 += 1;
    }
    call_8c18de08(t1);
}
