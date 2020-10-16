.PHONY: clean dir
.IGNORE: clean

CXX = g++
CXXFLAGS = -std=c++14 -g

SOURCE_DIR = src
BUILD_DIR = build
SOURCE_FILES = $(wildcard $(SOURCE_DIR)/*.cpp)
OBJECT_FILES = $(patsubst $(SOURCE_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SOURCE_FILES))
EXEC = adventure


build: dir $(BUILD_DIR)/$(EXEC)

run: $(BUILD_DIR)/$(EXEC)
	@$(BUILD_DIR)/$(EXEC)

$(BUILD_DIR)/$(EXEC) : $(OBJECT_FILES)
	$(CXX) $^ -g -o $@

dir:
	@mkdir -p $(BUILD_DIR)

$(OBJECT_FILES) : $(BUILD_DIR)/%.o : $(SOURCE_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) $< -c -o $@

clean:
	@rm -rf $(OBJECT_FILES) $(BUILD_DIR)/$(EXEC) $(BUILD_DIR)
	@echo ...project cleaned.