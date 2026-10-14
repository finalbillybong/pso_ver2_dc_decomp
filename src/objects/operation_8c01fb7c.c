typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block80 {
    int words[20];
} Block80;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x7e4];
    Block80 f7e4;
    char unknown834[0x390];
    int fbc4;
};
struct Arg1 {
    Block80 f00;
};
struct S_vv1 {
    int f00;
};
extern void call_8c035028(Object *);
extern void operation_8c07b268(int);
void operation_8c01fb7c(Object *o, Arg1 *a1)
{
    o->f7e4 = a1->f00;
    o->fbc4 = 0xff;
    call_8c035028(o);
    operation_8c07b268((int)o);
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
