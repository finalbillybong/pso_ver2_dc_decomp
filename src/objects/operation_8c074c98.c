typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
extern int g_8c4689f4;
extern int g_8c46f560;
extern Block16 g_8c46f564;
extern int g_8c575570;
extern Block16 g_8c5755ac;
void operation_8c074c98(void)
{
    int v1;
    v1 = (int)(((g_8c4689f4 & 1)) != 0);
    if (v1 != 0) {
        *(Block16 *)&g_8c5755ac = *(Block16 *)&g_8c46f564;
        g_8c575570 = (int)(g_8c46f560);
        g_8c4689f4 = (unsigned int)g_8c4689f4 >> 1 << 1;
    }
}
