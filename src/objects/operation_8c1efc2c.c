typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c1efcdc(void *);
extern void call_8c1efd6c(void);
extern void operation_8c1efd70(void *);
extern void call_8c1efdc0(void);
extern void call_8c1efdc4(void);
extern void operation_8c1eff40(void *);
extern void call_8c1eff8c(void);
extern void set_fields_8c1eff98(void *);
void operation_8c1efc2c(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        operation_8c1efcdc((void *)a0);
        return;
    case 2:
        call_8c1efd6c();
        return;
    case 3:
        operation_8c1efd70((void *)a0);
        return;
    case 8:
        call_8c1efdc0();
        return;
    case 5:
        call_8c1efdc4();
        return;
    case 0:
        operation_8c1eff40((void *)a0);
        return;
    case 1:
        call_8c1eff8c();
        return;
    case 6:
        set_fields_8c1eff98((void *)a0);
        return;
    case 4:
        break;
    }
}
