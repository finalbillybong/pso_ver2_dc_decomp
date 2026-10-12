typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c513420 S_g8c513420;
typedef struct S_g8c513424 S_g8c513424;
typedef struct S_g8c513428 S_g8c513428;
extern S_g8c513420 *g_8c513420;
extern S_g8c513424 *g_8c513424;
extern S_g8c513428 *g_8c513428;
extern void apply_resource_37d534(void *);
extern void call_8c18de08(void *);
extern void call_8c011ed8(void *);
void operation_8c25cc00(void)
{
    apply_resource_37d534(g_8c513420);
    call_8c18de08(g_8c513428);
    g_8c513428 = 0;
    call_8c18de08(g_8c513424);
    g_8c513424 = 0;
    call_8c011ed8(g_8c513420);
    g_8c513420 = 0;
}
