typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0x4];
    int f04;
    char unknown8[0x8];
};
extern int call_8c09dfec(int, Frame *);
int operation_8c09dfc0(int a0)
{
    Frame frame;
    int t1;
    int t2;
    t1 = call_8c09dfec(a0, (&frame));
    if (t1 >= 0) {
        t2 = ((int (*)(int))((&frame)->f04))(a0 + 4);
        return t2;
    }
    return 0;
}
