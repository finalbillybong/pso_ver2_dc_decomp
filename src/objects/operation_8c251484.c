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
extern void initialize_context_blend_8c2514d0(void *, void *, unsigned int);
int operation_8c251484(int a0)
{
    int t1;
    if (a0 != 0) {
        t1 = allocate_block(g_8c4d97e0, (unsigned int)0x234);
        if (t1 != 0) {
            initialize_context_blend_8c2514d0((void *)t1, g_8c4689e0, (unsigned int)a0);
        }
        return (int)(t1);
    }
    return 0;
}
