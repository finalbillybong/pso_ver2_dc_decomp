typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4da370 S_g8c4da370;
typedef struct S_g8c4da370_42c S_g8c4da370_42c;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    char f00;
    char unknown1[0x3];
    float f04;
    float f08;
    float f0c;
    int f10;
    int f14;
};
struct S_g8c4da370 {
    char unknown0[0x42c];
    S_g8c4da370_42c *f42c;
};
struct S_g8c4da370_42c {
    char unknown0[0x8];
    int f08;
    char unknownc[0xc];
    int f18;
};
extern S_g8c4da370 *g_8c4da370;
void operation_8c1aab54(void)
{
    int n;
    S_vv3 *p;
    int i;
    int k;
    i = 0;
    n = 6;
    p = (S_vv3 *)0x8c4e1a80;
    k = 0x42c;
    while (i < 2) {
        p->f00 = n;
        p->f04 = 0.0f;
        p->f08 = 0.0f;
        i++;
        p->f0c = -5.0f;
        p->f10 = (*(S_g8c4da370_42c **)((char *)g_8c4da370 + k))->f18;
        p->f14 = (*(S_g8c4da370_42c **)((char *)g_8c4da370 + k))->f08;
        p++;
    }
    p->f00 = -1;
}
