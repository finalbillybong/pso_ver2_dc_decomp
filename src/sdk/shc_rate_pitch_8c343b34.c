extern float func_8c12b634(float);
int rate_to_pitch_8c343b34(float rate, char *hi, char *lo)
{
    float v;
    int i;
    *hi = *lo = 0;
    v = func_8c12b634(1411200.0f / rate) / func_8c12b634(2.0f);
    v *= 3072.0f;
    i = (int)v;
    *hi = (i + 127) / 256;
    *lo = -i;
    return 0;
}
