typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469a44 S_g8c469a44;
typedef struct S_g8c469a48 S_g8c469a48;
extern S_g8c469a44 *g_8c469a44;
extern S_g8c469a48 *g_8c469a48;
extern void call_8c18de08(void *);
void operation_8c0772c4(void)
{
    call_8c18de08(g_8c469a48);
    call_8c18de08(g_8c469a44);
    g_8c469a48 = (S_g8c469a48 *)0;
    g_8c469a44 = (S_g8c469a44 *)0;
}
