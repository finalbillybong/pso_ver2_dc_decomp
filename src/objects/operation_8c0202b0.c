typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x32e];
    int f350;
    char unknown354[0x264];
    short f5b8;
};
struct S_vv1 {
    int f00;
};
extern void operation_8c03be3c(void *);
void operation_8c0202b0(Object *o)
{
    o->f5b8 = o->f20;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    o->f350 |= 0x4000000;
    operation_8c03be3c((void *)(&o->f5b8));
}
