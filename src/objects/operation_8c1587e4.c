typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daaa4 S_g8c4daaa4;
typedef struct S_g8c4daaa4_4 S_g8c4daaa4_4;
typedef struct S_g8c4daaa4_8 S_g8c4daaa4_8;
typedef struct S_vv1 S_vv1;
typedef struct S_vv11 S_vv11;
typedef struct S_vv14 S_vv14;
struct S_g8c4daaa4 {
    char unknown0[0x4];
    S_g8c4daaa4_4 *f04;
    S_g8c4daaa4_8 *f08;
    char unknownc[0x30];
    int f3c;
};
struct S_vv1 {
    char unknown0[0x44c];
    int f44c;
};
struct S_vv11 {
    char unknown0[0x14];
    unsigned char f14;
};
struct S_vv14 {
    char unknown0[0x14];
    unsigned char f14;
};
int operation_8c1587e4(int a0, int a1, int a2)
{
    S_vv1 *v1;
    S_vv11 *v11;
    S_vv14 *v14;
    char *row;
    int n;
    int k;
    int v19;
    v19 = 0;
    switch ((unsigned char)a0) {
    case 0:
        a1 = (unsigned char)a1;
        if (a1 > 0) {
            v1 = (S_vv1 *)(*(S_g8c4daaa4 **)0x8c4daaa4)->f04;
            if (0x89 > a1 && *(int *)(row = (char *)v1 + (a1 << 3)) > (unsigned char)a2) {
                v11 = (S_vv11 *)(*(int *)(row + 0x4) + (unsigned char)a2 * 0x18);
            } else {
                v11 = (S_vv11 *)v1->f44c;
            }
        } else {
            v11 = 0;
        }
        if (v11 != 0) {
            v19 = (unsigned char)v11->f14;
        }
        break;
    case 1:
        switch ((unsigned char)a1) {
        case 1:
        case 2:
            n = (unsigned char)a1;
            if (n > 0 && 3 > n) {
                row = (char *)(*(S_g8c4daaa4 **)0x8c4daaa4)->f08 + (n + -1 << 3);
                k = (unsigned char)a2;
                n = *(int *)row;
                if (n > k) {
                    v14 = (S_vv14 *)(*(int *)(row + 0x4) + k * 0x18);
                } else {
                    v14 = (S_vv14 *)(*(int *)(row + 0x4) + n * 0x18);
                }
            } else {
                v14 = 0;
            }
            if (v14 != 0) {
                v19 = (unsigned char)v14->f14;
            }
            break;
        }
        break;
    }
    return (v19 > 0) ? ((*(S_g8c4daaa4 **)0x8c4daaa4)->f3c + v19 * 6) : (*(S_g8c4daaa4 **)0x8c4daaa4)->f3c;
}
