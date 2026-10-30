typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block24 {
    int words[6];
} Block24;
typedef struct S_vv1 S_vv1;
typedef struct S_vv3 S_vv3;
typedef struct Block_vv3_0 {
    char unknown0[0x14];
    short f14;
    short f16;
} Block_vv3_0;
typedef struct Block_vv1_0 {
    char unknown0[0x16];
    short f16;
} Block_vv1_0;
struct S_vv1 {
    Block_vv1_0 f00;
};
struct S_vv3 {
    Block_vv3_0 f00;
};
extern char g_8c4dab80[];
extern void operation_1c7dd4(void *);
void operation_8c15b9d0(void)
{
    S_vv1 *v1;
    int v2;
    S_vv3 *v3;
    int v4;
    char *e2;
    char *e1;
    v1 = (S_vv1 *)(void *)g_8c4dab80;
    e2 = (char *)v1 + 0x5a0;
    e1 = (char *)v1 + 0x588;
    while ((unsigned int)e1 > (unsigned int)v1) {
        v2 = (int)(v1->f00.f16 == 0);
        if (v2 != 0) {
            v3 = (S_vv3 *)((int)v1 + 0x18);
            while ((unsigned int)e2 > (unsigned int)v3) {
                v4 = (int)(v3->f00.f16 == 0);
                if (v4 == 0) {
                    *(Block24 *)&v1->f00 = *(Block24 *)&v3->f00;
                    operation_1c7dd4((void *)v3);
                    v3->f00.f14 = 0;
                    v3->f00.f16 = 0;
                    goto L_8c15ba30;
                }
                v3 = (S_vv3 *)((char *)v3 + 24);
            }
        }
L_8c15ba30:;
        v1 = (S_vv1 *)((char *)v1 + 24);
    }
}
