typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x432];
    short f454;
};
struct S_vv2 {
    int f00;
};
extern void operation_8c02cbb0(void *, int);
void operation_8c02013c(Object *o, Arg1 *a1)
{
    int v1;
    o->f454 = o->f20;
    operation_8c02cbb0((void *)o, 0x1d);
    v1 = (int)0;
    while (0x13 > v1) {
        int pm1;
        pm1 = 0x408;
        *(char *)((char *)((char *)o + 0x404) + ((short)v1)) = *(char *)((char *)((char *)a1 + pm1) + (v1)) + *(char *)((char *)((char *)a1 + 0x6) + (v1 * 0x1c));
        v1 = (int)(v1 + 1);
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
