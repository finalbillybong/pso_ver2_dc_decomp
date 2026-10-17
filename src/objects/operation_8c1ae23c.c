typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    char unknown0[0x20];
    short f20;
};
struct Frame {
    char unknown0[0x8];
};
extern int ring_actor_eligible(unsigned short);
extern int call_8c12b944(void);
int operation_8c1ae23c(void)
{
    Frame frame;
    int v1;
    int v2;
    S_vv3 *v3;
    int t1;
    int t2;
    v1 = (int)0;
    v2 = (int)0;
    while (*(int *)0x8c467874 > v2) {
        v3 = (S_vv3 *)*(S_g8c467240 **)((char *)0x8c467240 + (v2 << 2));
        if (v3 != 0) {
            t1 = ring_actor_eligible((unsigned short)(v3->f20));
            if (t1 != 0) {
                *(short *)((char *)((char *)(&frame) + 0x0) + (v1 << 1)) = v3->f20;
                v1 = (int)(v1 + 1);
                if (v1 >= 4) {
                    goto L_8c1ae286;
                }
            }
        }
        v2 = (int)(v2 + 1);
    }
L_8c1ae286:;
    if (v1 == 0) {
        return 0xffff;
    }
    t2 = call_8c12b944();
    return *(unsigned short *)((char *)((char *)(&frame) + 0x0) + ((int)(((float)v1 - 0.01f) * ((float)t2 / 32768.0f)) << 1));
}
