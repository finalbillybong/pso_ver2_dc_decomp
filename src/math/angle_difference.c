/* 0x8c0c52f4: provisional name and types, complete range ends at 0x8c0c5310.
 * Signed 16-bit wrapping is intentional, including the half-turn result 32768.
 * The separate first-input mask preserves the original compiler's code shape.
 */
int angle_difference(int orientation, int converted)
{
    int mask = 0xffff;
    short difference = (converted & 0xffff) - (orientation & mask);
    if (difference < 0)
        difference = -difference;
    return difference & 0xffff;
}
