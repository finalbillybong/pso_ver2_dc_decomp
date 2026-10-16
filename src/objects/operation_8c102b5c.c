typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d53a0 S_g8c4d53a0;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_24 S_vv4_24;
typedef struct S_vv4_24_4 S_vv4_24_4;
struct S_g8c4d53a0 {
    int f00;
    char unknown4[0x4];
    int f08;
};
struct S_vv4 {
    char unknown0[0x2];
    short f02;
    float f04;
    float f08;
    float f0c;
    char unknown10[0xc];
    float f1c;
    float f20;
    S_vv4_24 *f24;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct S_vv4_24 {
    char unknown0[0x4];
    S_vv4_24_4 *f04;
};
struct S_vv4_24_4 {
    char unknown0[0x8];
    float f08;
    float f0c;
    float f10;
};
extern float distance_xz(void *, void *);
void operation_8c102b5c(int a0, int a1, int a2)
{
    Frame frame;
    int v2;
    S_vv4 *v4;
    int v3;
    int v1;
    float t1;
    v1 = (int)-2;
    v2 = (int)(*(S_g8c4d53a0 **)0x8c4d53a0)->f00;
    v3 = (int)0;
    v4 = (S_vv4 *)v2;
    while ((*(S_g8c4d53a0 **)0x8c4d53a0)->f08 > v3) {
        if (((v4->f02 & 2)) == 0 && ((v4->f02 & 1)) != 0) {
            (&frame)->f00 = v4->f04 + v4->f24->f04->f08;
            (&frame)->f04 = v4->f08 + v4->f24->f04->f0c;
            (&frame)->f08 = v4->f0c + v4->f24->f04->f10;
            t1 = distance_xz((void *)(&frame), (void *)a2);
            if ((v4->f20 * v4->f20) > t1) {
                v4->f02 &= v1;
                v4->f1c = -1.0f;
            }
        }
        v3 = (int)(v3 + 1);
        v4 = (S_vv4 *)((char *)v4 + 40);
    }
}
