typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
    int f04;
};
void process_entries_8c2534e0(int a0)
{
    int v2;
    S_vv1 *v1;
    v1 = (S_vv1 *)a0;
    v2 = 0;
    while (5 > v2) {
        v1->f00 = 0;
        v1->f04 = 0;
        v1 = (S_vv1 *)((char *)v1 + 8);
        v2 = v2 + 1;
    }
}
