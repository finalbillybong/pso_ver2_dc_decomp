typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xf2];
    short ff2;
    char unknownf4[0x214];
    short f308;
    short f30a;
    char unknown30c[0x54];
    short f360;
};
extern void call_8c1e8e60(Object *, short, int);
extern void operation_021f88(void *, int, short);
void operation_8c1f12ec(Object *o)
{
    int v1;
    call_8c1e8e60(o, o->f30a, 6);
    v1 = (int)(o->f308 == 2);
    if (v1 != 0) {
        o->ff2 = 0;
    }
    operation_021f88((void *)o, 0xc, o->f360);
}
