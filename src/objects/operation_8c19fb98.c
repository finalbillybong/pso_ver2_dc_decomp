typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x1a];
    short size;
    char unknown20[0x8];
    int f28;
};
extern void call_8c1cd38c(void);
extern void operation_8c1cd3d4(void *);
extern void call_8c0dc610(Object *, float);
void operation_8c19fb98(Object *o)
{
    o->tag = *(int *)0x8c31ce20;
    o->size = 0x98;
    o->f28 = 0;
    call_8c1cd38c();
    operation_8c1cd3d4((void *)o);
    call_8c0dc610(o, -11000.0f);
}
