typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c1f007c(void *);
extern void call_8c1f0114(void);
extern void operation_8c1f0118(void *);
extern void call_8c1f0164(void);
extern void call_8c1f01a0(void);
extern void operation_8c1f02bc(void *);
extern void accumulate_angle_8c1f0378(void *);
extern void operation_8c1f03e0(void *);
void operation_8c1effcc(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        operation_8c1f007c((void *)a0);
        return;
    case 2:
        call_8c1f0114();
        return;
    case 3:
        operation_8c1f0118((void *)a0);
        return;
    case 8:
        call_8c1f0164();
        return;
    case 5:
        call_8c1f01a0();
        return;
    case 0:
        operation_8c1f02bc((void *)a0);
        return;
    case 1:
        accumulate_angle_8c1f0378((void *)a0);
        return;
    case 6:
        operation_8c1f03e0((void *)a0);
        return;
    case 4:
        break;
    }
}
