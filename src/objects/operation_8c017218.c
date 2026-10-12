typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41c7c0 S_g8c41c7c0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int g_8c41bce4;
extern int g_8c41c628;
extern S_g8c41c7c0 *g_8c41c7c0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c1e5100(int, void *, int);
void operation_8c017218(int a0)
{
    int t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x3c);
    if (t1 != 0) {
        call_8c1e5100(t1, g_8c41c7c0, a0);
    }
    g_8c41c628 = t1;
    g_8c41bce4 = 0xa;
}
