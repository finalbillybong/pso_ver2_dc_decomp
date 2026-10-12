typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46ed40 S_g8c46ed40;
typedef struct S_g8c46ed48 S_g8c46ed48;
extern S_g8c46ed40 *g_8c46ed40;
extern int g_8c46ed44;
extern S_g8c46ed48 *g_8c46ed48;
extern int g_8c46ed4c;
extern void call_8c18de08(void *);
void operation_8c09d64c(void)
{
    if (g_8c46ed40 != 0) {
        call_8c18de08(g_8c46ed40);
        g_8c46ed40 = 0;
        g_8c46ed44 = 0;
    }
    if (g_8c46ed48 != 0) {
        call_8c18de08(g_8c46ed48);
        g_8c46ed48 = 0;
        g_8c46ed4c = 0;
    }
}
