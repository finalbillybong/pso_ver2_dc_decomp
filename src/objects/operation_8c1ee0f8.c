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
};
extern void call_8c1e8e60(Object *, short, int);
extern int operation_02c350(void *);
extern void operation_021f88(void *, int, short);
void operation_8c1ee0f8(Object *o)
{
    int v1;
    int t1;
    call_8c1e8e60(o, o->f30a, 6);
    v1 = (int)(o->f308 == 2);
    if (v1 != 0) {
        o->ff2 = 0;
    }
    t1 = operation_02c350((void *)o);
    operation_021f88((void *)o, 0xc, *(short *)((char *)0x8c2e74e6 + ((short)t1 << 1)));
}
