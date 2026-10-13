typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_38c Arg0_38c;
struct Object {
    char unknown0[0x38c];
    Arg0_38c *f38c;
};
extern void operation_8c04c630(int);
void operation_8c013448(Object *o)
{
    operation_8c04c630((int)(o->f38c));
}
