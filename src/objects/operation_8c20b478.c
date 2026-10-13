typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c20bb4c(int);
extern void call_8c20c408(void);
extern void call_8c20d33c(void);
extern void call_8c20e420(void);
extern void call_8c20f644(void);
void operation_8c20b478(int a0)
{
    switch (*(int *)0x8c5051e0) {
    case 0:
        call_8c20bb4c(a0);
        return;
    case 1:
    default:
        call_8c20c408();
        return;
    case 4:
        call_8c20d33c();
        return;
    case 2:
        call_8c20e420();
        return;
    case 3:
        call_8c20f644();
        return;
    }
}
