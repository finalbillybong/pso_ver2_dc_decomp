typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c336040 S_L8c336040;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_L8c336040 {
    char unknown0[0x4];
    int f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c336040 g_8c336040;
extern int allocate_block(void *, unsigned int);
extern void call_8c215c38(int, int, int);
int operation_8c215bec(int a0, int a1)
{
    int t1;
    (&g_8c336040)->f04 = a1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x98);
    if (t1 != 0) {
        call_8c215c38(t1, a0, a1);
    }
    return t1;
}
