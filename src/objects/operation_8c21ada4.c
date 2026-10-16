typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv1_30 S_vv1_30;
struct S_vv1 {
    int f00;
    char unknown4[0x28];
    S_vv1_2c *f2c;
    S_vv1_30 *f30;
};
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37dc90(void *, int);
extern void call_8c37e390(void *);
extern void call_8c3be280(int, void *, void *);
extern void call_8c21ada4(void *);
extern void call_8c38ad10(void);
void operation_8c21ada4(int a0)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)a0;
    do {
        call_8c38ae68();
        call_8c382a40((void *)((int)v1 + 8));
        call_8c37dc90((void *)((int)v1 + 0x14), (int)(v1->f00 & 0x20));
        call_8c37e390((void *)((int)v1 + 0x20));
        switch (*(int *)0x8c505940) {
        case 59:
            call_8c3be280(0, (void *)((void *)0x8c336400), (void *)((void *)0x8c505944));
            break;
        case 58:
            call_8c3be280(0, (void *)((void *)0x8c336400), (void *)((void *)0x8c505950));
        }
        *(int *)0x8c505940 += 1;
        if (v1->f2c != 0) {
            call_8c21ada4((void *)(v1->f2c));
        }
        call_8c38ad10();
        v1 = (S_vv1 *)v1->f30;
    } while (v1 != 0);
}
