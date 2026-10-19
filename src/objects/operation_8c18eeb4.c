typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4dbf60;
extern int g_8c4dbf64;
extern int g_8c4dc10c;
extern void call_8c18ef28(void);
extern void call_8c18f0ec(void);
extern void call_8c18f2ac(void);
void operation_8c18eeb4(void)
{
    if (g_8c4dbf64 != 0 && g_8c4dc10c == 0) {
        g_8c4dc10c = 1;
        g_8c4dbf60 = 0;
        call_8c18ef28();
        call_8c18f0ec();
        call_8c18f2ac();
    }
}
