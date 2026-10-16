typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c285888 S_L8c285888;
typedef struct Frame Frame;
typedef struct S_g8c2858a8 S_g8c2858a8;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_44 S_vv1_44;
struct S_vv1 {
    char unknown0[0x44];
    S_vv1_44 *f44;
};
struct S_vv1_44 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x24];
    float f5c;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct S_L8c285888 {
    char unknown0[0x4];
    float f04;
};
extern S_g8c46fe20 *g_8c46fe20;
extern S_L8c285888 g_8c285888;
extern void create_effect(void *, int, int);
void operation_8c0dda80(int a0)
{
    Frame frame;
    int v4;
    int v2;
    S_vv1 *v1;
    v1 = (S_vv1 *)g_8c46fe20;
    if (v1 != 0 && v1->f44 != 0) {
        v2 = !(v1->f44->f34 & 1);
        if (v2 == 0) {
            if (a0 != 1) {
                if (a0 == 2) {
                    goto L_8c0ddab6;
                }
                if (a0 == 3) {
                    goto L_8c0ddaba;
                }
            } else {
                v4 = (int)0;
                goto L_8c0ddac0;
L_8c0ddab6:;
                v4 = (int)1;
                goto L_8c0ddac0;
L_8c0ddaba:;
                v4 = (int)2;
                goto L_8c0ddac0;
            }
            v4 = (int)3;
L_8c0ddac0:;
            (&frame)->f00 = *(float *)((char *)&g_8c285888 + (v4 << 3));
            (&frame)->f04 = *(float *)((char *)&g_8c285888.f04 + (v4 << 3));
            (&frame)->f08 = -1.0f / (v1->f44->f5c + 0.2691f);
            create_effect((void *)(&frame), (int)(*(S_g8c2858a8 **)((char *)0x8c2858a8 + (v4 << 2))), 0xc0);
        }
    }
}
