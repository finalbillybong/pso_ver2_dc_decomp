typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
struct S_g8c4db9e0 {
    char unknown0[0x3a0];
    char f3a0;
};
extern int allocate_block(void *, unsigned int);
extern void call_8c218998(int, int, char);
int operation_8c218938(int a0)
{
    char v1;
    int t1;
    if (*(int *)0x8c4db9e0 != 0) {
        v1 = (char)(*(S_g8c4db9e0 **)0x8c4db9e0)->f3a0;
        if ((char)v1 >= 0 && 0xa > (char)v1) {
            t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x28);
            if (t1 != 0) {
                call_8c218998(t1, a0, v1);
            }
            return (int)(t1);
        }
    }
    return 0;
}
