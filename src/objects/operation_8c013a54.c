typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int f00;
    int f04;
    int f08;
    int f0c;
} Block16;
extern int g_8c4189e0;
extern char g_8c41887c[];
void operation_8c013a54(int a0, Vector3 *a1, Block16 *a2)
{
    int add;
    int k;
    int n;
    int off;
    int id;
    int lim;
    int i;
    int empty;
    lim = 8;
    n = g_8c4189e0;
    add = 1;
    if (n >= lim) {
        return;
    }
    i = 0;
    empty = 0xffff;
    k = 0x2c;
    for (; i < lim; i++) {
        off = i * k;
        id = *(int *)((char *)(g_8c41887c + 0x28) + off);
        if (a0 == id) {
            *(int *)((char *)(g_8c41887c + 0x28) + off) = a0;
            *(Vector3 *)(g_8c41887c + off) = *a1;
            *(Block16 *)((char *)(g_8c41887c + 0xc) + off) = *a2;
            *(int *)((char *)(g_8c41887c + 0x24) + off) |= 2;
            add = 0;
            break;
        }
        if (id == empty) {
            break;
        }
    }
    if (add != 0) {
        off = n * 0x2c;
        *(int *)((char *)(g_8c41887c + 0x28) + off) = a0;
        *(Vector3 *)(g_8c41887c + off) = *a1;
        *(Block16 *)((char *)(g_8c41887c + 0xc) + off) = *a2;
        *(int *)((char *)(g_8c41887c + 0x24) + off) |= 2;
        g_8c4189e0++;
    }
}
