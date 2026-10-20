typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4e18c0 S_L8c4e18c0;
typedef struct S_g8c4da660 S_g8c4da660;
typedef struct S_g8c4e18c4 S_g8c4e18c4;
typedef struct S_vv52 S_vv52;
typedef struct S_vv57 S_vv57;
typedef struct S_vv58 S_vv58;
typedef struct S_vv77_0 S_vv77_0;
struct S_vv58 {
    int f00;
    int f04;
    int f08;
    int f0c;
};
struct S_vv57 {
    int f00;
    int f04;
    int f08;
    int f0c;
};
struct S_vv52 {
    int f00;
    int f04;
    int f08;
    int f0c;
};
struct S_L8c4e18c0 {
    char unknown0[0x4];
    S_g8c4e18c4 *f04;
};
extern int g_8c46ec50;
extern int g_8c46ec54;
extern S_g8c4da660 *g_8c4da660;
extern S_L8c4e18c0 g_8c4e18c0;
extern void operation_8c18604c(int);
extern int operation_8c14f8e4(void);
extern int call_8c18e808(int, int);
extern void call_8c3889a4(int, void *, int);
extern int operation_8c14f8c4(void);
extern void operation_8c186d74(int, int, int);
extern void call_8c1861cc(int, void *, void *);
extern void operation_8c186380(int, int, int);
extern void operation_8c186b78(int, int, int);
extern void call_8c18635c(void);
extern void call_8c186510(void);
extern void operation_8c186080(void);
void operation_8c14fdf0(void)
{
    int t1;
    int t5;
    int v60;
    int v65;
    S_vv58 *v58;
    int v66;
    int v48;
    int t2;
    int t4;
    int v69;
    S_vv57 *v57;
    int v70;
    int v49;
    int v64;
    int v68;
    unsigned int v54;
    int v73;
    S_vv52 *v52;
    int v74;
    int v50;
    int v51;
    int v75;
    int v72;
    int v67;
    int v71;
    int t3;
    int v77;
    int v63;
    int t6;
    operation_8c18604c(0x8000);
    v54 = 0x5a8;
    for (v60 = 0; v60 < 0x12; v60++) {
        switch (*(short *)((char *)0x8c4da664 + (v60 << 1))) {
        case 0:
            v58 = (S_vv58 *)g_8c4da660;
            if (v58 != 0) for (;; v58 = (S_vv58 *)((char *)v58 + v58->f04)) {
                v48 = v58->f00;
                if (v48 == 1 && (v67 = v58->f08, v67 == v60)) {
                    v68 = v58->f0c;
                    v58++;
                    t1 = operation_8c14f8e4();
                    t2 = call_8c18e808(v68, 0x44);
                    if ((unsigned int)(t1 + t2) > 0xba0) {
                        break;
                    }
                    call_8c3889a4(g_8c46ec50 + operation_8c14f8e4() * 0x44, (void *)v58, v68);
                    *(int *)((char *)0x8c46ec58 + (v67 << 2)) = t2;
                    break;
                }
                if (v48 == 0) {
                    break;
                }
            }
            v57 = (S_vv57 *)g_8c4da660;
            if (v57 != 0) for (;; v57 = (S_vv57 *)((char *)v57 + v57->f04)) {
                v49 = v57->f00;
                if (v49 == 2 && (v71 = v57->f08, v71 == v60)) {
                    v72 = v57->f0c;
                    v57++;
                    t4 = operation_8c14f8c4();
                    t5 = call_8c18e808(v72, 0x48);
                    if ((unsigned int)(t4 + t5) > v54) {
                        break;
                    }
                    call_8c3889a4(g_8c46ec54 + operation_8c14f8c4() * 0x48, (void *)v57, v72);
                    *(int *)((char *)0x8c46eca0 + (v71 << 2)) = t5;
                    break;
                }
                if (v49 == 0) {
                    break;
                }
            }
            v52 = (S_vv52 *)g_8c4da660;
            if (v52 != 0) for (;; v52 = (S_vv52 *)((char *)v52 + v52->f04)) {
                v50 = v52->f00;
                if (v50 == 3 && v52->f08 == v60) {
                    operation_8c186d74(v52->f08, (int)((char *)v52 + 0x10), v52->f0c);
                    break;
                }
                if (v50 == 0) {
                    break;
                }
            }
            break;
        case 1:
        case 2:
            v77 = v60 << 3;
            call_8c1861cc(v60, (void *)(*(S_vv77_0 **)((char *)((char *)v77 + 0x0) + ((int)((void *)&g_8c4e18c0)))), (void *)(*(S_g8c4e18c4 **)((char *)&g_8c4e18c0.f04 + (v77))));
            operation_8c186380(v60, (int)(*(S_vv77_0 **)((char *)((char *)v77 + 0x0) + ((int)((void *)&g_8c4e18c0)))), (int)(*(S_g8c4e18c4 **)((char *)&g_8c4e18c0.f04 + (v77))));
            operation_8c186b78(v60, (int)(*(S_vv77_0 **)((char *)((char *)v77 + 0x0) + ((int)((void *)&g_8c4e18c0)))), (int)(*(S_g8c4e18c4 **)((char *)&g_8c4e18c0.f04 + (v77))));
            break;
        case 3:
            break;
        }
    }
    call_8c18635c();
    call_8c186510();
    operation_8c186080();
}
