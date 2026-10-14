typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
extern void call_8c0292ec(void);
extern int lookup_low_id(int);
extern void operation_8c026404(void *);
void operation_8c16e57c(void)
{
    int t1;
    call_8c0292ec();
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        operation_8c026404((void *)t1);
    }
}
