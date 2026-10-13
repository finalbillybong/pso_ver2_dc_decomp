typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1e96f8(void);
extern void call_8c1e9704(void);
extern void operation_8c1e9820(void *);
extern void operation_8c1e9860(void *);
extern void call_8c1e98ac(void);
extern void call_8c1e9a58(void);
extern void call_8c1e9b10(void);
extern void set_fields_8c1e9c44(void *);
void operation_8c1e9648(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        call_8c1e96f8();
        return;
    case 2:
        call_8c1e9704();
        return;
    case 3:
        operation_8c1e9820((void *)a0);
        return;
    case 8:
        operation_8c1e9860((void *)a0);
        return;
    case 5:
        call_8c1e98ac();
        return;
    case 0:
        call_8c1e9a58();
        return;
    case 1:
        call_8c1e9b10();
        return;
    case 6:
        set_fields_8c1e9c44((void *)a0);
        return;
    case 4:
        break;
    }
}
