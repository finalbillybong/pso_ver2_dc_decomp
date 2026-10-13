typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1eed10(void);
extern void operation_8c1eed14(void *);
extern void operation_8c1eedf0(void *);
extern void set_fields_8c1eee14(void *);
extern void call_8c1eee5c(void);
extern void call_8c1ef058(void);
extern void operation_8c1ef154(void *);
extern void operation_8c1ef1d8(void *);
void operation_8c1eec60(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        call_8c1eed10();
        return;
    case 2:
        operation_8c1eed14((void *)a0);
        return;
    case 3:
        operation_8c1eedf0((void *)a0);
        return;
    case 8:
        set_fields_8c1eee14((void *)a0);
        return;
    case 5:
        call_8c1eee5c();
        return;
    case 0:
        call_8c1ef058();
        return;
    case 1:
        operation_8c1ef154((void *)a0);
        return;
    case 6:
        operation_8c1ef1d8((void *)a0);
        return;
    case 4:
        break;
    }
}
