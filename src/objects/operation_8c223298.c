typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x22e4];
    int f22e4;
    int f22e8;
};
extern int call_8c3727a0(int);
int operation_8c223298(Object *o)
{
    int v1;
    int v4;
    int v3;
    int t1;
    int off;
    o->f22e4 = 0;
    off = 0x22e4;
    v1 = (int)0;
    while (8 > v1) {
        t1 = call_8c3727a0(v1);
        if (t1 != 0) {
            *(int *)((char *)o + off) |= 1 << v1;
        }
        v1 = (int)(v1 + 1);
    }
    v3 = (int)o->f22e4;
    v4 = (int)o->f22e8;
    if (v4 != v3) {
        o->f22e8 = (int)(v3);
        return 1;
    }
    return 0;
}
