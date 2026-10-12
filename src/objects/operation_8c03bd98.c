typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    int f04;
};
extern void operation_8c100600(int);
void operation_8c03bd98(Object *o)
{
    o->tag = (unsigned int)o->tag >> 1 << 1;
    o->f04 = -1;
    operation_8c100600(0);
}
