/* 0x8c0c4fc8: provisional name; complete range ends at 0x8c0c4fe0.
 * Follow the signed, wrapped 16-bit difference halfway. The arithmetic right
 * shift rounds negative odd differences downward, as observed in the reference.
 */
int angle_halfway(int orientation, int desired)
{
    int mask = 0xffff;
    short difference;
    orientation &= mask;
    difference = (desired & 0xffff) - orientation;
    orientation += difference >> 1;
    return orientation & 0xffff;
}
