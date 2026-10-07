/* 0x8c0c4f90: provisional name; complete range ends at 0x8c0c4fc8.
 * Compare the signed, wrapped 16-bit difference against both step bounds.
 * Preserve the observed sign-bit test and final signed-then-unsigned wrapping.
 */
int angle_step(int orientation, int desired, int step)
{
    int mask = 0xffff;
    int difference;
    orientation &= mask;
    desired &= 0xffff;
    difference = (short)(desired - orientation);
    if (difference <= step && difference >= -step)
        return desired;
    if (difference & 0x8000)
        orientation -= step;
    else
        orientation += step;
    return (short)orientation & 0xffff;
}
