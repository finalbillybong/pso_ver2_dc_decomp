typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c20978c(int, int);
extern void set_fields_8c209770(void *);
void operation_8c209730(void)
{
    char *v1;
    if (*(int *)0x8c4db9e4 != 0) {
        v1 = (char *)*(int *)0x8c4db9e4;
        call_8c20978c(0x10, -0x11);
        call_8c20978c(0x40, -0x41);
        call_8c20978c(8, -9);
        set_fields_8c209770((void *)(v1 + 0x10));
    }
}
