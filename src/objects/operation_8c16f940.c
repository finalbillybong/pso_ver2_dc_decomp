typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
extern int lookup_low_id(int);
extern void word_operation_8c028814(void *);
extern void operation_8c028838(int);
void operation_8c16f940(void)
{
    int t1;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        word_operation_8c028814((void *)t1);
        operation_8c028838(t1);
    }
}
