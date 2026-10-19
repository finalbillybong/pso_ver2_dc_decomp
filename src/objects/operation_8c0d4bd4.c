typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0xd4];
    int f3e0;
};
extern int operation_8c05bbf8(void);
extern void reset_segments_8c05a124(void *);
extern void operation_8c059ea4(void *, int);
void operation_8c0d4bd4(Object *o)
{
    int t1;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        reset_segments_8c05a124((void *)o);
        return;
    }
    if (((o->f3e0 & 1)) != 0) {
        reset_segments_8c05a124((void *)o);
        return;
    }
    if (o->f30a != 0xc) {
        operation_8c059ea4((void *)o, 0xc);
    }
}
