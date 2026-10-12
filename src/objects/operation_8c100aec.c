typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d51d4 S_L8c4d51d4;
typedef struct S_L8c4d51d4_4 S_L8c4d51d4_4;
typedef struct S_g8c4d51d4 S_g8c4d51d4;
struct S_L8c4d51d4 {
    S_g8c4d51d4 *f00;
    S_L8c4d51d4_4 *f04;
};
extern int g_8c4d52d4;
extern S_L8c4d51d4 g_8c4d51d4;
extern void call_8c3507fe(void *, int);
void operation_8c100aec(int a0)
{
    if (g_8c4d52d4 == 0) {
        call_8c3507fe((&g_8c4d51d4)->f00, a0);
    }
    call_8c3507fe((&g_8c4d51d4)->f04, a0);
}
