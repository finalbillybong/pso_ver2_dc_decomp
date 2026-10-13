typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1ebdc4(void);
extern void call_8c1ebdd0(void);
extern void call_8c1ebdd4(void);
extern void call_8c1ebe80(void);
extern void call_8c1ebe84(void);
extern void call_8c1ec024(void);
extern void call_8c1ec15c(void);
extern void reset_offsets_8c1ec168(void *);
void operation_8c1ebd14(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        call_8c1ebdc4();
        return;
    case 2:
        call_8c1ebdd0();
        return;
    case 3:
        call_8c1ebdd4();
        return;
    case 8:
        call_8c1ebe80();
        return;
    case 5:
        call_8c1ebe84();
        return;
    case 0:
        call_8c1ec024();
        return;
    case 1:
        call_8c1ec15c();
        return;
    case 6:
        reset_offsets_8c1ec168((void *)a0);
        return;
    case 4:
        break;
    }
}
