typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c468994 S_g8c468994;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    Vector3 tag;
};
struct Arg1 {
    Vector3 f00;
};
extern void call_8c0653b8(void *, Object *, Arg1 *);
void operation_8c06536c(Object *o, Arg1 *a1)
{
    if (*(int *)0x8c468994 == 0) {
        *(Vector3 *)&o->tag = *(Vector3 *)&*(Vector3 *)0x8c2fd230;
        *(Vector3 *)&a1->f00 = *(Vector3 *)&*(Vector3 *)0x8c2fd23c;
        return;
    }
    call_8c0653b8((void *)(*(S_g8c468994 **)0x8c468994), o, a1);
}
