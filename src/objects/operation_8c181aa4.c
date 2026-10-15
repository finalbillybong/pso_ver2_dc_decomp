typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
extern void operation_8c1acbc0(void *);
extern void operation_1c7dd4(void *);
int operation_8c181aa4(Object *o)
{
    int v2;
    int v1;
    operation_8c1acbc0((void *)((int)o + 0x3c0));
    operation_8c1acbc0((void *)((int)o + 0x3e4));
    v2 = (int)0;
    v1 = (int)-1;
    while (0x1e > v2) {
        *(char *)((char *)((char *)o + 0x4) + (v2 * 0x1c)) = 0;
        *(char *)((char *)((char *)o + 0x5) + (v2 * 0x1c)) = v1;
        *(int *)((char *)((char *)o + 0x8) + (v2 * 0x1c)) = 0;
        *(char *)((char *)((char *)o + 0x7) + (v2 * 0x1c)) = 0;
        *(char *)((char *)((char *)o + 0x6) + (v2 * 0x1c)) = 0;
        operation_1c7dd4((void *)((int)o + v2 * 0x1c + 0xc));
        v2 = (int)(v2 + 1);
    }
    return (int)(o);
}
