typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d7b44 S_g8c4d7b44;
struct S_g8c4d7b44 {
    char unknown0[0x24];
    int f24;
};
extern S_g8c4d7b44 *g_8c4d7b44;
extern int g_8c4d7b48;
extern int g_8c4d7b4c;
extern void call_8c220b80(int, int);
void operation_8c106534(void)
{
    call_8c220b80(0x1a, 1);
    g_8c4d7b48 = 0x45;
    g_8c4d7b4c = 2;
    g_8c4d7b44->f24 = 8;
}
