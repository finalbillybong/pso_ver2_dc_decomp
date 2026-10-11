typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block60 {
    int words[15];
} Block60;
typedef struct Object Object;
struct Object {
    Block60 tag;
};
void operation_8c0fbf60(Object *o)
{
    o->tag = *(Block60 *)0x8c470648;
}
