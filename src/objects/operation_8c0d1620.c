typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fc80 S_g8c46fc80;
typedef struct S_g8c46fd5c S_g8c46fd5c;
typedef struct S_g8c46fd68 S_g8c46fd68;
typedef struct S_g8c46fd7c S_g8c46fd7c;
extern S_g8c46fc80 *g_8c46fc80;
extern S_g8c46fd5c *g_8c46fd5c;
extern S_g8c46fd68 *g_8c46fd68;
extern S_g8c46fd7c *g_8c46fd7c;
extern void destroy_vector_grid(void *, int);
extern void destroy_node_array(void *, short);
extern void call_8c18de08(void *);
extern void call_8c03dc40(void *, int);
void operation_8c0d1620(void)
{
    destroy_vector_grid(g_8c46fd7c, 1);
    g_8c46fd7c = (S_g8c46fd7c *)0;
    destroy_node_array(g_8c46fd68, (short)1);
    g_8c46fd68 = (S_g8c46fd68 *)0;
    call_8c18de08(g_8c46fd5c);
    if (g_8c46fc80 != 0) {
        call_8c03dc40(g_8c46fc80, 1);
        g_8c46fc80 = (S_g8c46fc80 *)0;
    }
}
