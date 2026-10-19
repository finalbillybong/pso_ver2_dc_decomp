typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db260 S_g8c4db260;
extern S_g8c4db260 *g_8c4db260;
extern void destroy_node_array(void *, short);
void operation_8c163fb8(void)
{
    destroy_node_array(g_8c4db260, (short)1);
    g_8c4db260 = (S_g8c4db260 *)0;
}
