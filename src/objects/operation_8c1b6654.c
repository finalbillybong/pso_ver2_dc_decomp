typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
};
extern int g_8c467874;
extern float squared_distance_xz(void *, void *);
extern void operation_8c1ae0ac(void *, int);
extern int call_8c1ae1a4(int);
void operation_8c1b6654(int a0)
{
    Frame frame;
    int v1;
    int v2;
    float t1;
    int t2;
    int off;
    (&frame)->f00 = -9860.0f;
    (&frame)->f08 = -240.0f;
    v1 = (int)0;
    off = 0x324;
    while (g_8c467874 > v1) {
        v2 = (int)*(int *)((char *)0x8c467240 + (v1 << 2));
        if (v2 != 0) {
            t1 = squared_distance_xz((void *)(&frame), (void *)(v2 + off));
            if (!(t1 > 900.0f)) {
                operation_8c1ae0ac((void *)a0, 2);
                return;
            }
        }
        v1 = (int)(v1 + 1);
    }
    t2 = call_8c1ae1a4(a0);
    if (t2 != 0) {
        operation_8c1ae0ac((void *)a0, 2);
    }
}
