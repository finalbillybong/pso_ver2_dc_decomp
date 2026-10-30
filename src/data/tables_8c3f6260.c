/* Static data 8c3f6260-8c3f62b8: function_table, int_table objects, in address order. */

typedef void (*Function)(void);

extern void fn_8c401c30(void);
extern void fn_8c401db4(void);
extern void fn_8c401d10(void);
extern void fn_8c401e58(void);

Function const d_8c3f6260[8] = {
    fn_8c401c30,
    fn_8c401db4,
    fn_8c401d10,
    fn_8c401e58,
    fn_8c401c30,
    fn_8c401db4,
    fn_8c401d10,
    fn_8c401d10
};

const int d_8c3f6280[8] = {
    0, 1, 1, 0, 0, 1, 0, 0
};

const int d_8c3f62a0[6] = {
    0x5a5a5a5au, 120, 8192, 2400, 1088, 2720
};
