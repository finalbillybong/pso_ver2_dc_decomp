typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4621ac S_L8c4621ac;
struct S_L8c4621ac {
    void *f00;
    int f04;
    int f08;
    int f0c;
    char f10;
    char unknown11[0xf];
    int f20;
};
extern S_L8c4621ac g_8c4621ac;
extern char g_8c2ed2b4[];
extern int call_8c036778(void);
extern int operation_8c03680c(void);
int operation_8c036640(void)
{
    int t1;
    int t2;
    (&g_8c4621ac)->f00 = (g_8c2ed2b4 + 0xe7);
    (&g_8c4621ac)->f0c = 0;
    (&g_8c4621ac)->f10 = 0;
    (&g_8c4621ac)->f20 = 0;
    t1 = call_8c036778();
    (&g_8c4621ac)->f04 = (int)(t1);
    t2 = operation_8c03680c();
    (&g_8c4621ac)->f08 = (int)(t2);
    return (int)((&g_8c4621ac)->f0c);
}
