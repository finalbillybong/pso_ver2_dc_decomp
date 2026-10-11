typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block40 {
    int words[10];
} Block40;
typedef struct Object Object;
typedef struct S_x57936 S_x57936;
struct S_x57936 {
    Block40 f00;
};
struct Object {
    Block40 tag;
};
void operation_8c1117c8(Object *o, int a1)
{
    ((S_x57936 *)(a1 * 0x28 + 0x8c30be88))->f00 = o->tag;
}
