typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
struct S_vv4 {
    char f00;
};
struct S_vv5 {
    char f00;
};
void operation_8c2384b0(char *a0, char *a1, int a2)
{
    char v6;
    int v3;
    int m;
    if (1 > a2) {
        a2 = 1;
    } else if (a2 > 0x20) {
        a2 = 0x20;
    }
    a2 -= 1;
    v3 = 0;
    m = -1;
    while (a2 > v3) {
        v6 = *a1;
        if (v6 == 0) {
            *a0 = 0;
            return;
        }
        if (v3 == 0) {
            *a0 = v6 ^ 0x7f;
        } else {
            *a0 = (v6 - a1[m]) ^ 0x7f;
        }
        v3++;
        a1++;
        a0++;
    }
    *a0 = 0;
}
