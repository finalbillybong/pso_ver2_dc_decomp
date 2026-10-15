typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x78];
    Vector3 fac;
};
struct Arg0_30 {
    int f00;
};
extern void call_8c0e196c(void *, void *);
extern void operation_8c1d78a8(void *);
extern void call_8c0e2278(int, void *, int);
extern void initialize_fields_8c0e24e8(void *);
void operation_8c1d7840(Object *o)
{
    char *v2;
    char *v1;
    call_8c0e196c((void *)(((char *)o + 0x2c)), (void *)((void *)0x8c32a01c));
    *(Vector3 *)&o->fac = *(Vector3 *)&*(Vector3 *)0x8c32a210;
    v2 = (char *)o->f30->f00;
    v1 = (char *)v2;
    operation_8c1d78a8((void *)o);
    call_8c0e2278((int)(v1), (void *)((void *)0x8c4dbe40), 0x20);
    initialize_fields_8c0e24e8((void *)v1);
}
