typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char f04;
    char unknown5[0x17];
    int f1c;
};
void operation_8c21f2d4(Object *o)
{
    int v1;
    int v2;
    o->tag = 0;
    o->f04 = 0;
    o->f1c = 0;
    v1 = (int)0;
    while (4 > v1) {
        *(short *)((char *)((char *)o + 0x20) + (v1 << 1)) = 0xff;
        v1 = (int)(v1 + 1);
    }
    v2 = (int)0;
    while (0xc > v2) {
        int pm1;
        pm1 = -1;
        *(char *)((char *)((char *)o + 0x28) + (v2 << 2)) = pm1;
        *(char *)((char *)((char *)o + 0x29) + (v2 << 2)) = 0;
        *(char *)((char *)((char *)o + 0x2a) + (v2 << 2)) = 0;
        *(char *)((char *)((char *)o + 0x2b) + (v2 << 2)) = 0;
        v2 = (int)(v2 + 1);
    }
}
