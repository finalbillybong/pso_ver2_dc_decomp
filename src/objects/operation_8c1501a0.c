typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4da660 S_g8c4da660;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    int f00;
    int f04;
    int f08;
    int f0c;
};
extern int g_8c46ec50;
extern S_g8c4da660 *g_8c4da660;
extern int operation_8c14f8e4(void);
extern int call_8c18e808(int, int);
extern void call_8c3889a4(int, int, int);
void operation_8c1501a0(void)
{
    int t2;
    int t1;
    int v4;
    int v2;
    S_vv3 *v3;
    char *v6;
    int v7;
    int v5;
    unsigned int v1;
    int t3;
    v1 = (unsigned int)0xba0;
    v2 = (int)0;
    while (0x12 > v2) {
        switch (*(short *)((char *)0x8c4da664 + (v2 << 1))) {
        case 1:
        case 2:
        case 3:
            break;
        case 0:
            if (g_8c4da660 != 0) {
                v3 = (S_vv3 *)g_8c4da660;
                for (;;) {
                    v4 = (int)v3->f00;
                    if (v4 == 1) {
                        v5 = (int)v3->f08;
                        if (v5 == v2) {
                            v6 = (char *)v3->f0c;
                            v3 = (S_vv3 *)((char *)v3 + 16);
                            t1 = operation_8c14f8e4();
                            t2 = call_8c18e808((int)(v6), 0x44);
                            if ((unsigned int)(t1 + t2) > v1) {
                                break;
                            }
                            t3 = operation_8c14f8e4();
                            call_8c3889a4((int)(g_8c46ec50 + t3 * 0x44), (int)v3, (int)(v6));
                            *(int *)((char *)0x8c46ec58 + (v5 << 2)) = (int)(t2);
                            break;
                        }
                    }
                    if (v4 == 0) {
                        break;
                    }
                    v3 = (S_vv3 *)((int)v3 + v3->f04);
                }
            }
        }
        v2 = (int)(v2 + 1);
    }
}
