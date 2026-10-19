typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc4d4 S_g8c4dc4d4;
typedef struct S_g8c4dc4d8 S_g8c4dc4d8;
extern S_g8c4dc4d4 *g_8c4dc4d4;
extern S_g8c4dc4d8 *g_8c4dc4d8;
extern char g_8c31ccf8[];
extern void visit_hierarchy_14(void *);
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c19dec4(void)
{
    if (g_8c4dc4d4 != 0) {
        visit_hierarchy_14(g_8c4dc4d4);
    }
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0xf000a, (void *)((g_8c31ccf8 + 0xad)), g_8c4dc4d8);
    call_8c38c5b6(-0xf0f10);
}
