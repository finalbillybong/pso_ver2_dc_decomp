typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c467870;
extern int g_8c467874;
extern int g_8c467878;
extern int g_8c46787c;
extern void call_8c054040(void);
extern void clear_words_8c053d64(void);
void operation_8c051f7c(void)
{
    g_8c467870 = 0;
    g_8c467874 = 0;
    g_8c467878 = 0;
    g_8c46787c = 0;
    call_8c054040();
    clear_words_8c053d64();
}
