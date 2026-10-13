typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_f0 Arg0_f0;
struct Object {
    char unknown0[0xf0];
    Arg0_f0 *ff0;
    int ff4;
};
extern void process_entries_8c0731d8(void *);
void operation_8c07c1a8(Object *o)
{
    o->ff4 = 1;
    process_entries_8c0731d8((void *)(o->ff0));
}
