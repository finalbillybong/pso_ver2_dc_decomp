typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db24c S_g8c4db24c;
typedef struct S_g8c4db25c S_g8c4db25c;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern S_g8c4db24c *g_8c4db24c;
extern S_g8c4db25c *g_8c4db25c;
extern void operation_8c2187ac(void *, int);
extern void operation_193704(void *, short);
extern void call_8c192ffc(void);
extern void call_8c257fbc(void);
void operation_8c162d74(void)
{
    operation_8c2187ac(g_8c4db24c, 1);
    g_8c4db24c = (S_g8c4db24c *)0;
    operation_193704(g_8c4db25c, (short)1);
    g_8c4db25c = (S_g8c4db25c *)0;
    call_8c192ffc();
    call_8c257fbc();
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
}
