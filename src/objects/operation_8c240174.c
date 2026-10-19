typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4689e0 S_g8c4689e0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4689e0 *g_8c4689e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c2401c0(int, void *, int);
int operation_8c240174(int a0)
{
    int t1;
    if (a0 != 0) {
        t1 = allocate_block(g_8c4d97e0, (unsigned int)0x238);
        if (t1 != 0) {
            call_8c2401c0(t1, g_8c4689e0, a0);
        }
        return (int)(t1);
    }
    return 0;
}
