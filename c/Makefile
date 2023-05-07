CC=gcc
CFLAGS=-Wall
LDFLAGS=

SOURCE_DIR=src
BUILD_DIR=objs

TARGET ?= main
SOURCES := $(shell find $(SOURCE_DIR) -name '*.c')


# --- FUNCTIONS --- #

# Gets corresponding object files from  c file(s)
define get_obj
	$(patsubst %.c,$(BUILD_DIR)/%.o,$(notdir $(1)))
endef

# Creates an obj file from a given C file
define mk_c_rule
$(patsubst %.c,$(BUILD_DIR)/%.o,$(notdir $(1))): $(1) | $(BUILD_DIR)
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $$^ -c -o $$@
endef


# --- HELPER VARIBLES --- #

# List of all relevant object files
OBJ_FILES := $(call get_obj,$(SOURCES))


# --- BUILD RULES --- #

# Build all
all: $(TARGET)

# Create build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $@

# Build object files
$(foreach f, $(SOURCES), $(eval $(call mk_c_rule, $(f))))

# Build executable
$(TARGET): $(OBJ_FILES)
	$(CC) $^ $(CFLAGS) $(LDFLAGS) -o $@

clean:
	rm -f $(TARGET)
	rm -rf $(BUILD_DIR)

run:
	./$(TARGET)

.PHONY: clean run all
