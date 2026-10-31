/* Static data 8c366888-8c366890: function_table objects, in address order. */

typedef void (*Function)(void);

extern void memset_8c12b880(void);
extern void memcpy_8c12b77c(void);

Function const d_8c366888[2] = {
    memset_8c12b880,
    memcpy_8c12b77c
};
