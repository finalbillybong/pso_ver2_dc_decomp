typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c1edd08(int);
extern void call_8c1edd30(void);
extern void operation_8c1edd34(void *);
extern void call_8c1edd88(void);
extern void call_8c1edd8c(void);
extern void operation_8c1ede38(void *);
extern void refresh_follow_effect_8c1ededc(void *);
extern void reset_offsets_8c1edefc(void *);
void operation_8c1edc58(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        operation_8c1edd08(a0);
        return;
    case 2:
        call_8c1edd30();
        return;
    case 3:
        operation_8c1edd34((void *)a0);
        return;
    case 8:
        call_8c1edd88();
        return;
    case 5:
        call_8c1edd8c();
        return;
    case 0:
        operation_8c1ede38((void *)a0);
        return;
    case 1:
        refresh_follow_effect_8c1ededc((void *)a0);
        return;
    case 6:
        reset_offsets_8c1edefc((void *)a0);
        return;
    case 4:
        break;
    }
}
