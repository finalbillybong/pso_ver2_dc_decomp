typedef struct S_vv1 { int f00; int f04; } S_vv1;
void operation_8c013620(S_vv1 *a0, unsigned int a1)
{
    int n;
    n = a1 >> 3;
    while (n > 0) {
        if (a0->f00 != 0) {
            ((void (*)(void))a0->f00)();
        }
        a0++;
        n--;
    }
}
