typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc760 S_g8c4dc760;
typedef struct S_g8c4dc764 S_g8c4dc764;
extern S_g8c4dc760 *g_8c4dc760;
extern S_g8c4dc764 *g_8c4dc764;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void operation_8c105320(int);
void operation_8c1a4688(void)
{
    call_8c37d534(g_8c4dc764);
    call_8c011ec0(g_8c4dc764);
    if (g_8c4dc760 != 0) {
        operation_8c105320((int)g_8c4dc760);
    }
}
