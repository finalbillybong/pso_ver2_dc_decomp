typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block28 {
    int words[7];
} Block28;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
struct S_vv1 {
    Block28 f00;
};
struct S_vv2 {
    Block28 f00;
};
void operation_8c027b20(int a0, int a1, int a2)
{
    S_vv2 *v2;
    S_vv1 *v1;
    int v4;
    v1 = (S_vv1 *)a2;
    v2 = (S_vv2 *)a1;
    v4 = (int)0;
    while (a0 > v4) {
        *(Block28 *)&(v1++)->f00 = *(Block28 *)&(v2++)->f00;
        v4 = (int)(v4 + 1);
    }
}
