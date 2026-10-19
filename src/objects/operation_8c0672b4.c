typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg1_8 Arg1_8;
struct Arg1 {
    char unknown0[0x4];
    short f04;
    short f06;
    Arg1_8 *f08;
};
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x38c];
    int f698;
};
extern void call_8c05be98(Object *, void *);
extern void operation_8c059ea4(void *, int);
void operation_8c0672b4(Object *o, Arg1 *a1)
{
    short k;
    call_8c05be98(o, (void *)(a1->f08));
    o->f698 = a1->f06;
    k = a1->f04;
    if (o->f30a != k) {
        operation_8c059ea4((void *)o, k);
    }
}
