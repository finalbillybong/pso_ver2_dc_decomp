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
struct Arg0_0 {
    char unknown0[0x8];
    int f08;
};
extern void call_8c18e768(int, int);
void operation_8c20b148(Object *o)
{
    call_8c18e768(o->tag->f08 - *(int *)0x8c3fc180, 0x44);
}
