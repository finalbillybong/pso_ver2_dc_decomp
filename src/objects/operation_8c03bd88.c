typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
};
extern void operation_8c100600(int);
void operation_8c03bd88(Object *o)
{
    o->tag |= 1;
    operation_8c100600(1);
}
