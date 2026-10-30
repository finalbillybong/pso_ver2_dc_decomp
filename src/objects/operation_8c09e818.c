typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46ec54 S_g8c46ec54;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    short f00;
    short f02;
};
extern S_g8c46ec54 *g_8c46ec54;
int operation_8c09e818(void)
{
    int v2;
    S_vv4 *v4;
    int v3;
    short v1;
    int v5;
    v2 = (int)0;
    v3 = (int)0;
    v4 = (S_vv4 *)g_8c46ec54;
    v1 = (short)-1;
    v5 = 0x5a8;
    while (v5 > v3) {
        if (v4->f00 != v1 && ((v4->f02 & 8)) != 0) {
            v2 = (int)(v2 + 1);
        }
        v3 = (int)(v3 + 1);
        v4 = (S_vv4 *)((char *)v4 + 72);
    }
    return (int)(v2);
}
