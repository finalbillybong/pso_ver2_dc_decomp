typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    int fe4;
    char unknowne8[0x20];
    int f108;
};
extern void operation_8c05426c(void *, int, int);
void operation_8c0f2f54(Object *o)
{
    int v1;
    o->fe4 = 1;
    o->f108 = 1;
    v1 = (int)0;
    while (4 > v1) {
        operation_8c05426c((void *)o, v1, 0x10);
        v1 = (int)(v1 + 1);
    }
}
