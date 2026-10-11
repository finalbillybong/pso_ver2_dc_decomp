typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x79];
    char f79;
};
int find_free_slot_8c1dc970(void)
{
    int v2;
    S_vv1 *v1;
    v1 = (S_vv1 *)(*(int *)0x8c4db9e8 + 4);
    v2 = (int)0;
    while (0x64 > v2) {
        if (((v1->f79 & 1)) == 0) {
            return 1;
        }
        v2 = (int)(v2 + 1);
        v1 = (S_vv1 *)((char *)v1 + 128);
    }
    return 0;
}
