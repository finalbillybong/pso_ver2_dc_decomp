typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block72 {
    int words[18];
} Block72;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x4c0];
    Block72 f4c0;
};
struct Arg1 {
    Block72 f00;
};
struct S_vv1 {
    int f00;
};
extern void call_8c026144(Object *, int, int, int, int, int);
void operation_8c020dbc(Object *o, Arg1 *a1)
{
    o->f4c0 = a1->f00;
    call_8c026144(o, 0, 0, 0, 1, 0);
    call_8c026144(o, 0, 1, 0, 1, 0);
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
}
