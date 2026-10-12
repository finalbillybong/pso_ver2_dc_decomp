typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daaa8 S_g8c4daaa8;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    unsigned char f01;
};
extern void operation_8c219dc4(int, void *);
void operation_8c158aa0(Object *o)
{
    if (o != 0 && *(int *)0x8c4daaa8 != 0 && o->tag == 1 && o->f01 == 1) {
        operation_8c219dc4((int)*(S_g8c4daaa8 **)0x8c4daaa8, (void *)o);
    }
}
