typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x308];
    short f308;
    char unknown30a[0x2e];
    int f338;
    char unknown33c[0x30];
    int f36c;
};
struct S_vv6 {
    int f00;
};
void operation_8c01feec(Object *o, int a1)
{
    int v1;
    v1 = (int)(o->f308 == 1);
    if (v1 != 0) {
        o->f36c = a1 & 3;
        o->f338 = (int)(o->f36c * 0x3c + 0x8c41cba0) + 0x20;
    } else {
        o->f338 = 0;
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
