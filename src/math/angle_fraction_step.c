/* Provisional name. Keep the signed 16-bit delta and strict thresholds.
 * Arithmetic shift subtraction differs from division for negative odd deltas. */
int angle_fraction_step(int orientation, int desired)
{
    int mask = 0xffff;
    int difference;
    orientation &= mask;
    desired &= 0xffff;
    difference = (short)(desired - orientation);
    if (difference > -0x3000 && difference < 0x3000)
        difference = (difference >> 1) - (difference >> 2);
    else
        difference >>= 1;
    return (orientation + difference) & 0xffff;
}
