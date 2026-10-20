typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c04ba30 S_c8c04ba30;
typedef struct Frame Frame;
typedef struct S_vv38 S_vv38;
typedef struct S_vv40 S_vv40;
struct Frame {
    int f00;
};
struct S_vv38 {
    char f00;
    char f01;
};
struct S_c8c04ba30 {
    char f00;
    char f01;
};
struct S_vv40 {
    unsigned char f00;
};
extern int g_8c467188;
extern S_vv40 *g_8c4dbf40;
extern S_c8c04ba30 *call_8c04ba30(S_vv38 *, Frame *, int);
int operation_8c18ea94(int a0)
{
    Frame frame;
    char v36;
    S_vv38 *v38;
    S_vv40 *v40;
    int v43;
    v38 = (S_vv38 *)a0;
    (&frame)->f00 = 0;
    if (g_8c467188 == 0) {
        (&frame)->f00 = 1;
    }
    v40 = g_8c4dbf40;
    while ((v36 = v38->f00) != 0) {
        if (v36 == 9 && v38->f01 == 0x50) {
            break;
        }
        v38 = (S_vv38 *)call_8c04ba30(v38, (Frame *)((&frame)), 0);
        v36 = v38->f00;
        if (v36 == 9 && v38->f01 == 0x50) {
            continue;
        }
        if (v36 == 0) {
            continue;
        }
        v40->f00 = v38->f00;
        v38 = (S_vv38 *)((char *)v38 + 1);
        if ((&frame)->f00 != 0) {
            v43 = v40->f00 & 0xe0;
            if (v43 == 0x80 || v43 == 0xe0) {
                v40 = (S_vv40 *)((char *)v40 + 1);
                v40->f00 = v38->f00;
                v38 = (S_vv38 *)((char *)v38 + 1);
            }
        }
        v40 = (S_vv40 *)((char *)v40 + 1);
    }
    g_8c4dbf40 = v40;
    v40->f00 = 0;
    if (v38->f00 == 0) {
        return 0;
    }
    return (int)v38 + 2;
}
