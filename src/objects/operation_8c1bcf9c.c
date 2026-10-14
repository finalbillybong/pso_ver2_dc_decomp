typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_6c Arg0_6c;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x38];
    Arg0_6c *f6c;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
extern int operation_8c1bd03c(void);
extern void call_8c0fcd0c(void *, void *, float);
extern void call_8c0db30c(Object *);
extern void update_view_nodes(void *, void *);
void operation_8c1bcf9c(Object *o)
{
    int t1;
    t1 = operation_8c1bd03c();
    if (t1 != (int)(o->f6c)) {
        o->f6c = (Arg0_6c *)t1;
        call_8c0fcd0c((void *)(o->f30->f00), (void *)(o->f6c), 9.0f);
    }
    call_8c0db30c(o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
