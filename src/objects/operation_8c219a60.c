typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c50591c S_g8c50591c;
typedef struct S_g8c505920 S_g8c505920;
extern S_g8c50591c *g_8c50591c;
extern S_g8c505920 *g_8c505920;
extern void call_8c18de08(void *);
void operation_8c219a60(void)
{
    call_8c18de08(g_8c505920);
    g_8c505920 = (S_g8c505920 *)0;
    call_8c18de08(g_8c50591c);
    g_8c50591c = (S_g8c50591c *)0;
}
