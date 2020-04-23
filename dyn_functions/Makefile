#-- TARGET definition :
TARGET_TYPE=#one of : exe, lib, default to exe
TARGET=
#-- libs definition :
LIBS=libft#list of libs (prefixed with lib : e.g libfoo) which must be recompiled by this Makefile
STDLIBS=#list of list which must be include to compile
#-- definitions for each libfoo from $(LIBS):
ft_DIR=../libft#mandatory, directory containing both library and its Makefile.
foo_INC=#optionnal, default to lib_DIR : dirname containing lib's headers files.
#-- srcs definition :
SRCS=
SRCS_DIRS=
SRCS_INCS=.#
#
#---- dont change anything after this
#--------------------------------------------------------------------------------------

GEN_MAKEFILE_PATH=../.d42Makefile
include $(GEN_MAKEFILE_PATH)/genMakefile

attempt1: attempt1.o 
	gcc $(IFLAGS) $^ -o $@ $(LDLIBS)

attempt2: attempt2.o 
	gcc $(IFLAGS) $^ -o $@ $(LDLIBS)
