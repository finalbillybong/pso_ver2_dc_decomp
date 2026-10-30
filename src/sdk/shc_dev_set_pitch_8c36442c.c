extern int get_value_8c364cec(int, int, int *);
extern float func_8c12b684(float);
extern void func_8c3541e8(int, int, int);

void dev_set_pitch_8c36442c(int dev, int freq)
{
    int h;
    float x;
    int hi;
    int lo;
    get_value_8c364cec(dev, 7, &h);
    if (h) {
        x = (func_8c12b684((float)freq) + -6.9077555f) * 1731.23401f;
        hi = (int)(x * 0.00999999978f);
        lo = (int)x - hi * 100;
        func_8c3541e8(h, hi, lo);
    }
}
