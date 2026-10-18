typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    char unknown0[0x20];
    unsigned short f20;
};
extern int g_8c44be04;
extern int g_8c467874;
extern float squared_distance_xz(void *, void *);
int operation_8c0eea7c(int a0, float f0)
{
    int v3;
    S_vv4 *v4;
    int v1;
    int v2;
    float t1;
    v1 = (int)0x1000;
    v3 = (int)0;
    v2 = (int)0x37c;
    while ((unsigned short)v3 < g_8c467874) {
        v4 = (S_vv4 *)*(S_g8c467240 **)((char *)0x8c467240 + ((unsigned short)v3 << 2));
        if (v4 != 0) {
            if ((unsigned short)v4->f20 < (unsigned int)(unsigned short)v1 && *(int *)((char *)((char *)v4 + 0x0) + (v2)) == (int)g_8c44be04) {
                t1 = squared_distance_xz((void *)(a0 + 0x3c), (void *)((int)v4 + 0x3c));
                if (f0 > t1) {
                    return 1;
                }
            }
        }
        v3 = (int)(v3 + 1);
    }
    return 0;
}
