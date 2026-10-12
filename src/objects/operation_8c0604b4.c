typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467a20 S_g8c467a20;
extern S_g8c467a20 *g_8c467a20;
extern char g_8c467a42;
extern int g_8c468800;
extern void call_8c3488f8(void *);
extern void call_8c060660(void);
void operation_8c0604b4(void)
{
    if (g_8c467a42 != 0) {
        g_8c468800 = 0;
        call_8c3488f8(g_8c467a20);
        call_8c060660();
    }
}
