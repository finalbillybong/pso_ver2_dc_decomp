typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
struct Frame {
    char unknown0[0xc0];
};
struct S_vv4 {
    char f00;
};
struct S_vv3 {
    unsigned char f00;
};
extern void call_8c184748(Frame *);
void operation_8c1847c0(int a0)
{
    int v2;
    int pm3;
    int v1;
    Frame frame;
    int pm2;
    S_vv4 *v4;
    S_vv3 *v3;
    call_8c184748((Frame *)((&frame)));
    v1 = (int)0;
    for (; v1 < 0x20; v1 = (v1 + 1)) {
        int pm1;
        S_vv3 *v3;
        v3 = (S_vv3 *)(v1 * 6 + (int)(&frame));
        pm3 = 0x1f;
        pm1 = 0;
        v2 = (int)pm1;
        pm2 = pm3 - v1;
        v4 = (S_vv4 *)(a0 + 6 * (pm2));
        for (; 6 > v2; v3 = (S_vv3 *)((char *)v3 + 1)) {
            v2 += 1;
            v4->f00 = v3->f00;
            v4 = (S_vv4 *)((char *)v4 + 1);
        }
    }
}
