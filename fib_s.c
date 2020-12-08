/*
** Automatically generated from `fib_s.m'
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


// :- module fib_s.
// :- implementation.

/*
INIT mercury__fib_s__init
ENDINIT
*/

#include "fib_s.mih"


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
fib_s__fib1_1_f_0(
  MR_Integer N_3);


static /* final */ const MR_Box fib_s_scalar_common_1[1][1];




static /* final */ const MR_Box fib_s_scalar_common_1[1][1] = {
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
    switch (MR_tag((MR_Word) Result_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_57 = (MR_String) "bye bye...\n";

          mercury__io__write_string_3_p_0(Var_57);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_4, (MR_Integer) 0))));
          MR_Integer N_6;
          MR_String Var_17;

          Var_17 = mercury__string__strip_1_f_0(String_5);
          succeeded = mercury__string__to_int_2_p_0(Var_17, &N_6);
          if (succeeded)
          {
            MR_Integer Var_24;
            MR_String Var_34;
            MR_String Var_36;
            MR_Word Var_42;
            MR_String Var_44;
            MR_String Var_46;
            MR_String Var_53;

            Var_24 = fib_s__fib1_1_f_0(N_6);
            Var_34 = (MR_String) "fib1(";
            mercury__io__write_string_3_p_0(Var_34);
            Var_42 = (MR_Word) (&fib_s_scalar_common_1[0]);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_42, N_6, &Var_36);
            mercury__io__write_string_3_p_0(Var_36);
            Var_44 = (MR_String) ")=";
            mercury__io__write_string_3_p_0(Var_44);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_42, Var_24, &Var_46);
            mercury__io__write_string_3_p_0(Var_46);
            Var_53 = (MR_String) "\n";
            mercury__io__write_string_3_p_0(Var_53);
          }
          else
          {
            MR_String Var_54 = (MR_String) "That\'s not a number...\n";

            mercury__io__write_string_3_p_0(Var_54);
          }
          // direct tailcall eliminated
          ;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ErrorCode_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_4, (MR_Integer) 0))));
          MR_String Var_15;
          MR_String Var_56;

          Var_15 = mercury__io__error_message_1_f_0(ErrorCode_7);
          mercury__io__write_string_3_p_0(Var_15);
          Var_56 = (MR_String) "\n";
          mercury__io__write_string_3_p_0(Var_56);
        }
        break;
    }
    break;
  }
}

static MR_Integer MR_CALL 
fib_s__fib1_1_f_0(
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
      Var_5 = fib_s__fib1_1_f_0(Var_6);
      Var_10 = (MR_Integer) 2;
      Var_9 = (MR_Integer) ((MR_Unsigned) N_3 - (MR_Unsigned) Var_10);
      Var_8 = fib_s__fib1_1_f_0(Var_9);
      HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Var_5 + (MR_Unsigned) Var_8);
    }
    return HeadVar__2_2;
  }
}

void mercury__fib_s__init(void)
{
}

void mercury__fib_s__init_type_tables(void)
{
}

void mercury__fib_s__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__fib_s__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module fib_s.
