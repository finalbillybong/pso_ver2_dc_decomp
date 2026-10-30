typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    int f00;
};
extern int g_8c4689ec;
void operation_8c07435c(void)
{
    int v2;
    int v1;
    S_vv3 *v3;
    int pm1;
    unsigned int pm2;
    int pm3;
    pm3 = 0;
    pm1 = pm3;
    pm2 = 0x8c4689f8;
    v3 = (S_vv3 *)(void *)pm2;
    v2 = pm1;
    pm1 = 0x400;
    g_8c4689ec = 0;
    v1 = pm1;
    for (; v1 > v2; v3 = (S_vv3 *)((char *)v3 + 4)) {
        v2 = 1 + v2;
        v3->f00 = 0;
    }
}
