typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db660 S_g8c4db660;
extern S_g8c4db660 *g_8c4db660;
extern void destroy_node_array(void *, short);
void operation_8c174858(void)
{
    destroy_node_array(g_8c4db660, (short)1);
    g_8c4db660 = (S_g8c4db660 *)0;
}
