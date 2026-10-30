/* Library pool group 0x8c1f511c (Hitachi SHC): sums the second word of n
   consecutive 8-byte table entries starting at an index. */
typedef struct Entry {
    int unknown0;
    int value;
} Entry;

extern Entry g_entries_8c4e3824[];

int sum_entries_8c1f511c(int index, int count)
{
    int sum = 0;
    while (count > 0) {
        sum += g_entries_8c4e3824[index].value;
        count--;
        index++;
    }
    return sum;
}
