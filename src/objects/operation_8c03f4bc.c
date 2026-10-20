typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4dbb08;
extern int g_8c4dbb0c;
extern int operation_8c01018c(int);
extern int operation_8c0101dc(int);
extern void word_operation_8c0e92d4(unsigned int);
extern void enable_pair_8c1cc4b4(void);
extern int operation_8c1f1850(void);
extern void select_mode3_8c1cc4e0(void);
extern int call_8c3727a0(int);
extern void operation_8c19b2a8(int);
extern void select_mode2_8c1cc4c8(void);
extern void select_mode19_8c1cc648(void);
void operation_8c03f4bc(void)
{
    int v1;
    int v3;
    int v4;
    int v5;
    int v11;
    int v12;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    v1 = (int)(g_8c4dbb08 + g_8c4dbb0c);
    switch (operation_8c01018c((int)((void *)0x8c319870))) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        v1 -= g_8c4dbb08;
    }
    switch (operation_8c01018c((int)((void *)0x8c3198c1))) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        v1 -= g_8c4dbb0c;
        break;
    default:
        switch (operation_8c01018c((int)((void *)0x8c319912))) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            v1 -= g_8c4dbb0c;
        }
    }
    t4 = operation_8c0101dc(v1);
    v3 = (int)-1;
    if (t4 == v3) {
        word_operation_8c0e92d4((unsigned int)0);
        enable_pair_8c1cc4b4();
        return;
    }
    t5 = operation_8c1f1850();
    if ((unsigned int)(unsigned char)t5 >= (unsigned int)2) {
        select_mode3_8c1cc4e0();
        return;
    }
    t6 = operation_8c1f1850();
    if ((unsigned char)t6 == 1) {
        t7 = operation_8c01018c((int)((void *)0x8c319870));
        if (t7 != -1) {
            v4 = (int)0;
            while ((unsigned int)8 > (unsigned int)(unsigned char)v4) {
                t8 = call_8c3727a0((int)((unsigned char)v4));
                *(int *)((char *)0x8c466dc4 + ((unsigned char)v4 << 2)) = (int)(t8);
                v4 = (int)(v4 + 1);
            }
            v5 = (int)0;
            while ((unsigned int)8 > (unsigned int)(unsigned char)v5) {
                if (*(int *)((char *)0x8c466dc4 + ((unsigned char)v5 << 2)) != 0) {
                    operation_8c19b2a8(v5);
                    goto L_8c03f62e;
                }
                operation_8c19b2a8(0);
                v5 = (int)(v5 + 1);
            }
L_8c03f62e:;
            select_mode2_8c1cc4c8();
            return;
        }
    }
    v11 = (int)0;
    while ((unsigned int)8 > (unsigned int)(unsigned char)v11) {
        t9 = call_8c3727a0((int)((unsigned char)v11));
        *(int *)((char *)0x8c466dc4 + ((unsigned char)v11 << 2)) = (int)(t9);
        v11 = (int)(v11 + 1);
    }
    v12 = (int)0;
    while ((unsigned int)8 > (unsigned int)(unsigned char)v12) {
        if (*(int *)((char *)0x8c466dc4 + ((unsigned char)v12 << 2)) != 0) {
            operation_8c19b2a8(v12);
            goto L_8c03f680;
        }
        operation_8c19b2a8(0);
        v12 = (int)(v12 + 1);
    }
L_8c03f680:;
    select_mode19_8c1cc648();
}
