typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbb98 S_g8c4dbb98;
extern S_g8c4dbb98 *g_8c4dbb98;
extern int g_8c4dbb9c;
extern void call_8c011ec0(void *);
void operation_8c186080(void)
{
    if (g_8c4dbb98 != 0) {
        call_8c011ec0(g_8c4dbb98);
        g_8c4dbb98 = 0;
        g_8c4dbb9c = 0;
    }
}
