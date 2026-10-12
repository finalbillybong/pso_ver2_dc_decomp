typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41cd30 S_g8c41cd30;
extern int g_8c41cd20;
extern int g_8c41cd24;
extern int g_8c41cd28;
extern int g_8c41cd2c;
extern S_g8c41cd30 *g_8c41cd30;
extern int g_8c41cd34;
extern int g_8c41cd38;
extern void call_8c0d8ed4(void);
extern void call_8c105320(void *);
void operation_8c01e734(void)
{
    g_8c41cd20 = 0;
    g_8c41cd24 = 0;
    g_8c41cd28 = 0;
    g_8c41cd38 = 0;
    g_8c41cd2c = 0;
    call_8c0d8ed4();
    call_8c105320(g_8c41cd30);
    g_8c41cd30 = 0;
    g_8c41cd34 = 0;
}
