/*
 * The libmalelf is an evil library that could be used for good! It was
 * developed with the intent to assist in the process of infecting
 * binaries and provide a safe way to analyze malwares.
 *
 * Evil using this library is the responsibility of the programmer.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 * implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include "defines.h"


MALELF_BEGIN_DECLS


#ifndef MALELF_PATCH_H
#define MALELF_PATCH_H

/*! 
 *
 * \param binary A valid MalelfBinary object.
 * \param magic_bytes
 * \param value_addr
 *
 * \return MALELF_SUCCESS if the operation succeeded,
 *         otherwise an ERROR.
 */
extern _u8 malelf_patch_at_magic_byte(MalelfBinary *binary,
                                      _u32 magic_bytes,
                                      _u32 value_addr);

/*! 
 *
 * \param binary A valid MalelfBinary object.
 * \param magic_bytes
 * \param value_addr
 *
 * \return MALELF_SUCCESS if the operation succeeded,
 *         otherwise an ERROR.
 */
extern _u8 malelf_patch_at(MalelfBinary *bin, _u32 offset, unsigned value);


MALELF_END_DECLS


#endif
