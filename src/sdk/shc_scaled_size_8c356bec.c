int scaled_size_8c356bec(int mode, int w, int h)
{
    if (mode == 0) {
        return w * h * 3 / 2;
    }
    if (mode == 1) {
        return w * h * 2;
    }
    if (mode == 2) {
        return w * h;
    }
    for (;;) {
    }
}
