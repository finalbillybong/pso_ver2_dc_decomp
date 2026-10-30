/* SDK pool group 0x8c34806c (Hitachi SHC): stores a value in an object when
   a check on it succeeds; returns the check result. */
typedef struct Object {
    int unknown0;
    int value;
} Object;

extern int check_object_8c347458(Object *);

int check_and_set_8c34806c(Object *object, int value)
{
    int result = check_object_8c347458(object);
    if (result) goto done;
    object->value = value;
done:
    return result;
}
