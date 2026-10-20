typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4da660 S_g8c4da660;
typedef struct S_vv4 S_vv4;
typedef struct S_vv42 S_vv42;
struct S_vv4 {
    int f00;
    int f04;
    int f08;
    int f0c;
};
struct S_vv42 {
    int f00;
    int f04;
    int f08;
    int f0c;
};
extern int g_8c46ec54;
extern S_g8c4da660 *g_8c4da660;
extern int operation_8c14f8c4(void);
extern int call_8c18e808(int, int);
extern void call_8c3889a4(int, int, int);
extern void operation_8c186d74(int, int, int);
extern void operation_8c244ce0(int, int);
void operation_8c150268(void)
{
    int t1;
    int v3;
    int v1;
    int v5;
    S_vv4 *v4;
    int v17;
    int v7;
    S_vv42 *v42;
    int v43;
    int v44;
    int v6;
    int t2;
    int t3;
    for (v1 = 0; v1 < 0x12; v1++) {
        v3 = 0;
        switch (*(short *)((char *)0x8c4da664 + (v1 << 1))) {
        case 0:
            v4 = (S_vv4 *)g_8c4da660;
            if (v4 != 0) {
                for (;;) {
                    v5 = v4->f00;
                    if (v5 == 2) {
                        v6 = v4->f08;
                        if (v6 == v1) {
                            v7 = v4->f0c;
                            v4 = (S_vv4 *)((char *)v4 + 0x10);
                            t1 = operation_8c14f8c4();
                            t2 = call_8c18e808(v7, 0x48);
                            if (!((unsigned int)(t1 + t2) > (unsigned int)0x5a8)) {
                                t3 = operation_8c14f8c4();
                                call_8c3889a4((int)(g_8c46ec54 + t3 * 0x48), (int)v4, v7);
                                *(int *)((char *)0x8c46eca0 + (v6 << 2)) = t2;
                            }
                            v17 = 1;
                            goto searched;
                        }
                    }
                    if (v5 == 0) {
                        break;
                    }
                    v4 = (S_vv4 *)((char *)v4 + v4->f04);
                }
            }
            v17 = 0;
        searched:
            if (v17 != 0) {
                v3 = 1;
            }
            if (v3 == 1) {
                v42 = (S_vv42 *)g_8c4da660;
                if (v42 != 0) {
                    for (;;) {
                        v43 = v42->f00;
                        if (v43 == 3) {
                            v44 = v42->f08;
                            if (v44 == v1) {
                                operation_8c186d74(v44, (int)((char *)v42 + 0x10), v42->f0c);
                                break;
                            }
                        }
                        if (v43 == 0) {
                            break;
                        }
                        v42 = (S_vv42 *)((char *)v42 + v42->f04);
                    }
                }
            }
            break;
        case 1:
        case 2:
        case 3:
            break;
        }
        if (v3 == 0) {
            operation_8c244ce0(v1, (int)g_8c4da660);
        }
    }
}
