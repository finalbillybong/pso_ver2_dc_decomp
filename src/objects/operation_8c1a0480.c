typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41825c S_L8c41825c;
struct S_L8c41825c {
    char unknown0[0x4];
    int f04;
};
extern int g_8c4703c0;
extern int g_8c4dbdcc;
extern int g_8c4dc10c;
extern int g_8c4dc290;
extern int g_8c4dc5a0;
extern int g_8c4dc5a8;
extern int g_8c4dc5ac;
extern S_L8c41825c g_8c41825c;
void operation_8c1a0480(void)
{
    g_8c4dbdcc = 0;
    g_8c4dc10c = 0;
    g_8c4dc290 = 0;
    g_8c4dc5ac = 0;
    g_8c4dc5a0 = (int)((&g_8c41825c)->f04);
    if (!(g_8c4dc5a0 >= 0)) {
        g_8c4dc5a0 = 0;
    }
    if (g_8c4dc5a0 > 9) {
        g_8c4dc5a0 = 9;
    }
    g_8c4dc5a8 = (int)(g_8c4703c0);
    if (!(g_8c4703c0 >= 0)) {
        g_8c4dc5a8 = 0;
    }
    if (g_8c4dc5a8 > 3) {
        g_8c4dc5a8 = 3;
    }
}
