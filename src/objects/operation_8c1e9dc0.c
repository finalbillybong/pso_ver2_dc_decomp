typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x570];
    int f570;
};
extern int operation_02c350(void *);
short operation_8c1e9dc0(Object *o)
{
    int v1;
    int t1;
    int t2;
    v1 = (int)(((o->f570 & 8)) != 0);
    if (v1 != 0) {
        t1 = operation_02c350((void *)o);
        return *(short *)((char *)0x8c2e72fe + ((short)t1 << 1));
    }
    t2 = operation_02c350((void *)o);
    return *(short *)((char *)0x8c2e72e0 + ((short)t2 << 1));
}
