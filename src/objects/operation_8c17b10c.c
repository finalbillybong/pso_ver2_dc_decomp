typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
struct Object {
    char unknown0[0x138];
    unsigned char f138;
};
extern void call_8c1c5944(void *, Object *, int, int);
void operation_8c17b10c(Object *o)
{
    if (o->f138 == 1) {
        call_8c1c5944((void *)(*(S_g8c44be9c **)0x8c44be9c), o, 2, 0x101);
    }
}
