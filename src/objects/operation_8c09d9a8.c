typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    short f00;
};
struct Frame {
    char unknown0[0x10];
};
extern int call_8c09de44(S_vv2 *, Frame *);
void operation_8c09d9a8(int a0, int a1, int a2)
{
    Frame frame;
    S_vv2 *v2;
    int v3;
    int v1;
    int t1;
    v2 = (S_vv2 *)a1;
    v3 = (int)0;
    v1 = (int)-1;
    while (a2 > v3) {
        if (v2->f00 != (short)v1) {
            t1 = call_8c09de44(v2, (Frame *)((&frame)));
            if (t1 >= 0) {
                v2->f00 = t1;
            } else {
                v2->f00 = v1;
            }
        }
        v3 = (int)(v3 + 1);
        v2 = (S_vv2 *)((char *)v2 + 68);
    }
}
