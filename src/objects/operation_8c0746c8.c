typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4689e8 S_g8c4689e8;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv1_30 S_vv1_30;
typedef struct S_vv1_4 S_vv1_4;
struct S_vv1 {
    int f00;
    S_vv1_4 *f04;
    char unknown8[0x24];
    S_vv1_2c *f2c;
    S_vv1_30 *f30;
};
extern void call_8c38ae68(void);
extern void call_8c3843a8(void *);
extern void call_8c0746c8(void *);
extern void call_8c38ad10(void);
extern void call_8c382a40(void *);
extern void call_8c37dc90(void *, int);
extern void call_8c37e390(void *);
void operation_8c0746c8(int a0)
{
    char *v2;
    S_vv1 *v1;
    char *v21;
    char *v20;
    char *v23;
    char *v22;
    v1 = (S_vv1 *)a0;
    do {
        v2 = (char *)v1->f00;
        if (((int)(v2) & 7) == 7) {
            call_8c38ae68();
            if (*(int *)0x8c4689e8 != 0) {
                call_8c3843a8((void *)(*(S_g8c4689e8 **)0x8c4689e8));
                *(int *)0x8c4689e8 += 0x40;
            }
            v21 = (char *)*(int *)0x8c4699fc;
            if (v21 != 0) {
                ((void (*)(S_vv1 *))(v21))(v1);
            }
            if ((((int)(v2) & 8)) == 0) {
                v20 = (char *)*(int *)0x8c4699f8;
                if (v20 != 0) {
                    ((void (*)(void *))(v20))((void *)(v1->f04));
                }
            }
            if ((((int)(v2) & 0x10)) == 0) {
                call_8c0746c8((void *)(v1->f2c));
            }
            call_8c38ad10();
        } else {
            call_8c38ae68();
            if ((((int)(v2) & 1)) == 0) {
                call_8c382a40((void *)((int)v1 + 8));
            }
            if ((((int)(v2) & 2)) == 0) {
                call_8c37dc90((void *)((int)v1 + 0x14), (int)((int)(v2) & 0x20));
            }
            if ((((int)(v2) & 4)) == 0) {
                call_8c37e390((void *)((int)v1 + 0x20));
            }
            v23 = (char *)*(int *)0x8c4699fc;
            if (v23 != 0) {
                ((void (*)(S_vv1 *))(v23))(v1);
            }
            if (*(int *)0x8c4689e8 != 0) {
                call_8c3843a8((void *)(*(S_g8c4689e8 **)0x8c4689e8));
                *(int *)0x8c4689e8 += 0x40;
            }
            if ((((int)(v2) & 8)) == 0) {
                v22 = (char *)*(int *)0x8c4699f8;
                if (v22 != 0) {
                    ((void (*)(void *))(v22))((void *)(v1->f04));
                }
            }
            if ((((int)(v2) & 0x10)) == 0) {
                call_8c0746c8((void *)(v1->f2c));
            }
            call_8c38ad10();
        }
        v1 = (S_vv1 *)v1->f30;
    } while (v1 != 0);
}
