typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
extern void operation_8c016950(void);
extern void call_8c01787c(void);
extern void call_8c02edac(void *);
void operation_8c017524(void)
{
    operation_8c016950();
    call_8c01787c();
    call_8c02edac(*(S_g8c418a00 **)0x8c418a00);
}
