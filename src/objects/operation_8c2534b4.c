typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block6788 {
    int words[1697];
} Block6788;
typedef struct Object Object;
struct Object {
    Block6788 tag;
};
void operation_8c2534b4(Object *o)
{
    *(Block6788 *)&*(Block6788 *)0x8c511868 = *(Block6788 *)&o->tag;
    *(int *)0x8c511160 |= 2;
}
