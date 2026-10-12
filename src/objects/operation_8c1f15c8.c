typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    float tag;
    char unknown4[0x14];
    int dispatch;
    float f1c;
};
extern float distance_xz(void *, void *);
int operation_8c1f15c8(Object *o, int a1)
{
    int v2;
    float t1;
    t1 = distance_xz((void *)(*(int *)0x8c46ee80 + 0x90), (void *)a1);
    if ((o->f1c * o->f1c) > t1) {
        o->dispatch = 0;
    } else {
        o->dispatch = 1;
    }
    v2 = (int)(o->tag > -1.0f);
    return v2;
}
