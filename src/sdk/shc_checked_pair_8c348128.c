/* SDK pool group 0x8c348128-0x8c348158 (Hitachi SHC): stores two fields after
   a successful check. */
typedef struct Object {
    int unknown0[5];
    int first;
    int second;
} Object;

extern int check_8c347458(Object *object);

int set_checked_pair_8c348128(Object *object, int first, int second)
{
    int result = check_8c347458(object);
    if (result) goto done;
    object->first = first;
    object->second = second;
done:
    return result;
}
