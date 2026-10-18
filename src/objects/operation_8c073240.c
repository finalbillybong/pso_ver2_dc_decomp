typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4689e4 S_g8c4689e4;
extern S_g8c4689e4 *g_8c4689e4;
extern void operation_8c162d74(void);
extern void operation_194cc0(void *, short);
void operation_8c073240(void)
{
    operation_8c162d74();
    if (g_8c4689e4 != 0) {
        operation_194cc0(g_8c4689e4, (short)1);
        g_8c4689e4 = (S_g8c4689e4 *)0;
    }
}
