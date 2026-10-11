typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
struct Object {
    Arg0_0 *tag;
    int f04;
    int f08;
    int f0c;
};
void process_entries_8c0731d8(Object *o)
{
    int v1;
    v1 = 0;
    while (o->f0c > v1) {
        *(int *)((char *)((char *)o->tag + 0x0) + (v1 << 2)) = o->f04;
        v1 = v1 + 1;
    }
    o->f08 = 0;
}
