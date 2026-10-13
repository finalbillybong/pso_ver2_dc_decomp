typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1e9f94(void);
extern void call_8c1e9fa0(void);
extern void operation_8c1ea0a0(void *);
extern void operation_8c1ea0d4(void *);
extern void call_8c1ea108(void);
extern void call_8c1ea2a0(void);
extern void call_8c1ea374(void);
extern void set_fields_8c1ea4a8(void *);
void operation_8c1e9ee4(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        call_8c1e9f94();
        return;
    case 2:
        call_8c1e9fa0();
        return;
    case 3:
        operation_8c1ea0a0((void *)a0);
        return;
    case 8:
        operation_8c1ea0d4((void *)a0);
        return;
    case 5:
        call_8c1ea108();
        return;
    case 0:
        call_8c1ea2a0();
        return;
    case 1:
        call_8c1ea374();
        return;
    case 6:
        set_fields_8c1ea4a8((void *)a0);
        return;
    case 4:
        break;
    }
}
