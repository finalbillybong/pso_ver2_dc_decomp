typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_4 Arg0_4;
struct Object {
    Arg0_0 *tag;
    Arg0_4 *f04;
    int f08;
    int f0c;
};
extern void call_8c18de08(void *);
extern void call_8c011ed8(void *);
Object *operation_8c2456e8(Object *o, int a1)
{
    if (o != 0) {
        call_8c18de08(o->f04);
        call_8c011ed8(o->tag);
        o->f08 = 0;
        o->f0c = 0;
        if ((short)a1 > 0) {
            call_8c011ed8((void *)o);
        }
    }
    return o;
}
