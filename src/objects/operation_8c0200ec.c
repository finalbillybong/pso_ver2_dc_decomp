typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv22 S_vv22;
struct Object {
    char unknown0[0x308];
    short f308;
};
struct S_vv22 {
    int f00;
};
extern void operation_8c02c100(void *);
void operation_8c0200ec(Object *o)
{
    int v1;
    v1 = (int)(o->f308 == 6);
    if (v1 != 0) {
        operation_8c02c100((void *)o);
    }
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
