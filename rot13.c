/*
** Automatically generated from `rot13.m'
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


// :- module rot13.
// :- implementation.

/*
INIT mercury__rot13__init
ENDINIT
*/

#include "rot13.mih"


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

          succeeded = (Char_5 == (MR_Char) 97);
          if (succeeded)
            Var_16 = (MR_Char) 110;
          else
          {
            succeeded = (Char_5 == (MR_Char) 98);
            if (succeeded)
              Var_16 = (MR_Char) 111;
            else
            {
              succeeded = (Char_5 == (MR_Char) 99);
              if (succeeded)
                Var_16 = (MR_Char) 112;
              else
              {
                succeeded = (Char_5 == (MR_Char) 100);
                if (succeeded)
                  Var_16 = (MR_Char) 113;
                else
                {
                  succeeded = (Char_5 == (MR_Char) 101);
                  if (succeeded)
                    Var_16 = (MR_Char) 114;
                  else
                  {
                    succeeded = (Char_5 == (MR_Char) 102);
                    if (succeeded)
                      Var_16 = (MR_Char) 115;
                    else
                    {
                      succeeded = (Char_5 == (MR_Char) 103);
                      if (succeeded)
                        Var_16 = (MR_Char) 116;
                      else
                      {
                        succeeded = (Char_5 == (MR_Char) 104);
                        if (succeeded)
                          Var_16 = (MR_Char) 117;
                        else
                        {
                          succeeded = (Char_5 == (MR_Char) 105);
                          if (succeeded)
                            Var_16 = (MR_Char) 118;
                          else
                          {
                            succeeded = (Char_5 == (MR_Char) 106);
                            if (succeeded)
                              Var_16 = (MR_Char) 119;
                            else
                            {
                              succeeded = (Char_5 == (MR_Char) 107);
                              if (succeeded)
                                Var_16 = (MR_Char) 120;
                              else
                              {
                                succeeded = (Char_5 == (MR_Char) 108);
                                if (succeeded)
                                  Var_16 = (MR_Char) 121;
                                else
                                {
                                  succeeded = (Char_5 == (MR_Char) 109);
                                  if (succeeded)
                                    Var_16 = (MR_Char) 122;
                                  else
                                  {
                                    succeeded = (Char_5 == (MR_Char) 110);
                                    if (succeeded)
                                      Var_16 = (MR_Char) 97;
                                    else
                                    {
                                      succeeded = (Char_5 == (MR_Char) 111);
                                      if (succeeded)
                                        Var_16 = (MR_Char) 98;
                                      else
                                      {
                                        succeeded = (Char_5 == (MR_Char) 112);
                                        if (succeeded)
                                          Var_16 = (MR_Char) 99;
                                        else
                                        {
                                          succeeded = (Char_5 == (MR_Char) 113);
                                          if (succeeded)
                                            Var_16 = (MR_Char) 100;
                                          else
                                          {
                                            succeeded = (Char_5 == (MR_Char) 114);
                                            if (succeeded)
                                              Var_16 = (MR_Char) 101;
                                            else
                                            {
                                              succeeded = (Char_5 == (MR_Char) 115);
                                              if (succeeded)
                                                Var_16 = (MR_Char) 102;
                                              else
                                              {
                                                succeeded = (Char_5 == (MR_Char) 116);
                                                if (succeeded)
                                                  Var_16 = (MR_Char) 103;
                                                else
                                                {
                                                  succeeded = (Char_5 == (MR_Char) 117);
                                                  if (succeeded)
                                                    Var_16 = (MR_Char) 104;
                                                  else
                                                  {
                                                    succeeded = (Char_5 == (MR_Char) 118);
                                                    if (succeeded)
                                                      Var_16 = (MR_Char) 105;
                                                    else
                                                    {
                                                      succeeded = (Char_5 == (MR_Char) 119);
                                                      if (succeeded)
                                                        Var_16 = (MR_Char) 106;
                                                      else
                                                      {
                                                        succeeded = (Char_5 == (MR_Char) 120);
                                                        if (succeeded)
                                                          Var_16 = (MR_Char) 107;
                                                        else
                                                        {
                                                          succeeded = (Char_5 == (MR_Char) 121);
                                                          if (succeeded)
                                                            Var_16 = (MR_Char) 108;
                                                          else
                                                          {
                                                            succeeded = (Char_5 == (MR_Char) 122);
                                                            if (succeeded)
                                                              Var_16 = (MR_Char) 109;
                                                            else
                                                            {
                                                              succeeded = (Char_5 == (MR_Char) 65);
                                                              if (succeeded)
                                                                Var_16 = (MR_Char) 78;
                                                              else
                                                              {
                                                                succeeded = (Char_5 == (MR_Char) 66);
                                                                if (succeeded)
                                                                  Var_16 = (MR_Char) 79;
                                                                else
                                                                {
                                                                  succeeded = (Char_5 == (MR_Char) 67);
                                                                  if (succeeded)
                                                                    Var_16 = (MR_Char) 80;
                                                                  else
                                                                  {
                                                                    succeeded = (Char_5 == (MR_Char) 68);
                                                                    if (succeeded)
                                                                      Var_16 = (MR_Char) 81;
                                                                    else
                                                                    {
                                                                      succeeded = (Char_5 == (MR_Char) 69);
                                                                      if (succeeded)
                                                                        Var_16 = (MR_Char) 82;
                                                                      else
                                                                      {
                                                                        succeeded = (Char_5 == (MR_Char) 70);
                                                                        if (succeeded)
                                                                          Var_16 = (MR_Char) 83;
                                                                        else
                                                                        {
                                                                          succeeded = (Char_5 == (MR_Char) 71);
                                                                          if (succeeded)
                                                                            Var_16 = (MR_Char) 84;
                                                                          else
                                                                          {
                                                                            succeeded = (Char_5 == (MR_Char) 72);
                                                                            if (succeeded)
                                                                              Var_16 = (MR_Char) 85;
                                                                            else
                                                                            {
                                                                              succeeded = (Char_5 == (MR_Char) 73);
                                                                              if (succeeded)
                                                                                Var_16 = (MR_Char) 86;
                                                                              else
                                                                              {
                                                                                succeeded = (Char_5 == (MR_Char) 74);
                                                                                if (succeeded)
                                                                                  Var_16 = (MR_Char) 87;
                                                                                else
                                                                                {
                                                                                  succeeded = (Char_5 == (MR_Char) 75);
                                                                                  if (succeeded)
                                                                                    Var_16 = (MR_Char) 88;
                                                                                  else
                                                                                  {
                                                                                    succeeded = (Char_5 == (MR_Char) 76);
                                                                                    if (succeeded)
                                                                                      Var_16 = (MR_Char) 89;
                                                                                    else
                                                                                    {
                                                                                      succeeded = (Char_5 == (MR_Char) 77);
                                                                                      if (succeeded)
                                                                                        Var_16 = (MR_Char) 90;
                                                                                      else
                                                                                      {
                                                                                        succeeded = (Char_5 == (MR_Char) 78);
                                                                                        if (succeeded)
                                                                                          Var_16 = (MR_Char) 65;
                                                                                        else
                                                                                        {
                                                                                          succeeded = (Char_5 == (MR_Char) 79);
                                                                                          if (succeeded)
                                                                                            Var_16 = (MR_Char) 66;
                                                                                          else
                                                                                          {
                                                                                            succeeded = (Char_5 == (MR_Char) 80);
                                                                                            if (succeeded)
                                                                                              Var_16 = (MR_Char) 67;
                                                                                            else
                                                                                            {
                                                                                              succeeded = (Char_5 == (MR_Char) 81);
                                                                                              if (succeeded)
                                                                                                Var_16 = (MR_Char) 68;
                                                                                              else
                                                                                              {
                                                                                                succeeded = (Char_5 == (MR_Char) 82);
                                                                                                if (succeeded)
                                                                                                  Var_16 = (MR_Char) 69;
                                                                                                else
                                                                                                {
                                                                                                  succeeded = (Char_5 == (MR_Char) 83);
                                                                                                  if (succeeded)
                                                                                                    Var_16 = (MR_Char) 70;
                                                                                                  else
                                                                                                  {
                                                                                                    succeeded = (Char_5 == (MR_Char) 84);
                                                                                                    if (succeeded)
                                                                                                      Var_16 = (MR_Char) 71;
                                                                                                    else
                                                                                                    {
                                                                                                      succeeded = (Char_5 == (MR_Char) 85);
                                                                                                      if (succeeded)
                                                                                                        Var_16 = (MR_Char) 72;
                                                                                                      else
                                                                                                      {
                                                                                                        succeeded = (Char_5 == (MR_Char) 86);
                                                                                                        if (succeeded)
                                                                                                          Var_16 = (MR_Char) 73;
                                                                                                        else
                                                                                                        {
                                                                                                          succeeded = (Char_5 == (MR_Char) 87);
                                                                                                          if (succeeded)
                                                                                                            Var_16 = (MR_Char) 74;
                                                                                                          else
                                                                                                          {
                                                                                                            succeeded = (Char_5 == (MR_Char) 88);
                                                                                                            if (succeeded)
                                                                                                              Var_16 = (MR_Char) 75;
                                                                                                            else
                                                                                                            {
                                                                                                              succeeded = (Char_5 == (MR_Char) 89);
                                                                                                              if (succeeded)
                                                                                                                Var_16 = (MR_Char) 76;
                                                                                                              else
                                                                                                              {
                                                                                                                succeeded = (Char_5 == (MR_Char) 90);
                                                                                                                if (succeeded)
                                                                                                                  Var_16 = (MR_Char) 77;
                                                                                                                else
                                                                                                                  Var_16 = Char_5;
                                                                                                              }
                                                                                                            }
                                                                                                          }
                                                                                                        }
                                                                                                      }
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
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

void mercury__rot13__init(void)
{
}

void mercury__rot13__init_type_tables(void)
{
}

void mercury__rot13__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__rot13__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module rot13.
