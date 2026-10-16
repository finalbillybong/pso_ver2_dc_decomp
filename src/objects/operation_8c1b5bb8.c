typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
    char unknown3a4[0xc];
    int f3b0;
    char unknown3b4[0x30];
    int f3e4;
    float f3e8;
    char unknown3ec[0x4];
    int f3f0;
};
void operation_8c1b5bb8(Object *o)
{
    int v1;
    v1 = (int)*(int *)((char *)0x8c326eec + (o->f3b0 << 2));
    if (v1 != -1) {
        o->f3e4 = (int)(v1);
        o->f3e8 = 0.0f;
        o->f3f0 = (int)(*(int *)((char *)0x8c326b6c + (v1 << 5)));
    }
    o->f3a0 = 0x3c;
}
