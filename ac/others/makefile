CXX := g++ # コンパイラをg++に指定
CXXFLAGS := -Wall # コンパイルオプションを指定
SUFFIXES := .cpp # ソースの拡張子を指定
SOURCES = $(wildcard *$(SUFFIXES)) # コンパイルするソースの指定
TARGETS = $(SOURCES:.cpp=) # 全てのファイルでコンパイルを実行

.PHONY:all # 仮想ファイルallを作る
all: $(TARGETS) # 仮想ファイルを作り，TARGETSを実行する
# $@: ターゲットファイル名
# $<: 最初に依存するファイル名
.cpp:
	$(CXX) $(CXXFLAGS) -o $@ $<