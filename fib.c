/*
** Automatically generated from `fib.m'
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


// :- module fib.
// :- implementation.

/*
INIT mercury__fib__init
ENDINIT
*/

#include "fib.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
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




static void MR_CALL 
fib__fib_2_p_0(
  MR_Integer N_3,
  MR_Integer * X_4);







#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
main_2_p_0(void)
{
  {
    MR_Integer X_4;
    MR_Integer Var_7 = (MR_Integer) 17;
    MR_String Var_8;
    MR_String Var_11;

    fib__fib_2_p_0(Var_7, &X_4);
    Var_8 = (MR_String) "fib(17),";
    mercury__io__write_string_3_p_0(Var_8);
    mercury__io__write_int_3_p_0(X_4);
    Var_11 = (MR_String) ")\n";
    mercury__io__write_string_3_p_0(Var_11);
  }
}

static void MR_CALL 
fib__fib_2_p_0(
  MR_Integer N_3,
  MR_Integer * X_4)
{
  {
    MR_bool succeeded;
    MR_Integer Var_7 = (MR_Integer) 2;

    succeeded = (N_3 <= Var_7);
    if (succeeded)
      *X_4 = (MR_Integer) 1;
    else
    {
      MR_Integer A_5;
      MR_Integer B_6;
      MR_Integer Var_8;
      MR_Integer Var_9 = (MR_Integer) 1;
      MR_Integer Var_10;
      MR_Integer Var_11;

      Var_8 = (MR_Integer) ((MR_Unsigned) N_3 - (MR_Unsigned) Var_9);
      fib__fib_2_p_0(Var_8, &A_5);
      Var_11 = (MR_Integer) 2;
      Var_10 = (MR_Integer) ((MR_Unsigned) N_3 - (MR_Unsigned) Var_11);
      fib__fib_2_p_0(Var_10, &B_6);
      *X_4 = (MR_Integer) ((MR_Unsigned) A_5 + (MR_Unsigned) B_6);
    }
  }
}

void mercury__fib__init(void)
{
}

void mercury__fib__init_type_tables(void)
{
}

void mercury__fib__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__fib__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module fib.
