typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x184];
    int f184;
};
extern int operation_8c1a71d8(int);
extern int operation_8c1a71b4(int);
extern void compose_layout_8c03bb80(void *, int, void *, void *, void *);
int operation_8c029a48(Object *o, int a1)
{
    char *v1;
    int t1;
    int t2;
    v1 = (char *)o->f184;
    t1 = operation_8c1a71d8((int)o);
    t2 = operation_8c1a71b4((int)o);
    compose_layout_8c03bb80((void *)a1, (int)o, (void *)v1, (void *)t1, (void *)t2);
    return 1;
}
