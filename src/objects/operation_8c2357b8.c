typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct SBlock38 {
    short halves[19];
} SBlock38;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    char f00;
    char unknown1[0x27];
};
void operation_8c2357b8(Object *o)
{
    Frame frame;
    int v1;
    *(SBlock38 *)&(&frame)->f00 = *(SBlock38 *)&*(char *)0x8c33924c;
    v1 = (int)0;
    while (0x13 > v1) {
        *(short *)((char *)((char *)o + 0x0) + (v1 << 1)) = *(short *)((char *)&(&frame)->f00 + (v1 << 1));
        v1 = (int)(v1 + 1);
    }
}
