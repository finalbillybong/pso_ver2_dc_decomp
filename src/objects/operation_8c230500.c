typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c180d54(void);
extern void call_8c17e194(void);
extern void call_8c380516(void);
void operation_8c230500(void)
{
    call_8c180d54();
    while (*(int *)0x8c4dbaec != 0) {
        call_8c17e194();
        call_8c380516();
    }
}
