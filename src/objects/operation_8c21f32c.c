typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
struct Object {
    Arg0_0 *tag;
};
extern void get_field_8c21f338(int);
void operation_8c21f32c(Object *o)
{
    get_field_8c21f338((int)(o->tag));
}
