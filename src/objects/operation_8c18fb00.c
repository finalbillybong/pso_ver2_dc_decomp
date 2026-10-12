typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc288 S_g8c4dc288;
extern S_g8c4dc288 *g_8c4dc288;
extern int g_8c4dc28c;
extern int g_8c4dc290;
extern int g_8c4dc294;
extern void call_8c18fb94(void);
extern void call_8c18fc58(void);
extern void call_8c18fde8(void);
extern void call_8c1cc8e4(void *, void *, int);
void operation_8c18fb00(void)
{
    if (g_8c4dc294 != 0 && g_8c4dc290 == 0) {
        g_8c4dc290 = 1;
        g_8c4dc288 = 0;
        g_8c4dc28c = 0;
        call_8c18fb94();
        call_8c18fc58();
        call_8c18fde8();
        call_8c1cc8e4((void *)0x8c4dc120, g_8c4dc288, 2);
    }
}
