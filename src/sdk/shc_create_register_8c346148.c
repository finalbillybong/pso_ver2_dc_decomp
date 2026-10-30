/* SDK pool group 0x8c346148 (Hitachi SHC): allocates an object and registers
   it together with this function's own address. */
extern void *allocate_8c347288(void);
extern void register_8c346118(void *(*)(void), void *);

void *create_and_register_8c346148(void)
{
    void *object = allocate_8c347288();
    if (object) register_8c346118(create_and_register_8c346148, object);
    return object;
}
