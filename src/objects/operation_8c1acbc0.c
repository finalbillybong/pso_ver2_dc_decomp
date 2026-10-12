typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
};
extern void call_8c18e044(int, void *, int, int, int);
Object *operation_8c1acbc0(Object *o)
{
    call_8c18e044((int)((char *)o + 0x4), (void *)0x8c1034cc, 0, 4, 4);
    call_8c18e044((int)((char *)o + 0x14), (void *)0x8c1034cc, 0, 4, 4);
    o->tag = 0;
    return o;
}
