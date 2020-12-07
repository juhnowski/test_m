/*
** Automatically generated from `hello.m'
** by the Mercury compiler,
** version 20.06
** configured for x86_64-apple-darwin19.6.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=3
** UNBOXED_FLOAT=yes
** UNBOXED_INT64S=yes
** PREGENERATED_DIST=no
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module hello.
// :- implementation.

/*
INIT mercury__hello__init
ENDINIT
*/

#include "hello.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"










#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
main_2_p_0(void)
{
  {
    MR_String Var_5 = (MR_String) "Hello, World!\n";

    mercury__io__write_string_3_p_0(Var_5);
  }
}

void mercury__hello__init(void)
{
}

void mercury__hello__init_type_tables(void)
{
}

void mercury__hello__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hello__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hello.
