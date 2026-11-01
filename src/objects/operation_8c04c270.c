typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467188 S_g8c467188;
extern void call_8c04c2f0(void);
extern void text_set_language_japanese_8c04c448(void *);
extern void call_8c04c4d8(void *);
void operation_8c04c270(void)
{
    call_8c04c2f0();
    text_set_language_japanese_8c04c448(*(S_g8c467188 **)0x8c467188);
    call_8c04c4d8(*(S_g8c467188 **)0x8c467188);
}
