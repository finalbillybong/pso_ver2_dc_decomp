typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dc2e4 S_g8c4dc2e4;
extern int allocate_block(void *, unsigned int);
extern void operation_193d9c(void *, void *, int, int, int);
int operation_8c1931d4(int a0, int a1, int a2, int a3)
{
    int v3;
    char *v7;
    int v2;
    int v6;
    int t1;
    if (*(int *)0x8c4dc2e4 != 0 && (v7 = (char *)*(int *)0x8c4dc2ec) != 0) {
        if ((unsigned char)a1 == 0) {
            v2 = (int)((unsigned char)a2 + -1);
            v3 = v2;
        } else {
            if ((unsigned char)a1 == 2) {
                v2 = (int)((unsigned char)a2 + 0x97);
                v3 = v2;
            } else {
                if ((unsigned char)a1 == 1) {
                    v2 = (int)((unsigned char)a2 + 0xd1);
                    v3 = v2;
                } else {
                    return -1;
                }
            }
        }
        if (a3 != -1) {
            v2 = (int)a3;
        }
        v6 = (int)0;
        while (v6 != 0xc) {
            if (*(int *)((char *)((char *)v7 + 0x0) + (v6 << 2)) == 0) {
                *(int *)((char *)((char *)v7 + 0x0) + (v6 << 2)) = 1;
                t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x48);
                if (t1 != 0) {
                    operation_193d9c((void *)t1, (void *)(*(S_g8c4dc2e4 **)0x8c4dc2e4), v6, v3, v2);
                }
                return (int)(v6);
            }
            v6 = (int)(v6 + 1);
        }
    }
    return -1;
}
