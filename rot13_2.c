/*
** Automatically generated from `rot13_2.m'
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


// :- module rot13_2.
// :- implementation.

/*
INIT mercury__rot13_2__init
ENDINIT
*/

#include "rot13_2.mih"


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
#include "string.format.mih"
#include "string.parse_util.mih"






/* sealed */ struct rot13_2__vector_common_type_1_0_s {
  const MR_Char rot13_2__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct rot13_2__vector_common_type_1_0_s rot13_2_vector_common_1[58];




static /* final */ const struct rot13_2__vector_common_type_1_0_s rot13_2_vector_common_1[58] = {
  /* row 0 */   {     (MR_Char) 78 },
  /* row 1 */   {     (MR_Char) 79 },
  /* row 2 */   {     (MR_Char) 80 },
  /* row 3 */   {     (MR_Char) 81 },
  /* row 4 */   {     (MR_Char) 82 },
  /* row 5 */   {     (MR_Char) 83 },
  /* row 6 */   {     (MR_Char) 84 },
  /* row 7 */   {     (MR_Char) 85 },
  /* row 8 */   {     (MR_Char) 86 },
  /* row 9 */   {     (MR_Char) 87 },
  /* row 10 */   {     (MR_Char) 88 },
  /* row 11 */   {     (MR_Char) 89 },
  /* row 12 */   {     (MR_Char) 90 },
  /* row 13 */   {     (MR_Char) 65 },
  /* row 14 */   {     (MR_Char) 66 },
  /* row 15 */   {     (MR_Char) 67 },
  /* row 16 */   {     (MR_Char) 68 },
  /* row 17 */   {     (MR_Char) 69 },
  /* row 18 */   {     (MR_Char) 70 },
  /* row 19 */   {     (MR_Char) 71 },
  /* row 20 */   {     (MR_Char) 72 },
  /* row 21 */   {     (MR_Char) 73 },
  /* row 22 */   {     (MR_Char) 71 },
  /* row 23 */   {     (MR_Char) 75 },
  /* row 24 */   {     (MR_Char) 76 },
  /* row 25 */   {     (MR_Char) 77 },
  /* row 26 */   {     (MR_Char) 0 },
  /* row 27 */   {     (MR_Char) 0 },
  /* row 28 */   {     (MR_Char) 0 },
  /* row 29 */   {     (MR_Char) 0 },
  /* row 30 */   {     (MR_Char) 0 },
  /* row 31 */   {     (MR_Char) 0 },
  /* row 32 */   {     (MR_Char) 110 },
  /* row 33 */   {     (MR_Char) 111 },
  /* row 34 */   {     (MR_Char) 112 },
  /* row 35 */   {     (MR_Char) 113 },
  /* row 36 */   {     (MR_Char) 114 },
  /* row 37 */   {     (MR_Char) 115 },
  /* row 38 */   {     (MR_Char) 116 },
  /* row 39 */   {     (MR_Char) 117 },
  /* row 40 */   {     (MR_Char) 118 },
  /* row 41 */   {     (MR_Char) 119 },
  /* row 42 */   {     (MR_Char) 120 },
  /* row 43 */   {     (MR_Char) 121 },
  /* row 44 */   {     (MR_Char) 122 },
  /* row 45 */   {     (MR_Char) 97 },
  /* row 46 */   {     (MR_Char) 98 },
  /* row 47 */   {     (MR_Char) 99 },
  /* row 48 */   {     (MR_Char) 100 },
  /* row 49 */   {     (MR_Char) 101 },
  /* row 50 */   {     (MR_Char) 102 },
  /* row 51 */   {     (MR_Char) 103 },
  /* row 52 */   {     (MR_Char) 104 },
  /* row 53 */   {     (MR_Char) 105 },
  /* row 54 */   {     (MR_Char) 106 },
  /* row 55 */   {     (MR_Char) 107 },
  /* row 56 */   {     (MR_Char) 108 },
  /* row 57 */   {     (MR_Char) 109 },
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
    mercury__io__read_char_3_p_0(&Result_4);
    switch (MR_tag((MR_Word) Result_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Result_4, (MR_Integer) 0)));
          MR_Char Var_16;
          MR_Char CharOut_22;

          if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_5 - (MR_Unsigned) 65))) <= ((MR_Unsigned) 57)))
            if (((MR_Unsigned) 288230371923853311U & (((MR_Integer) 1 << ((MR_Integer) ((MR_Unsigned) Char_5 - (MR_Unsigned) 65))))))
            {
              CharOut_22 = ((&rot13_2_vector_common_1[0 + (MR_Integer) ((MR_Unsigned) Char_5 - (MR_Unsigned) 65)]))->rot13_2__vector_common_type_1_0__vct_1_f_0;
              succeeded = MR_TRUE;
            }
            else
              succeeded = MR_FALSE;
          else
            succeeded = MR_FALSE;
          if (succeeded)
            Var_16 = CharOut_22;
          else
            Var_16 = Char_5;
          mercury__io__write_char_3_p_0(Var_16);
          // direct tailcall eliminated
          ;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ErrorCode_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_4, (MR_Integer) 0))));
          MR_String Var_14;
          MR_String Var_20;

          Var_14 = mercury__io__error_message_1_f_0(ErrorCode_6);
          mercury__io__write_string_3_p_0(Var_14);
          Var_20 = (MR_String) "\n";
          mercury__io__write_string_3_p_0(Var_20);
        }
        break;
    }
    break;
  }
}

void mercury__rot13_2__init(void)
{
}

void mercury__rot13_2__init_type_tables(void)
{
}

void mercury__rot13_2__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__rot13_2__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module rot13_2.
