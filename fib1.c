/*
** Automatically generated from `fib1.m'
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


// :- module fib1.
// :- implementation.

/*
INIT mercury__fib1__init
ENDINIT
*/

#include "fib1.mih"


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
#include "string.format.mih"
#include "string.parse_util.mih"




static MR_Integer MR_CALL 
fib1__fib1_1_f_0(
  MR_Integer N_3);


static /* final */ const MR_Box fib1_scalar_common_1[1][1];




static /* final */ const MR_Box fib1_scalar_common_1[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



void MR_CALL 
main_2_p_0(void)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Result_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_line_as_string_3_p_0(&Result_4);
    succeeded = (Result_4 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_String Var_26 = (MR_String) "bye bye...\n";

      mercury__io__write_string_3_p_0(Var_26);
    }
    else
    {
      MR_Integer N_6;
      MR_String String_5;
      MR_String Var_13;

      succeeded = ((MR_tag((MR_Word) Result_4)) == (MR_Integer) 1);
      if (succeeded)
      {
        String_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_4, (MR_Integer) 0))));
        Var_13 = mercury__string__strip_1_f_0(String_5);
        succeeded = mercury__string__to_int_2_p_0(Var_13, &N_6);
      }
      if (succeeded)
      {
        MR_Integer Var_20;
        MR_String Var_28;
        MR_String Var_30;
        MR_Word Var_36;
        MR_String Var_38;
        MR_String Var_40;
        MR_String Var_47;

        Var_20 = fib1__fib1_1_f_0(N_6);
        Var_28 = (MR_String) "fib1(";
        mercury__io__write_string_3_p_0(Var_28);
        Var_36 = (MR_Word) (&fib1_scalar_common_1[0]);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_36, N_6, &Var_30);
        mercury__io__write_string_3_p_0(Var_30);
        Var_38 = (MR_String) ")=";
        mercury__io__write_string_3_p_0(Var_38);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_36, Var_20, &Var_40);
        mercury__io__write_string_3_p_0(Var_40);
        Var_47 = (MR_String) "\n";
        mercury__io__write_string_3_p_0(Var_47);
        // direct tailcall eliminated
        ;
        continue;
      }
      else
      {
        MR_String Var_48 = (MR_String) "That\'s not a number...\n";

        mercury__io__write_string_3_p_0(Var_48);
      }
    }
    break;
  }
}

static MR_Integer MR_CALL 
fib1__fib1_1_f_0(
  MR_Integer N_3)
{
  {
    MR_bool succeeded;
    MR_Integer HeadVar__2_2;
    MR_Integer Var_4 = (MR_Integer) 2;

    succeeded = (N_3 <= Var_4);
    if (succeeded)
      HeadVar__2_2 = (MR_Integer) 1;
    else
    {
      MR_Integer Var_5;
      MR_Integer Var_6;
      MR_Integer Var_7 = (MR_Integer) 1;
      MR_Integer Var_8;
      MR_Integer Var_9;
      MR_Integer Var_10;

      Var_6 = (MR_Integer) ((MR_Unsigned) N_3 - (MR_Unsigned) Var_7);
      Var_5 = fib1__fib1_1_f_0(Var_6);
      Var_10 = (MR_Integer) 2;
      Var_9 = (MR_Integer) ((MR_Unsigned) N_3 - (MR_Unsigned) Var_10);
      Var_8 = fib1__fib1_1_f_0(Var_9);
      HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Var_5 + (MR_Unsigned) Var_8);
    }
    return HeadVar__2_2;
  }
}

void mercury__fib1__init(void)
{
}

void mercury__fib1__init_type_tables(void)
{
}

void mercury__fib1__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__fib1__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module fib1.
