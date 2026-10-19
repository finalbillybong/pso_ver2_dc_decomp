typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c2fff78;
extern int g_8c41bd10;
extern int player_flag9_8c026508(void);
extern int player_flag13_8c02935c(void);
int operation_8c08876c(void)
{
    int v1;
    int t1;
    int t2;
    t1 = player_flag9_8c026508();
    if (t1 != 0) {
        return 0;
    }
    if (g_8c2fff78 == 0) {
        return 0;
    }
    if (g_8c41bd10 != 0) {
        return 0;
    }
    t2 = player_flag13_8c02935c();
    v1 = (int)(t2 == 0);
    return (int)(v1);
}
