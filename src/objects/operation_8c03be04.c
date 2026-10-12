typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_4 Arg0_4;
typedef struct Arg0_8 Arg0_8;
struct Object {
    Arg0_0 *tag;
    Arg0_4 *f04;
    Arg0_8 *f08;
};
extern void call_8c38c0e0(void *);
extern void call_8c38c0e6(void *, void *);
extern void call_8c38c0f0(void *);
void operation_8c03be04(Object *o)
{
    call_8c38c0e0(o->tag);
    call_8c38c0e6(o->f04, o->f08);
    call_8c38c0f0(((char *)o + 0xc));
}
