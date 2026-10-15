typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_x10960 S_x10960;
struct S_x10960 {
    float f00;
};
extern float squared_distance_xyz(void *, void *);
int operation_8c1134ec(int a0)
{
    int v3;
    int v1;
    int v2;
    float t1;
    v1 = (int)0x37c;
    v3 = (int)0;
    v2 = (int)0x104;
    while (*(int *)0x8c467874 > v3) {
        if (*(int *)((char *)0x8c467240 + (v3 << 2)) != 0 && *(int *)((char *)((char *)*(S_g8c467240 **)((char *)0x8c467240 + (v3 << 2)) + 0x0) + (v1)) == *(int *)0x8c44be04) {
            t1 = squared_distance_xyz((void *)(*(int *)((char *)0x8c467240 + (v3 << 2)) + 0x3c), (void *)(a0 + 0x3c));
            if ((((S_x10960 *)(a0 + v2))->f00 * ((S_x10960 *)(a0 + v2))->f00) > t1) {
                return 1;
            }
        }
        v3 = (int)(v3 + 1);
    }
    return 0;
}
