typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2ba0 S_g8c4e2ba0;
typedef struct S_g8c4e2ba4 S_g8c4e2ba4;
extern S_g8c4e2ba0 *g_8c4e2ba0;
extern S_g8c4e2ba4 *g_8c4e2ba4;
extern void call_8c0dc884(void);
extern void operation_8c1bee20(int);
extern void update_hierarchy(void *);
void operation_8c1bed64(int a0)
{
    call_8c0dc884();
    operation_8c1bee20(a0);
    update_hierarchy(g_8c4e2ba0);
    update_hierarchy(g_8c4e2ba4);
}
