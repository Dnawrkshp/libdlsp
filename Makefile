EE_SRC_DIR = src/
EE_OBJS_DIR = obj/
EE_LIB_DIR = lib/


EE_CFLAGS += -DNTSC

EE_LIB = $(EE_LIB_DIR)libdlsp.a
EE_OBJS = underlay.o overlay.o math.o math3d.o

EE_OBJS := $(EE_OBJS:%=$(EE_OBJS_DIR)%)

all: $(EE_OBJS_DIR) $(EE_LIB_DIR) $(EE_LIB)

$(EE_OBJS_DIR):
	mkdir -p $(EE_OBJS_DIR)

$(EE_LIB_DIR):
	mkdir -p $(EE_LIB_DIR)

$(EE_OBJS_DIR)%.o : $(EE_SRC_DIR)%.cpp
	$(EE_CXX_COMPILE) -c $< -o $@

$(EE_OBJS_DIR)%.o : $(EE_SRC_DIR)%.c
	$(EE_C_COMPILE) -c $< -o $@

$(EE_OBJS_DIR)%.o : $(EE_SRC_DIR)%.S
	$(EE_C_COMPILE) -c $< -o $@

install: all
	mkdir -p $(DESTDIR)$(PS2SDK)/ports/include/libdlsp
	mkdir -p $(DESTDIR)$(PS2SDK)/ports/lib
	cp -f $(EE_LIB) $(DESTDIR)$(PS2SDK)/ports/lib
	cp -f include/*.h $(DESTDIR)$(PS2SDK)/ports/include/libdlsp

clean:
	rm -f -r $(EE_OBJS_DIR)
	rm -f -r $(EE_LIB_DIR)

sample:

include $(PS2SDK)/samples/Makefile.pref
include Makefile.eeglobal
