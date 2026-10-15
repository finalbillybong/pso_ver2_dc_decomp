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
    char unknown0[0x3c4];
    float f3c4;
    Block16 f3c8;
};
extern char g_8c2866e0[];
void operation_8c1753d8(Object *o)
{
    o->f3c4 = 1.0f;
    *(Block16 *)&o->f3c8 = *(Block16 *)&*(Block16 *)(g_8c2866e0 + 0x10);
}
