typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c09de04 S_c8c09de04;
typedef struct S_vv9 S_vv9;
typedef struct S_x42848 S_x42848;
struct S_vv9 {
    short f00;
    short f02;
    short f04;
    char unknown6[0x2];
    short f08;
    char unknowna[0x2];
    short f0c;
    char unknowne[0x32];
    S_c8c09de04 *f40;
};
struct S_x42848 {
    float f00;
};
struct S_c8c09de04 {
    char unknown0[0x2c];
    short f2c;
    char unknown2e[0x56];
    S_vv9 *f84;
};
extern int current_effect_mode(void);
extern int operation_8c244bd8(void);
extern int operation_8c09d974(int, int, float);
extern S_c8c09de04 *operation_8c09de04(int, void *);
void operation_8c09d870(int a0)
{
    char *v1;
    int v7;
    S_vv9 *v9;
    int v8;
    short v24;
    int v6;
    int v5;
    int t1;
    int t2;
    S_c8c09de04 *t3;
    int t4;
    t4 = current_effect_mode();
    v1 = (char *)*(int *)((char *)0x8c2ebec8 + (t4 << 2));
    if (v1 != 0) {
        if (*(int *)0x8c41cd20 != 0 && *(int *)0x8c4dc800 != 0) {
            t1 = operation_8c244bd8();
            if (t1 == 0) {
                return;
            }
        }
        v7 = (int)*(int *)0x8c46ed40;
        v8 = (int)0;
        v5 = (int)0xffff;
        v6 = (int)-1;
        v9 = (S_vv9 *)v7;
        while (*(int *)0x8c46ed44 > v8) {
            v24 = (short)v9->f00;
            if (v24 != (short)v6 && ((v9->f02 & 2)) == 0 && ((v9->f02 & 8)) == 0) {
                t2 = operation_8c09d974(a0, (int)((int)v9 + 0x10), ((S_x42848 *)((char *)(int *)(v1 + 8) + (v24 << 4)))->f00);
                if (t2 == 1) {
                    v9->f08 = v5;
                    v9->f04 = v6;
                    t3 = operation_8c09de04(a0, (void *)v9);
                    if (t3 != 0) {
                        v9->f40 = t3;
                        t3->f2c = v9->f0c;
                        t3->f84 = v9;
                        v9->f02 |= 2;
                    } else {
                        v9->f40 = (S_c8c09de04 *)0;
                        v9->f02 |= 8;
                    }
                }
            }
            v8 = (int)(v8 + 1);
            v9 = (S_vv9 *)((char *)v9 + 68);
        }
    }
}
