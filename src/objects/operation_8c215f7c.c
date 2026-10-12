typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_88 Arg0_88;
struct Object {
    char unknown0[0x7c];
    int f7c;
    char unknown80[0x4];
    int f84;
    Arg0_88 *f88;
};
extern void call_8c18de08(void *);
extern void call_8c0e1bbc(void *);
void operation_8c215f7c(Object *o)
{
    if (o->f88 != 0) {
        call_8c18de08(o->f88);
        o->f88 = (Arg0_88 *)0;
    }
    call_8c0e1bbc(((char *)o + 0x2c));
    o->f7c = 0;
    o->f84 = 0;
}
