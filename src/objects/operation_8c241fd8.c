typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x68480 S_x68480;
struct S_x68480 {
    float f00;
};
void operation_8c241fd8(Object *o)
{
    int v1;
    int ff;
    v1 = (int)0;
    ff = 0xffff;
    while (0x10 > v1) {
        *(unsigned short *)((char *)((char *)o + 0x100) + (v1 << 3)) = ff;
        ((S_x68480 *)((int)o + 0x104 + (v1 << 3)))->f00 = 0.0f;
        v1 = (int)(v1 + 1);
    }
}
