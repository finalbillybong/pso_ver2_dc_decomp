typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Object Object;
struct Object {
    int tag;
    int f04;
    int f08;
    Block16 f0c;
};
void operation_8c03bdcc(Object *o)
{
    o->tag = (int)(*(int *)0x8c575570);
    o->f04 = (int)(*(int *)0x8c5755a4);
    o->f08 = (int)(*(int *)0x8c5755a8);
    *(Block16 *)&o->f0c = *(Block16 *)&*(Block16 *)0x8c5755ac;
}
