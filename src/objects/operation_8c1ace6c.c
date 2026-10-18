typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    Vector3 f00;
};
void operation_8c1ace6c(Object *o)
{
    Frame frame;
    int v1;
    char *p9;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&*(Vector3 *)0x8c32500c;
    p9 = (char *)o + 0x24;
    v1 = (int)0;
    while (3 > v1) {
        *(char *)((char *)(p9 + 0x14) + (*(int *)((char *)&(&frame)->f00 + (v1 << 2)) << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
}
