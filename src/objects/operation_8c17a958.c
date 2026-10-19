typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2b4];
    int f2b4;
};
extern void operation_8c172c30(void *, int, int);
extern void call_8c172c50(void *, float, float);
void operation_8c17a958(Object *o)
{
    operation_8c172c30((void *)(&o->f2b4), 0x38e, 0x2aaa);
    if (o->f2b4 == 0x2aaa) {
        call_8c172c50((void *)(((char *)o + 0x2b0)), 0.5f, 6.0f);
    }
}
