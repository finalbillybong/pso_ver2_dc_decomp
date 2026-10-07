#ifndef PSO_HEX_FIELD_H
#define PSO_HEX_FIELD_H
#include "src/include/integer_field.h"
/* The hexadecimal editor shares the checked 20-byte field prefix.
 * This alias does not establish the complete object allocation extent. */
typedef IntegerField HexField;
#endif
