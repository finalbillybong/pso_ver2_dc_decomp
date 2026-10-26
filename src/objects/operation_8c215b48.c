typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Object Object;
struct Object {
    char unknown0[0x38];
    Block8 f38;
    char unknown40[0x18];
    int f58;
    char unknown5c[0x10];
    Block8 f6c;
};
void operation_8c215b48(Object *o, int a1)
{
    *(Block8 *)&o->f38 = *(Block8 *)&o->f6c;
    o->f58 = a1;
}
