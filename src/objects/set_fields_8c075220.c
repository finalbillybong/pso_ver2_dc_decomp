typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
extern int g_8c469a00;
extern int g_8c469a04;
extern int g_8c469a08;
extern Block16 g_8c469a0c;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern Block16 g_8c5755ac;
void set_fields_8c075220(void)
{
    g_8c575570 = g_8c469a00;
    g_8c5755ac = g_8c469a0c;
    g_8c5755a4 = g_8c469a04;
    g_8c5755a8 = g_8c469a08;
}
