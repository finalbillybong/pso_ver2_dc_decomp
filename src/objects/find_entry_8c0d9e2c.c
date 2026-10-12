typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
    short f04;
    short f06;
};
S_vv1 *find_entry_8c0d9e2c(int a0, int a1, int a2)
{
    int v3;
    S_vv1 *v1;
    int v4;
    v1 = (S_vv1 *)(a0 + 0x40);
    v3 = (int)0;
    while (4 > v3) {
        if ((short)a1 == v1->f04 && (short)a2 == v1->f06) {
            v4 = (int)(((v1->f00 & 1)) != 0);
            if (v4 != 0) {
                return v1;
            }
        }
        v1 = (S_vv1 *)((char *)v1 + 252);
        v3 = (int)(v3 + 1);
    }
    return 0;
}
