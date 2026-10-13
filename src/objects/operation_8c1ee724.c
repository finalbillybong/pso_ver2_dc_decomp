typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c1ee7d4(int);
extern void call_8c1ee7fc(void);
extern void call_8c1ee800(void);
extern void call_8c1ee8b0(void);
extern void call_8c1ee8b4(void);
extern void operation_8c1eeaa4(void *);
extern void call_8c1eeb6c(void);
extern void initialize_float_fields_8c1eec38(void *);
void operation_8c1ee724(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        operation_8c1ee7d4(a0);
        return;
    case 2:
        call_8c1ee7fc();
        return;
    case 3:
        call_8c1ee800();
        return;
    case 8:
        call_8c1ee8b0();
        return;
    case 5:
        call_8c1ee8b4();
        return;
    case 0:
        operation_8c1eeaa4((void *)a0);
        return;
    case 1:
        call_8c1eeb6c();
        return;
    case 6:
        initialize_float_fields_8c1eec38((void *)a0);
        return;
    case 4:
        break;
    }
}
