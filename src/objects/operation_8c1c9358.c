typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    unsigned char f01;
};
extern void call_8c074538(int, int);
void operation_8c1c9358(Object *o)
{
    call_8c074538((int)(o->tag), (int)(o->f01));
}
