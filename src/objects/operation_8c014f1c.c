typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
struct Object {
    Arg0_0 *tag;
};
extern void call_8c399832(void *, int);
void operation_8c014f1c(Object *o)
{
    call_8c399832((void *)(o->tag), 1);
}
