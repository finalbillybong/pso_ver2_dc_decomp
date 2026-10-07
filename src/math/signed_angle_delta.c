/* Signed 16-bit angular wrapping, including the -32768 half-turn result. */
int signed_angle_delta(int orientation, int converted)
{
    int mask = 0xffff;
    short difference = (converted & 0xffff) - (orientation & mask);
    return difference;
}
