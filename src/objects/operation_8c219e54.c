typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    unsigned char f00;
    unsigned char f01;
    unsigned char f02;
};
extern int g_8c4db254;
extern int g_8c4dc800;
extern int g_8c510ba0;
extern int call_8c1c7ffc(Arg1 *);
extern void operation_1c7dd4(void *);
extern int operation_2391f4(void *);
extern int operation_239218(void *);
extern int operation_239228(void *);
extern int operation_239238(void *);
extern int operation_239208(void *);
extern int operation_239358(void *);
extern int call_8c18e954(char, int);
extern int operation_2392c8(void *);
extern int operation_2392a8(void *);
void operation_8c219e54(int a0, Arg1 *a1)
{
    int v2;
    int t6;
    unsigned char v99;
    int v33;
    int t4;
    unsigned char v34;
    int t5;
    int t2;
    int t3;
    int t9;
    int t1;
    int v8;
    int t10;
    int t8;
    int v5;
    int t7;
    int t11;
    if (a1 == 0) {
        return;
    }
    v8 = 0;
    v5 = v8;
    if (g_8c4dc800 == 0) {
        if (!((0 != g_8c510ba0) != 0)) {
            v5 = 1;
        }
    }
    if (v5 != 0) {
        if (g_8c4db254 == 0) {
            v8 = (int)1;
        }
    }
    if (v8 == 0) {
        t1 = call_8c1c7ffc(a1);
        if (0 != t1) {
            operation_1c7dd4((void *)a1);
            return;
        }
    }
    if (!((int)(0 != g_8c510ba0) != 1)) {
        v99 = (unsigned char)(int)a1->f00;
        if (v99 == 1) {
            if (a1->f01 != 3) {
                goto L_8c219eec;
            }
            if (!((unsigned int)a1->f02 >= (unsigned int)0x33)) {
                goto L_8c219eec;
            }
            if (!((unsigned int)0x38 >= (unsigned int)a1->f02)) {
                goto L_8c219eec;
            }
            operation_1c7dd4((void *)a1);
        } else {
            if (v99 == 4) {
                operation_1c7dd4((void *)a1);
            }
        }
    }
L_8c219eec:
    ;
    v33 = (int)(void *)0x8c41ce5c;
    t2 = operation_2391f4((void *)v33);
    if ((unsigned char)t2 != 0) {
        v34 = (int)a1->f00;
        if (0 == v34 || !(1 != v34)) {
            t3 = operation_239218((void *)v33);
            switch ((unsigned char)t3) {
                case 2:
                operation_1c7dd4((void *)a1);
                return;
                case 3:
                t4 = call_8c1c7ffc(a1);
                if (t4 != 1) {
                    return;
                }
                operation_1c7dd4((void *)a1);
                return;
            }
        }
        v34 = a1->f00;
        if (v34 == 2) {
            t5 = operation_239228((void *)v33);
            if (!((unsigned char)t5 == 1)) {
                return;
            }
            operation_1c7dd4((void *)a1);
            return;
        } else if (v34 == 3) {
            t6 = operation_239238((void *)v33);
            if ((unsigned char)t6 == 2) {
                operation_1c7dd4((void *)a1);
                return;
            }
            if (a1->f01 == 2) {
                t7 = operation_239208((void *)v33);
                switch ((unsigned char)t7) {
                    case 0:
                    return;
                    case 1:
                    operation_1c7dd4((void *)a1);
                    return;
                }
                t8 = operation_239358((void *)v33);
                t9 = call_8c18e954((int)a1->f02, t8);
                a1->f02 = t9;
                return;
            }
            if ((int)a1->f01 == 9) {
                t10 = operation_2392c8((void *)v33);
                if ((unsigned char)t10 == 1) {
                    operation_1c7dd4((void *)a1);
                    return;
                }
            }
            return;
        } else if (v34 == 4) {
            t11 = operation_2392a8((void *)v33);
            if ((unsigned char)t11 == 1) {
                operation_1c7dd4((void *)a1);
            }
        }
    }
}
