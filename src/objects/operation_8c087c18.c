typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41bcfc S_g8c41bcfc;
extern char g_8c2ffec8[];
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18ea4c(int);
extern void call_8c18ec00(void *, int);
void operation_8c087c18(void)
{
    reset_text_cursor_8c18ea38();
    operation_8c18ea4c((int)((void *)0x8c41c634));
    operation_8c18ea4c((int)(g_8c2ffec8 + 0x6));
    call_8c18ec00((void *)(*(S_g8c41bcfc **)0x8c41bcfc), 2);
    operation_8c18ea4c((int)(g_8c2ffec8 + 0xa));
    call_8c18ec00((void *)(*(int *)0x8c41bd00 + 1), 2);
}
