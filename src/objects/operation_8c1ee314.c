typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c1ee3c4(int);
extern void call_8c1ee3ec(void);
extern void operation_8c1ee3f0(void *);
extern void call_8c1ee444(void);
extern void call_8c1ee448(void);
extern void operation_8c1ee5e8(void *);
extern void operation_8c1ee6c4(int);
extern void reset_offsets_8c1ee6f0(void *);
void operation_8c1ee314(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        operation_8c1ee3c4(a0);
        return;
    case 2:
        call_8c1ee3ec();
        return;
    case 3:
        operation_8c1ee3f0((void *)a0);
        return;
    case 8:
        call_8c1ee444();
        return;
    case 5:
        call_8c1ee448();
        return;
    case 0:
        operation_8c1ee5e8((void *)a0);
        return;
    case 1:
        operation_8c1ee6c4(a0);
        return;
    case 6:
        reset_offsets_8c1ee6f0((void *)a0);
        return;
    case 4:
        break;
    }
}
